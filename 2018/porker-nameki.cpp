// porker.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int hand[5] = {};
int suit[5] = {};
int num[5] = {};
int card[53] ={}; //0-12,13-25,26-38,39-51,52
int point = 0;
int ppoint = 0;//player-point
void changecard(int choose);
int flash();
int straight();
int pair();
int jpair();
int jflash();
int jstraight();
void vscpu();
void turn();
void showhand();
void sort();
void changing();
void judge();


/*

--役の強さ--

10 ロイヤルフラッシュ(A-K-Q-J-10)
9  ファイブカード
8  ストレートフラッシュ(2-A は繋がらない)
7  フォーカード
6  フルハウス
5  フラッシュ
4  ストレート(2-A は繋がらない)
3  スリーカード
2  ツーペア
1  ワンペア
0  ハイカード
*数字、スートによる同じ役の中での強弱はなし
*ジョーカーがある場合、ロイヤルフラッシュにならない
*2-Aでストレートが繋がらないのは仕様です。

*/


void changecard(int choose){//choose-1 番目のカードを交換
	int i=0;
	int rnd = 0;
	srand(time(NULL));
	while(i<1){
		rnd = rand() % 53;
		if(card[rnd] != 1){
			hand[choose] = rnd;
			card[rnd]=1;
			i++;
		}
	}
}

void sort(){//手札を通し番号順にソート
	int i=0;
	int temp;
	for(i=0; i<5; i++){//バブルソート(多分)
		int j=0;
		for(j=0; j<4; j++){
			if(hand[j]>hand[j+1]){
				temp = hand[j];
				hand[j] = hand[j+1];
				hand[j+1] = temp;
			}
		}
	}
	for(i=0; i<5; i++){//num(0-12)
		num[i] = hand[i] % 13;
	}
	for(i=0; i<5; i++){//suit(0-4)
		suit[i] = hand[i] / 13;
	}
}

int straight(){
	int i = 0;
	int dif=0;
	for(i=0; i<5; i++){//Aは14として扱う
		if(num[i]==0){
			num[i] = 13;
		}
	}
	for(i=0; i<5; i++){//手札を数字順にソート
		int j=0;
		int temp=0;
		for(j=0; j<4; j++){
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(i=0; i<4; i++){//"一つ先"≠"今+1"ならdifが増え、分岐
		int temp=0;
		temp = num[i];
		temp++;
		if(temp != num[i+1]){
			dif++;
		}
	}
	if(dif==0){
		if (num[4] == 13) {
			printf("ロイヤルフラッシュ");
			return 10;
		}
		else {
			printf("ストレート\n");
			return 4;
		}
	}else{
		printf("ストレートなし\n");
		return 0;
	}
}

int jstraight() {
	int i = 0;
	int dif = 0;
	int joker = 0;
	for (i = 0; i<4; i++) {
		if (num[i] == 0) {
			num[i] = 13;
		}
	}
	for (i = 0; i<4; i++) {//手札を数字順にソート
		int j = 0;
		int temp = 0;
		for (j = 0; j<4; j++) {
			if (num[j]>num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (i = 0; i<3; i++) {
		if (num[i]+2 == num[i + 1]) {//"一つ先"="今+2"ならjokerが1が増える。2以上になると分岐
			joker++;
		}
		else if(num[i]+1 != num[i+1]){//"一つ先"="今+1"でないならdifが増え、分岐
			dif++;
		}
	}
	if (dif == 0 && joker < 2) {
		printf("ストレート\n");
		return 4;
	}
	else {
		printf("ストレートなし\n");
		return 0;
	}
}

int flash(){
	int i =0;
	int j =0;
	int dif=0;
	for(i=0; i<4; i++){//"一つ先"≠"今"ならdifが増え、分岐
		if(suit[i] != suit[i+1]){
			dif++;
		}
	}
	if(dif == 0){//判定表示
		if(suit[1] == 0){
			printf("スペードのフラッシュ\n");
			return 5;
		}else if(suit[1] == 1){
			printf("ハートのフラッシュ\n");
			return 5;
		}else if(suit[1] == 2){
			printf("クローバーのフラッシュ\n");
			return 5;
		}else if(suit[1] == 3){
			printf("ダイヤのフラッシュ\n");
			return 5;
		}
	}else{
		printf("フラッシュなし\n");
		return 0;
	}
}

int jflash() {//戻り値の使用先なし(同上)
	int i = 0;
	int j = 0;
	int dif = 0;
	for (i = 0; i<3; i++) {//1-4枚目のみで判定(ジョーカーは確定で5枚目)
		if (suit[i] != suit[i + 1]) {
			dif++;
		}
	}
	if (dif == 0) {//判定表示
		if (suit[1] == 0) {
			printf("スペードのフラッシュ\n");
			return 5;
		}
		else if (suit[1] == 1) {
			printf("ハートのフラッシュ\n");
			return 5;
		}
		else if (suit[1] == 2) {
			printf("クローバーのフラッシュ\n");
			return 5;
		}
		else if (suit[1] == 3) {
			printf("ダイヤのフラッシュ\n");
			return 5;
		}
	}
	else {
		printf("フラッシュなし\n");
		return 0;
	}
}

void showhand(){
	int i = 0;
	for(i=0; i<5; i++){
		if(suit[i] == 0){
			printf("スペードの%d\n", num[i] + 1);
		}else if(suit[i] == 1){
			printf("ハートの%d\n", num[i] + 1);
		}else if(suit[i] == 2){
			printf("クローバーの%d\n", num[i] + 1);
		}else if(suit[i] == 3){
			printf("ダイヤの%d\n", num[i] + 1);
		}
		else {
			printf("ジョーカー\n");
		}
	}
}

int pair(){
	int i=0;
	int j=0;
	int pair=0;
	for(i=0; i<5; i++){//組み合わせ的なペア判定
		for(j=0; j<5; j++){
			if(num[i]==num[j]){
				pair++;
			}
		}
	}
	if(pair==5){
		printf("ノーペア\n");
		return 0;
	}else if(pair==7){
		printf("ワンペア\n");
		return 1;
	}else if(pair==9){
		printf("ツーペア\n");
		return 2;
	}else if(pair==11){
		printf("スリーカード\n");
		return 3;
	}else if(pair==13){
		printf("フルハウス\n");
		return 6;
	}else if(pair==17){
		printf("フォーカード\n");
		return 7;
	}
}

int jpair() {
	int i = 0;
	int j = 0;
	int pair = 0;
	for (i = 0; i<4; i++) {//ジョーカー以外(1-4枚目のみで判定)
		for (j = 0; j<4; j++) {
			if (num[i] == num[j]) {
				pair++;
			}
		}
	}
	if (pair == 4) {//ノーペア->ワンペア
		printf("ワンペア\n");
		return 1;
	}
	else if (pair == 6) {//ワンペア->スリーカード
		printf("スリーカード\n");
		return 3;
	}
	else if (pair == 8) {//ツーペア->フルハウス
		printf("フルハウス\n");
		return 6;
	}
	else if (pair == 10) {//スリーカード->フォーカード
		printf("フォーカード\n");
		return 7;
	}
	else if (pair == 16) {//フォーカード->ファイブカード
		printf("ファイブカード\n");
		return 9;
	}
}

void changing(){
	int i=0;
	char ans[64];
	for(i=0; i<5; i++){
		printf("%d枚目を交換しますか？(y/n)",i+1);
		scanf("%s",ans);
		if(ans[0] == 'y'){
			changecard(i);
		}
	}
}
/*
"y"以外はすべてnoです
一文字目のみ判定するので"yes"でも"y"でもokです
でもansの配列数[64]超えられるとオーバーフローします。たすけて。
*/

void judge(){
	int fl;
	int st;
	int pa;
	if(hand[4] == 52){//ジョーカーが存在するときの判定
		fl = jflash();
		pa = jpair();
		st = jstraight();
		point = fl;
		if(pa > fl){
			point = pa;
		}else if (st > fl) {
			point = st;
		}
		//printf("%d\n", point);
	}else{//ジョーカーが存在しないときの判定
		fl = flash();
		st = straight();
		pa = pair();
		point = fl;
		if (pa > fl) {
			point = pa;
		}
		else if (st > fl) {
			point = st;
		}
		//printf("%d\n", point);
	}
}

void vscpu() {//cpuには初期手札で戦ってもらいます
	int i;
	for (i = 0; i<5; i++) {
		changecard(i);
	}
	printf("-----CPUの役-----\n");
	sort();
	showhand();
	printf("\n");
	judge();
	printf("-----------------\n");
	if (point > ppoint) {
		printf("ゲーム終了、あなたの負けです\n");
	}
	else if(point < ppoint) {
		printf("ゲーム終了、あなたの勝ちです\n");
	}
	else {
		printf("ゲーム終了、引き分けです\n");
	}
}

void turn() {
	sort();
	printf("-----あなたの手札-----\n");
	showhand();
	printf("\n");
	judge();
	printf("----------------------\n");
	printf("\n");
}

int main(){
	int i=0;
	printf("-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
	printf(" ポーカー(ジョーカー入り) \n");
	printf("+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n");
	for(i=0; i<5; i++){//初期手札
		changecard(i);
	}
	turn();
	changing();
	printf("\n");
	turn();
	changing();
	printf("\n");
	turn();
	ppoint = point;
	printf("\n");
	vscpu();
	return 0;
}


