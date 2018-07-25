#include<stdio.h>


int main(void){

	char board[8][8];
	int a, b, c=0, d=1, e=0, f=0, g=0;
	int check;
	int losebla = 0;
	int losewhi = 0;
	int winbla = 0;
	int winwhi =0;
	int judgebla = 0;
	int judgewhi = 0;
	char masu = '-';
	char bla = 'o';
	char whi = 'x';
	int turn = 0;
	int gyo;
	int retu;

	printf("オセロだよ\n\n");
	
	for(a=0 ;a<8; a++){
		for(b=0 ;b<8; b++){
			board[a][b] = 0;
		}
	}
	board[3][3] = 1;
	board[4][4] = 1;

	board[4][3] = 2;
	board[3][4] = 2;

	printf("  1 2 3 4 5 6 7 8 \n");
	d = 1;
	for(a=0 ;a<8; a++){
		printf("%d ",d);
		d++;
		for(b=0 ;b<8; b++){
			if(board[a][b] == 0){
				printf("%c ",masu);
			}
			else if(board[a][b] == 1){
				printf("%c ",bla);
			}
			else if(board[a][b] == 2){
				printf("%c ",whi);
			}
		}
	printf("\n");
	}
	while(turn <= 60){
		turn++;
		if(turn % 2 == 0){
			printf("\n後手(%c)のターン",bla);
		} else {
			printf("\n先手(%c)のターン",whi);
		}
		printf("\n%dターン目\n",turn);

		printf("\n石を置く場所を選択します\n");
		printf("石を置く場所の行を選択して下さい\n");
		scanf("%d",&gyo);
		printf("石を置く場所の列を選択して下さい\n");
		scanf("%d",&retu);
		retu --;
		gyo --;
		if(retu>7||retu<0){
			printf("8列目までしか石を置けないよ！\n");
			e++;
			turn--;
		}
		else if(gyo>7||gyo<0){
			printf("8行目までしか石を置けないよ！\n");
			e++;
			turn--;
		}
		if(board[gyo][retu]==0){
			if(turn %2 == 0){
				board[gyo][retu] = 1;
			} 
			else if(turn %2 != 0){
				board[gyo][retu] = 2;
			}
		}
		else if(board[gyo][retu]==1||board[gyo][retu]==2){
				printf("\nエラー\n石が置いてあるマスに石は置けないよ！\n");
				turn --;
		}else{
			printf("\nエラー\n盤面の外には石を置けないよ！\n");
		}
		//ゲームの判定
		if(board[gyo][retu]==1&&gyo==0&&retu==0){//00黒
			if(board[1][0]==2&&board[2][0]==1){
				board[1][0] = 1;
			}
			if(board[1][0]==2&&board[2][0]==2&&board[3][0]==1){
				board[1][0] = 1;
				board[2][0] = 1;
			}
			if(board[1][0]==2&&board[2][0]==2&&board[3][0]==2&&board[4][0]==1){
				board[1][0] = 1;
				board[2][0] = 1;
				board[3][0] = 1;
			}
			if(board[1][0]==2&&board[2][0]==2&&board[3][0]==2&&board[4][0]==2&&board[5][0]==1){
				board[1][0] = 1;
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
			}
			if(board[1][0]==2&&board[2][0]==2&&board[3][0]==2&&board[4][0]==2&&board[5][0]==2&&board[6][0]==1){
				board[1][0] = 1;
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
			}
			if(board[1][0]==2&&board[2][0]==2&&board[3][0]==2&&board[4][0]==2&&board[5][0]==2&&board[6][0]==2&&board[7][0]==1){
				board[1][0] = 1;
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
				board[6][0] = 1;
			}
			if(board[0][1]==2&&board[0][2]==1){
				board[0][1] = 1;
			}
			if(board[0][1]==2&&board[0][2]==2&&board[0][3]==1){
				board[0][1] = 1;
				board[0][2] = 1;
			}
			if(board[0][1]==2&&board[0][2]==2&&board[0][3]==2&&board[0][4]==1){
				board[0][1] = 1;
				board[0][2] = 1;
				board[0][3] = 1;
			}
			if(board[0][1]==2&&board[0][2]==2&&board[0][3]==2&&board[0][4]==2&&board[0][5]==1){
				board[0][1] = 1;
				board[0][2] = 1;
				board[0][3] = 1;
				board[0][4] = 1;
			}
			if(board[0][1]==2&&board[0][2]==2&&board[0][3]==2&&board[0][4]==2&&board[0][5]==2&&board[0][6]==1){
				board[0][1] = 1;
				board[0][2] = 1;
				board[0][3] = 1;
				board[0][4] = 1;
				board[0][5] = 1;
			}
			if(board[0][1]==2&&board[0][2]==2&&board[0][3]==2&&board[0][4]==2&&board[0][5]==2&&board[0][6]==2&&board[0][7]==1){
				board[0][1] = 1;
				board[0][2] = 1;
				board[0][3] = 1;
				board[0][4] = 1;
				board[0][5] = 1;
				board[0][6] = 1;
				}
			if(board[1][1]==2&&board[2][2]==1){
				board[1][1] = 1;
			}
			if(board[1][1]==2&&board[2][2]==2&&board[3][3]==1){
				board[1][1] = 1;
				board[2][2] = 1;
			}
			if(board[1][1]==2&&board[2][2]==2&&board[3][3]==2&&board[4][4]==1){
				board[1][1] = 1;
				board[2][2] = 1;
				board[3][3] = 1;
			}
			if(board[1][1]==2&&board[2][2]==2&&board[3][3]==2&&board[4][4]==2&&board[5][5]==1){
				board[1][1] = 1;
				board[2][2] = 1;
				board[3][3] = 1;
				board[4][4] = 1;
			}
			if(board[1][1]==2&&board[2][2]==2&&board[3][3]==2&&board[4][4]==2&&board[5][5]==2&&board[6][6]==1){
				board[1][1] = 1;
				board[2][2] = 1;
				board[3][3] = 1;
				board[4][4] = 1;
				board[5][5] = 1;
			}
			if(board[1][1]==2&&board[2][2]==2&&board[3][3]==2&&board[4][4]==2&&board[5][5]==2&&board[6][6]==2&&board[7][7]==1){
				board[1][1] = 1;
				board[2][2] = 1;
				board[3][3] = 1;
				board[4][4] = 1;
				board[5][5] = 1;
				board[6][6] = 1;
				}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==0){//0,0白
			if((board[1][0]==1)&&(board[2][0]==2)){
				board[1][0] = 2;
			}
			if(board[1][0]==1&&board[2][0]==1&&board[3][0]==2){
				board[1][0] = 2;
				board[2][0] = 2;
			}
			if(board[1][0]==1&&board[2][0]==1&&board[3][0]==1&&board[4][0]==2){
				board[1][0] = 2;
				board[2][0] = 2;
				board[3][0] = 2;
			}
			if(board[1][0]==1&&board[2][0]==1&&board[3][0]==1&&board[4][0]==1&&board[5][0]==2){
				board[1][0] = 2;
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
			}
			if(board[1][0]==1&&board[2][0]==1&&board[3][0]==1&&board[4][0]==1&&board[5][0]==1&&board[6][0]==2){
				board[1][0] = 2;
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
				board[5][0] = 2;
			}
			if(board[1][0]==1&&board[2][0]==1&&board[3][0]==1&&board[4][0]==1&&board[5][0]==1&&board[6][0]==1&&board[7][0]==2){
				board[1][0] = 2;
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
				board[5][0] = 2;
				board[6][0] = 2;
			}
			if(board[0][1]==1&&board[0][2]==2){
				board[0][1] = 2;
			}
			if(board[0][1]==1&&board[0][2]==1&&board[0][3]==2){
				board[0][1] = 2;
				board[0][2] = 2;
			}
			if(board[0][1]==1&&board[0][2]==1&&board[0][3]==1&&board[0][4]==2){
				board[0][1] = 2;
				board[0][2] = 2;
				board[0][3] = 2;
			}
			if(board[0][1]==1&&board[0][2]==1&&board[0][3]==1&&board[0][4]==1&&board[0][5]==2){
				board[0][1] = 2;
				board[0][2] = 2;
				board[0][3] = 2;
				board[0][4] = 2;
			}
			if(board[0][1]==1&&board[0][2]==1&&board[0][3]==1&&board[0][4]==1&&board[0][5]==1&&board[0][6]==2){
				board[0][1] = 2;
				board[0][2] = 2;
				board[0][3] = 2;
				board[0][4] = 2;
				board[0][5] = 2;
			}
			if(board[0][1]==1&&board[0][2]==1&&board[0][3]==1&&board[0][4]==1&&board[0][5]==1&&board[0][6]==1&&board[0][7]==2){
				board[0][1] = 2;
				board[0][2] = 2;
				board[0][3] = 2;
				board[0][4] = 2;
				board[0][5] = 2;
				board[0][6] = 2;
			}
			if(board[1][1]==1&&board[2][2]==2){
				board[1][1] = 2;
			}
			if(board[1][1]==1&&board[2][2]==1&&board[3][3]==2){
				board[1][1] = 2;
				board[2][2] = 2;
			}
			if(board[1][1]==1&&board[2][2]==1&&board[3][3]==1&&board[4][4]==2){
				board[1][1] = 2;
				board[2][2] = 2;
				board[3][3] = 2;
			}
			if(board[1][1]==1&&board[2][2]==1&&board[3][3]==2&&board[4][4]==1&&board[5][5]==2){
				board[1][1] = 2;
				board[2][2] = 2;
				board[3][3] = 2;
				board[4][4] = 2;
			}
			if(board[1][1]==1&&board[2][2]==1&&board[3][3]==1&&board[4][4]==1&&board[5][5]==1&&board[6][6]==2){
				board[1][1] = 2;
				board[2][2] = 2;
				board[3][3] = 2;
				board[4][4] = 2;
				board[5][5] = 2;
			}
			if(board[1][1]==1&&board[2][2]==1&&board[3][3]==1&&board[4][4]==1&&board[5][5]==1&&board[6][6]==1&&board[7][7]==2){
				board[1][1] = 2;
				board[2][2] = 2;
				board[3][3] = 2;
				board[4][4] = 2;
				board[5][5] = 2;
				board[6][6] = 2;
				}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==0){//1,0黒
			if(board[2][0]==2&&board[3][0]==1){
				board[2][0] = 1;
			}
			if(board[2][0]==2&&board[3][0]==2&&board[4][0]==1){
				board[2][0] = 1;
				board[3][0] = 1;
			}
			if(board[2][0]==2&&board[3][0]==2&&board[4][0]==2&&board[5][0]==1){
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
			}
			if(board[2][0]==2&&board[3][0]==2&&board[4][0]==2&&board[5][0]==2&&board[6][0]==1){
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
			}
			if(board[1][0]==2&&board[3][0]==2&&board[4][0]==2&&board[5][0]==2&&board[6][0]==2&&board[7][0]==1){
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
				board[6][0] = 1;
			}
			if(board[1][1]==2&&board[1][2]==1){
				board[1][1] = 1;
			}
			if(board[1][1]==2&&board[1][2]==2&&board[1][3]==1){
				board[1][1] = 1;
				board[1][2] = 1;
			}
			if(board[1][1]==2&&board[1][2]==2&&board[1][3]==2&&board[1][4]==1){
				board[1][1] = 1;
				board[1][2] = 1;
				board[1][3] = 1;
			}
			if(board[1][1]==2&&board[1][2]==2&&board[1][3]==2&&board[1][4]==2&&board[1][5]==1){
				board[1][1] = 1;
				board[1][2] = 1;
				board[1][3] = 1;
				board[1][4] = 1;
			}
			if(board[1][1]==2&&board[1][2]==2&&board[1][3]==2&&board[1][4]==2&&board[1][5]==2&&board[1][6]==1){
				board[1][1] = 1;
				board[1][2] = 1;
				board[1][3] = 1;
				board[1][4] = 1;
				board[1][5] = 1;
			}
			if(board[1][1]==2&&board[1][2]==2&&board[1][3]==2&&board[1][4]==2&&board[1][5]==2&&board[1][6]==2&&board[1][7]==1){
				board[1][1] = 1;
				board[1][2] = 1;
				board[1][3] = 1;
				board[1][4] = 1;
				board[1][5] = 1;
				board[1][6] = 1;
				}
			if(board[2][1]==2&&board[3][2]==1){
				board[2][0] = 1;
			}
			if(board[2][1]==2&&board[3][2]==2&&board[4][3]==1){
				board[2][0] = 1;
				board[3][0] = 1;
			}
			if(board[2][1]==2&&board[3][2]==2&&board[4][3]==2&&board[5][4]==1){
				board[2][1] = 1;
				board[3][2] = 1;
				board[4][3] = 1;
			}
			if(board[2][1]==2&&board[3][2]==2&&board[4][3]==2&&board[5][4]==2&&board[6][5]==1){
				board[2][1] = 1;
				board[3][2] = 1;
				board[4][3] = 1;
				board[5][4] = 1;
			}
			if(board[2][1]==2&&board[3][2]==2&&board[4][3]==2&&board[5][4]==2&&board[6][5]==2&&board[7][6]==1){
				board[2][1] = 1;
				board[3][2] = 1;
				board[4][3] = 1;
				board[5][4] = 1;
				board[6][5] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==0){//1,0白
			if(board[2][0]==1&&board[3][0]==2){
				board[2][0] = 2;
			}
			if(board[2][0]==1&&board[3][0]==1&&board[4][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
			}
			if(board[2][0]==1&&board[3][0]==1&&board[4][0]==1&&board[5][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
			}
			if(board[2][0]==1&&board[3][0]==1&&board[4][0]==1&&board[5][0]==1&&board[6][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
				board[5][0] = 2;
			}
			if(board[2][0]==1&&board[3][0]==1&&board[4][0]==1&&board[5][0]==1&&board[6][0]==1&&board[7][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
				board[5][0] = 2;
				board[6][0] = 2;
			}
			if(board[1][1]==1&&board[1][2]==2){
				board[1][1] = 2;
			}
			if(board[1][1]==1&&board[1][2]==1&&board[1][3]==2){
				board[1][1] = 2;
				board[1][2] = 2;
			}
			if(board[1][1]==1&&board[1][2]==1&&board[1][3]==1&&board[1][4]==2){
				board[1][1] = 2;
				board[1][2] = 2;
				board[1][3] = 2;
			}
			if(board[1][1]==1&&board[1][2]==1&&board[1][3]==1&&board[1][4]==1&&board[1][5]==2){
				board[1][1] = 2;
				board[1][2] = 2;
				board[1][3] = 2;
				board[1][4] = 2;
			}
			if(board[1][1]==1&&board[1][2]==1&&board[1][3]==1&&board[1][4]==1&&board[1][5]==1&&board[1][6]==2){
				board[1][1] = 2;
				board[1][2] = 2;
				board[1][3] = 2;
				board[1][4] = 2;
				board[1][5] = 2;
			}
			if(board[1][1]==1&&board[1][2]==1&&board[1][3]==1&&board[1][4]==1&&board[1][5]==1&&board[1][6]==1&&board[1][7]==2){
				board[1][1] = 2;
				board[1][2] = 2;
				board[1][3] = 2;
				board[1][4] = 2;
				board[1][5] = 2;
				board[1][6] = 2;
			}
			if(board[2][1]==1&&board[3][2]==2){
				board[2][0] = 2;
			}
			if(board[2][1]==1&&board[3][2]==1&&board[4][3]==2){
				board[2][0] = 2;
				board[3][0] = 2;
			}
			if(board[2][1]==1&&board[3][2]==1&&board[4][3]==1&&board[5][4]==2){
				board[2][1] = 2;
				board[3][2] = 2;
				board[4][3] = 2;
			}
			if(board[2][1]==1&&board[3][2]==1&&board[4][3]==1&&board[5][4]==1&&board[6][5]==2){
				board[2][1] = 2;
				board[3][2] = 2;
				board[4][3] = 2;
				board[5][4] = 2;
			}
			if(board[2][1]==1&&board[3][2]==1&&board[4][3]==1&&board[5][4]==1&&board[6][5]==1&&board[7][6]==2){
				board[2][1] = 2;
				board[3][2] = 2;
				board[4][3] = 2;
				board[5][4] = 2;
				board[6][5] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==0){//2,0黒
			if(board[3][0]==2&&board[4][0]==1){
				board[3][0] = 1;
			}
			if(board[1][0]==2&&board[0][0]==1){
				board[1][0] = 1;
			}
			if(board[3][0]==2&&board[4][0]==2&&board[5][0]==1){
				board[3][0] = 1;
				board[4][0] = 1;
			}
			if(board[3][0]==2&&board[4][0]==2&&board[5][0]==2&&board[6][0]==1){
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
			}
			if(board[3][0]==2&&board[4][0]==2&&board[5][0]==2&&board[6][0]==2&&board[7][0]==1){
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
				board[6][0] = 1;
			}
			if(board[2][1]==2&&board[2][2]==1){
				board[2][1] = 1;
			}
			if(board[2][1]==2&&board[2][2]==2&&board[2][3]==1){
				board[2][1] = 1;
				board[2][2] = 1;
			}
			if(board[2][1]==2&&board[2][2]==2&&board[2][3]==2&&board[2][4]==1){
				board[2][1] = 1;
				board[2][2] = 1;
				board[2][3] = 1;
			}
			if(board[2][1]==2&&board[2][2]==2&&board[2][3]==2&&board[2][4]==2&&board[2][5]==1){
				board[2][1] = 1;
				board[2][2] = 1;
				board[2][3] = 1;
				board[2][4] = 1;
			}
			if(board[2][1]==2&&board[2][2]==2&&board[2][3]==2&&board[2][4]==2&&board[2][5]==2&&board[2][6]==1){
				board[2][1] = 1;
				board[2][2] = 1;
				board[2][3] = 1;
				board[2][4] = 1;
				board[2][5] = 1;
			}
			if(board[2][1]==2&&board[2][2]==2&&board[2][3]==2&&board[2][4]==2&&board[2][5]==2&&board[2][6]==2&&board[2][7]==1){
				board[2][1] = 1;
				board[2][2] = 1;
				board[2][3] = 1;
				board[2][4] = 1;
				board[2][5] = 1;
				board[2][6] = 1;
				}
			if(board[3][1]==2&&board[4][2]==1){
				board[3][1] = 1;
			}
			if(board[1][1]==2&&board[0][2]==1){
				board[1][1] = 1;
			}
			if(board[3][1]==2&&board[4][2]==2&&board[5][3]==1){
				board[3][1] = 1;
				board[4][2] = 1;
			}
			if(board[3][1]==2&&board[4][2]==2&&board[5][3]==2&&board[6][4]==1){
				board[3][1] = 1;
				board[4][2] = 1;
				board[5][3] = 1;
			}
			if(board[3][1]==2&&board[4][2]==2&&board[5][3]==2&&board[6][4]==2&&board[7][5]==1){
				board[3][1] = 1;
				board[4][2] = 1;
				board[5][3] = 1;
				board[6][4] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==0){//2,0白
			if(board[3][0]==1&&board[4][0]==2){
				board[3][0] = 2;
			}
			if(board[1][0]==1&&board[0][0]==2){
				board[1][0] = 2;
			}
			if(board[3][0]==1&&board[4][0]==1&&board[5][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
			}
			if(board[3][0]==1&&board[4][0]==1&&board[5][0]==1&&board[6][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
			}
			if(board[3][0]==1&&board[4][0]==1&&board[5][0]==1&&board[6][0]==1&&board[7][0]==2){
				board[2][0] = 2;
				board[3][0] = 2;
				board[4][0] = 2;
				board[5][0] = 2;
			}
			if(board[2][1]==1&&board[2][2]==2){
				board[2][1] = 2;
			}
			if(board[2][1]==1&&board[2][2]==1&&board[2][3]==2){
				board[1][1] = 2;
				board[1][2] = 2;
			}
			if(board[2][1]==1&&board[2][2]==1&&board[2][3]==1&&board[2][4]==2){
				board[2][1] = 2;
				board[2][2] = 2;
				board[2][3] = 2;
			}
			if(board[2][1]==1&&board[2][2]==1&&board[2][3]==1&&board[2][4]==1&&board[2][5]==2){
				board[2][1] = 2;
				board[2][2] = 2;
				board[2][3] = 2;
				board[2][4] = 2;
			}
			if(board[2][1]==1&&board[2][2]==1&&board[2][3]==1&&board[2][4]==1&&board[2][5]==1&&board[2][6]==2){
				board[2][1] = 2;
				board[2][2] = 2;
				board[2][3] = 2;
				board[2][4] = 2;
				board[2][5] = 2;
			}
			if(board[2][1]==1&&board[2][2]==1&&board[2][3]==1&&board[2][4]==1&&board[2][5]==1&&board[2][6]==1&&board[2][7]==2){
				board[2][1] = 2;
				board[2][2] = 2;
				board[2][3] = 2;
				board[2][4] = 2;
				board[2][5] = 2;
				board[2][6] = 2;
				}
			if(board[3][1]==1&&board[4][2]==2){
				board[3][1] = 2;
			}
			if(board[3][1]==1&&board[0][2]==2){
				board[3][1] = 2;
			}
			if(board[3][1]==1&&board[4][2]==1&&board[5][3]==2){
				board[3][1] = 2;
				board[4][2] = 2;
			}
			if(board[3][1]==1&&board[4][2]==1&&board[5][3]==1&&board[6][4]==2){
				board[3][1] = 2;
				board[4][2] = 2;
				board[5][3] = 2;
			}
			if(board[3][1]==1&&board[4][2]==1&&board[5][3]==1&&board[6][4]==1&&board[7][5]==2){
				board[3][1] = 2;
				board[4][2] = 2;
				board[5][3] = 2;
				board[6][4] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==3&&retu==0){//3,0黒
			if(board[4][0]==2&&board[5][0]==1){
				board[4][0] = 1;
			}
			if(board[2][0]==2&&board[1][0]==1){
				board[2][0] = 1;
			}
			if(board[4][0]==2&&board[5][0]==2&&board[6][0]==1){
				board[4][0] = 1;
				board[5][0] = 1;
			}
			if(board[2][0]==2&&board[1][0]==2&&board[0][0]==1){
				board[2][0] = 1;
				board[1][0] = 1;
			}
			if(board[4][0]==2&&board[5][0]==2&&board[6][0]==2&&board[7][0]==1){
				board[4][0] = 1;
				board[5][0] = 1;
				board[6][0] = 1;
			}
			if(board[3][1]==2&&board[3][2]==1){
				board[3][1] = 1;
			}
			if(board[3][1]==2&&board[3][2]==2&&board[3][3]==1){
				board[3][1] = 1;
				board[3][2] = 1;
			}
			if(board[3][1]==2&&board[3][2]==2&&board[3][3]==2&&board[3][4]==1){
				board[3][1] = 1;
				board[3][2] = 1;
				board[3][3] = 1;
			}
			if(board[3][1]==2&&board[3][2]==2&&board[3][3]==2&&board[3][4]==2&&board[3][5]==1){
				board[3][1] = 1;
				board[3][2] = 1;
				board[3][3] = 1;
				board[3][4] = 1;
			}
			if(board[3][1]==2&&board[3][2]==2&&board[3][3]==2&&board[3][4]==2&&board[3][5]==2&&board[3][6]==1){
				board[3][1] = 1;
				board[3][2] = 1;
				board[3][3] = 1;
				board[3][4] = 1;
				board[3][5] = 1;
			}
			if(board[3][1]==2&&board[3][2]==2&&board[3][3]==2&&board[3][4]==2&&board[3][5]==2&&board[3][6]==2&&board[3][7]==1){
				board[3][1] = 1;
				board[3][2] = 1;
				board[3][3] = 1;
				board[3][4] = 1;
				board[3][5] = 1;
				board[3][6] = 1;
				}
			if(board[4][1]==2&&board[5][2]==1){
				board[4][1] = 1;
			}
			if(board[2][1]==2&&board[1][2]==1){
				board[2][1] = 1;
			}
			if(board[4][1]==2&&board[5][2]==2&&board[6][3]==1){
				board[4][1] = 1;
				board[5][2] = 1;
			}
			if(board[2][1]==2&&board[1][2]==2&&board[0][3]==1){
				board[2][1] = 1;
				board[1][2] = 1;
			}
			if(board[4][1]==2&&board[5][2]==2&&board[6][3]==2&&board[7][4]==1){
				board[3][1] = 1;
				board[4][2] = 1;
				board[5][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==3&&retu==0){//3,0白
			if(board[4][0]==1&&board[5][0]==2){
				board[4][0] = 2;
			}
			if(board[2][0]==1&&board[1][0]==2){
				board[2][0] = 2;
			}
			if(board[4][0]==1&&board[5][0]==1&&board[6][0]==2){
				board[4][0] = 2;
				board[5][0] = 2;
			}
			if(board[2][0]==1&&board[1][0]==1&&board[0][0]==2){
				board[2][0] = 2;
				board[1][0] = 2;
			}
			if(board[4][0]==1&&board[5][0]==1&&board[6][0]==1&&board[7][0]==2){
				board[4][0] = 2;
				board[5][0] = 2;
				board[6][0] = 2;
			}
			if(board[3][1]==1&&board[3][2]==1&&board[3][3]==2){
				board[3][1] = 2;
				board[3][2] = 2;
			}
			if(board[3][1]==1&&board[3][2]==1&&board[3][3]==1&&board[3][4]==2){
				board[3][1] = 2;
				board[3][2] = 2;
				board[3][3] = 2;
			}
			if(board[3][1]==1&&board[3][2]==1&&board[3][3]==1&&board[3][4]==1&&board[3][5]==2){
				board[3][1] = 2;
				board[3][2] = 2;
				board[3][3] = 2;
				board[3][4] = 2;
			}
			if(board[3][1]==1&&board[3][2]==1&&board[3][3]==1&&board[3][4]==1&&board[3][5]==1&&board[3][6]==2){
				board[3][1] = 2;
				board[3][2] = 2;
				board[3][3] = 2;
				board[3][4] = 2;
				board[3][5] = 2;
			}
			if(board[3][1]==1&&board[3][2]==1&&board[3][3]==1&&board[3][4]==1&&board[3][5]==1&&board[3][6]==1&&board[3][7]==2){
				board[3][1] = 2;
				board[3][2] = 2;
				board[3][3] = 2;
				board[3][4] = 2;
				board[3][5] = 2;
				board[3][6] = 2;
				}
			if(board[4][1]==1&&board[5][2]==2){
				board[4][1] = 2;
			}
			if(board[2][1]==1&&board[1][2]==2){
				board[2][1] = 2;
			}
			if(board[4][1]==1&&board[5][2]==1&&board[6][3]==2){
				board[4][1] = 2;
				board[5][2] = 2;
			}
			if(board[2][1]==1&&board[1][2]==1&&board[0][3]==2){
				board[2][1] = 2;
				board[1][2] = 2;
			}
			if(board[4][1]==1&&board[5][2]==1&&board[6][3]==1&&board[7][4]==2){
				board[4][1] = 2;
				board[5][2] = 2;
				board[6][3] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==4&&retu==0){//4,0黒
			if(board[5][0]==2&&board[6][0]==1){
				board[5][0] = 1;
			}
			if(board[3][0]==2&&board[2][0]==1){
				board[3][0] = 1;
			}
			if(board[5][0]==2&&board[6][0]==2&&board[7][0]==1){
				board[5][0] = 1;
				board[6][0] = 1;
			}
			if(board[3][0]==2&&board[2][0]==2&&board[1][0]==1){
				board[3][0] = 1;
				board[2][0] = 1;
			}
			if(board[3][0]==2&&board[2][0]==2&&board[1][0]==1&&board[0][0]==1){
				board[3][0] = 1;
				board[2][0] = 1;
				board[1][0] = 1;
			}
			if(board[4][1]==2&&board[4][2]==1){
				board[4][1] = 1;
			}
			if(board[4][1]==2&&board[4][2]==2&&board[4][3]==1){
				board[4][1] = 1;
				board[4][2] = 1;
			}
			if(board[4][1]==2&&board[4][2]==2&&board[4][3]==2&&board[4][4]==1){
				board[4][1] = 1;
				board[4][2] = 1;
				board[4][3] = 1;
			}
			if(board[4][1]==2&&board[4][2]==2&&board[4][3]==2&&board[4][4]==2&&board[4][5]==1){
				board[4][1] = 1;
				board[4][2] = 1;
				board[4][3] = 1;
				board[4][4] = 1;
			}
			if(board[4][1]==2&&board[4][2]==2&&board[4][3]==2&&board[4][4]==2&&board[4][5]==2&&board[4][6]==1){
				board[4][1] = 1;
				board[4][2] = 1;
				board[4][3] = 1;
				board[4][4] = 1;
				board[4][5] = 1;
			}
			if(board[4][1]==2&&board[4][2]==2&&board[4][3]==2&&board[4][4]==2&&board[4][5]==2&&board[4][6]==2&&board[4][7]==1){
				board[4][1] = 1;
				board[4][2] = 1;
				board[4][3] = 1;
				board[4][4] = 1;
				board[4][5] = 1;
				board[4][6] = 1;
				}
			if(board[5][1]==2&&board[6][2]==1){
				board[5][1] = 1;
			}
			if(board[3][1]==2&&board[2][2]==1){
				board[3][1] = 1;
			}
			if(board[5][1]==2&&board[6][2]==2&&board[7][3]==1){
				board[5][1] = 1;
				board[6][2] = 1;
			}
			if(board[3][1]==2&&board[2][2]==2&&board[1][3]==1){
				board[3][1] = 1;
				board[2][2] = 1;
			}
			if(board[3][1]==2&&board[2][2]==2&&board[1][3]==2&&board[0][4]==1){
				board[3][1] = 1;
				board[2][2] = 1;
				board[1][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==4&&retu==0){//4,0白
			if(board[5][0]==1&&board[6][0]==2){
				board[5][0] = 2;
			}
			if(board[3][0]==1&&board[2][0]==2){
				board[3][0] = 2;
			}
			if(board[5][0]==1&&board[6][0]==1&&board[7][0]==2){
				board[5][0] = 2;
				board[6][0] = 2;
			}
			if(board[3][0]==1&&board[2][0]==1&&board[1][0]==2){
				board[3][0] = 2;
				board[2][0] = 2;
			}
			if(board[3][0]==1&&board[2][0]==1&&board[1][0]==1&&board[0][0]==2){
				board[3][0] = 2;
				board[2][0] = 2;
				board[1][0] = 2;
			}
			if(board[4][1]==1&&board[4][2]==1&&board[4][3]==2){
				board[4][1] = 2;
				board[4][2] = 2;
			}
			if(board[4][1]==1&&board[4][2]==1&&board[4][3]==1&&board[4][4]==2){
				board[4][1] = 2;
				board[4][2] = 2;
				board[4][3] = 2;
			}
			if(board[4][1]==1&&board[4][2]==1&&board[4][3]==1&&board[4][4]==1&&board[4][5]==2){
				board[4][1] = 2;
				board[4][2] = 2;
				board[4][3] = 2;
				board[4][4] = 2;
			}
			if(board[4][1]==1&&board[4][4]==1&&board[4][3]==1&&board[4][4]==1&&board[4][5]==1&&board[4][6]==2){
				board[4][1] = 2;
				board[4][2] = 2;
				board[4][3] = 2;
				board[4][4] = 2;
				board[4][5] = 2;
			}
			if(board[4][1]==1&&board[4][2]==1&&board[4][3]==1&&board[4][4]==1&&board[4][5]==1&&board[4][6]==1&&board[4][7]==2){
				board[4][1] = 2;
				board[4][2] = 2;
				board[4][3] = 2;
				board[4][4] = 2;
				board[4][5] = 2;
				board[4][6] = 2;
				}
			if(board[5][1]==1&&board[6][2]==2){
				board[5][1] = 2;
			}
			if(board[3][1]==1&&board[2][2]==2){
				board[3][1] = 2;
			}
			if(board[5][1]==1&&board[6][2]==1&&board[7][3]==2){
				board[5][1] = 2;
				board[6][2] = 2;
			}
			if(board[3][1]==1&&board[2][2]==1&&board[1][3]==2){
				board[3][1] = 2;
				board[2][2] = 2;
			}
			if(board[3][1]==1&&board[2][2]==1&&board[1][3]==1&&board[0][4]==2){
				board[3][1] = 2;
				board[2][2] = 2;
				board[1][3] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==0){//5,0黒
			if(board[6][0]==2&&board[7][0]==1){
				board[6][0] = 1;
			}
			if(board[4][0]==2&&board[3][0]==1){
				board[4][0] = 1;
			}
			if(board[4][0]==2&&board[3][0]==2&&board[2][0]==1){
				board[4][0] = 1;
				board[3][0] = 1;
			}
			if(board[4][0]==2&&board[3][0]==2&&board[2][0]==2&&board[1][0]==1){
				board[4][0] = 1;
				board[3][0] = 1;
				board[2][0] = 1;
			}
			if(board[4][0]==2&&board[3][0]==2&&board[2][0]==2&&board[1][0]==2&&board[0][0]==1){
				board[4][0] = 1;
				board[3][0] = 1;
				board[2][0] = 1;
				board[1][0] = 1;
			}
			if(board[5][1]==2&&board[5][2]==1){
				board[5][1] = 1;
			}
			if(board[5][1]==2&&board[5][2]==2&&board[5][3]==1){
				board[5][1] = 1;
				board[5][2] = 1;
			}
			if(board[5][1]==2&&board[5][2]==2&&board[5][3]==2&&board[5][4]==1){
				board[5][1] = 1;
				board[5][2] = 1;
				board[5][3] = 1;
			}
			if(board[5][1]==2&&board[5][2]==2&&board[5][3]==2&&board[5][4]==2&&board[5][5]==1){
				board[5][1] = 1;
				board[5][2] = 1;
				board[5][3] = 1;
				board[5][4] = 1;
			}
			if(board[5][1]==2&&board[5][2]==2&&board[5][3]==2&&board[5][4]==2&&board[5][5]==2&&board[5][6]==1){
				board[5][1] = 1;
				board[5][2] = 1;
				board[5][3] = 1;
				board[5][4] = 1;
				board[5][5] = 1;
			}
			if(board[5][1]==2&&board[5][2]==2&&board[5][3]==2&&board[5][4]==2&&board[5][5]==2&&board[5][6]==2&&board[5][7]==1){
				board[5][1] = 1;
				board[5][2] = 1;
				board[5][3] = 1;
				board[5][4] = 1;
				board[5][5] = 1;
				board[5][6] = 1;
				}
			if(board[6][1]==2&&board[7][2]==1){
				board[6][1] = 1;
			}
			if(board[4][1]==2&&board[3][2]==1){
				board[4][1] = 1;
			}
			if(board[4][1]==2&&board[3][2]==2&&board[2][3]==1){
				board[4][1] = 1;
				board[3][2] = 1;
			}
			if(board[4][1]==2&&board[3][2]==2&&board[2][3]==1){
				board[4][1] = 1;
				board[3][2] = 1;
			}
			if(board[4][1]==2&&board[3][2]==2&&board[2][3]==2&&board[1][4]==1){
				board[4][1] = 1;
				board[3][2] = 1;
				board[2][3] = 1;
			}
				if(board[4][1]==2&&board[3][2]==2&&board[2][3]==2&&board[1][4]==2&&board[0][5]==1){
				board[4][1] = 1;
				board[3][2] = 1;
				board[2][3] = 1;
				board[1][4] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==0){//5,0白
			if(board[6][0]==1&&board[7][0]==2){
				board[6][0] = 2;
			}
			if(board[4][0]==1&&board[3][0]==2){
				board[4][0] = 2;
			}
			if(board[4][0]==1&&board[3][0]==1&&board[2][0]==2){
				board[4][0] = 2;
				board[3][0] = 2;
			}
			if(board[4][0]==1&&board[3][0]==1&&board[2][0]==1&&board[1][0]==2){
				board[4][0] = 2;
				board[3][0] = 2;
				board[2][0] = 2;
			}
			if(board[4][0]==1&&board[3][0]==1&&board[2][0]==1&&board[1][0]==1&&board[0][0]==2){
				board[4][0] = 2;
				board[3][0] = 2;
				board[2][0] = 2;
				board[1][0] = 2;
			}
			if(board[5][1]==1&&board[5][2]==1){
				board[5][1] = 2;
			}
			if(board[5][1]==1&&board[5][2]==1&&board[5][3]==2){
				board[5][1] = 2;
				board[5][2] = 2;
			}
			if(board[5][1]==1&&board[5][2]==1&&board[5][3]==1&&board[5][4]==2){
				board[5][1] = 2;
				board[5][2] = 2;
				board[5][3] = 2;
			}
			if(board[5][1]==1&&board[5][2]==1&&board[5][3]==1&&board[5][4]==1&&board[5][5]==2){
				board[5][1] = 2;
				board[5][2] = 2;
				board[5][3] = 2;
				board[5][4] = 2;
			}
			if(board[5][1]==1&&board[5][4]==1&&board[5][3]==1&&board[5][4]==1&&board[5][5]==1&&board[5][6]==2){
				board[5][1] = 2;
				board[5][2] = 2;
				board[5][3] = 2;
				board[5][4] = 2;
				board[5][5] = 2;
			}
			if(board[5][1]==1&&board[5][2]==1&&board[5][3]==1&&board[5][4]==1&&board[5][5]==1&&board[5][6]==1&&board[5][7]==2){
				board[5][1] = 2;
				board[5][2] = 2;
				board[5][3] = 2;
				board[5][4] = 2;
				board[5][5] = 2;
				board[5][6] = 2;
				}
			if(board[6][1]==1&&board[7][2]==2){
				board[6][1] = 2;
			}
			if(board[4][1]==1&&board[3][2]==2){
				board[4][1] = 2;
			}
			if(board[4][1]==1&&board[3][2]==1&&board[2][3]==2){
				board[4][1] = 2;
				board[3][2] = 2;
			}
			if(board[4][1]==1&&board[3][2]==1&&board[2][3]==1&&board[1][4]==2){
				board[4][1] = 2;
				board[3][2] = 2;
				board[2][3] = 2;
			}
			if(board[4][1]==1&&board[3][2]==1&&board[2][3]==1&&board[1][4]==1&&board[0][5]==2){
				board[4][1] = 2;
				board[3][2] = 2;
				board[2][3] = 2;
				board[1][4] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==6&&retu==0){//6,0黒
			if(board[5][0]==2&&board[4][0]==1){
				board[5][0] = 1;
			}
			if(board[5][0]==2&&board[4][0]==2&&board[3][0]==1){
				board[5][0] = 1;
				board[4][0] = 1;
			}
			if(board[5][0]==2&&board[4][0]==2&&board[3][0]==2&&board[2][0]==1){
				board[5][0] = 1;
				board[4][0] = 1;
				board[3][0] = 1;
			}
			if(board[5][0]==2&&board[4][0]==2&&board[3][0]==2&&board[2][0]==2&&board[1][0]==1){
				board[5][0] = 1;
				board[4][0] = 1;
				board[3][0] = 1;
				board[2][0] = 1;
			}
			if(board[5][0]==2&&board[4][0]==2&&board[3][0]==2&&board[2][0]==2&&board[1][0]==2&&board[0][0]==1){
				board[5][0] = 1;
				board[4][0] = 1;
				board[3][0] = 1;
				board[2][0] = 1;
				board[1][0] = 1;
			}
			if(board[6][1]==2&&board[6][2]==1){
				board[6][1] = 1;
			}
			if(board[6][1]==2&&board[6][2]==2&&board[6][3]==1){
				board[6][1] = 1;
				board[6][2] = 1;
			}
			if(board[6][1]==2&&board[6][2]==2&&board[6][3]==2&&board[6][4]==1){
				board[6][1] = 1;
				board[6][2] = 1;
				board[6][3] = 1;
			}
			if(board[6][1]==2&&board[6][2]==2&&board[6][3]==2&&board[6][4]==2&&board[6][5]==1){
				board[6][1] = 1;
				board[6][2] = 1;
				board[6][3] = 1;
				board[6][4] = 1;
			}
			if(board[6][1]==2&&board[6][2]==2&&board[6][3]==2&&board[6][4]==2&&board[6][5]==2&&board[6][6]==1){
				board[6][1] = 1;
				board[6][2] = 1;
				board[6][3] = 1;
				board[6][4] = 1;
				board[6][5] = 1;
			}
			if(board[6][1]==2&&board[6][2]==2&&board[6][3]==2&&board[6][4]==2&&board[6][5]==2&&board[6][6]==2&&board[6][7]==1){
				board[6][1] = 1;
				board[6][2] = 1;
				board[6][3] = 1;
				board[6][4] = 1;
				board[6][5] = 1;
				board[6][6] = 1;
				}
			if(board[5][1]==2&&board[4][2]==1){
				board[5][1] = 1;
			}
			if(board[5][1]==2&&board[4][2]==2&&board[3][3]==1){
				board[5][1] = 1;
				board[4][2] = 1;
			}
			if(board[5][1]==2&&board[4][2]==2&&board[3][3]==2&&board[2][4]==1){
				board[5][1] = 1;
				board[4][2] = 1;
				board[3][3] = 1;
			}
			if(board[5][1]==2&&board[4][2]==2&&board[3][3]==2&&board[2][4]==2&&board[1][5]==1){
				board[5][1] = 1;
				board[4][2] = 1;
				board[3][3] = 1;
				board[2][4] = 1;
			}
				if(board[5][1]==2&&board[4][2]==2&&board[3][3]==2&&board[2][4]==2&&board[1][5]==2&&board[0][6]==1){
				board[5][1] = 1;
				board[4][2] = 1;
				board[3][3] = 1;
				board[2][4] = 1;
				board[1][5] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==0){//6,0白
			if(board[5][0]==1&&board[4][0]==2){
				board[5][0] = 2;
			}
			if(board[5][0]==1&&board[4][0]==1&&board[3][0]==2){
				board[5][0] = 2;
				board[4][0] = 2;
			}
			if(board[5][0]==1&&board[4][0]==1&&board[3][0]==1&&board[2][0]==2){
				board[5][0] = 2;
				board[4][0] = 2;
				board[3][0] = 2;
			}
			if(board[5][0]==1&&board[4][0]==1&&board[3][0]==1&&board[2][0]==1&&board[1][0]==2){
				board[5][0] = 2;
				board[4][0] = 2;
				board[3][0] = 2;
				board[2][0] = 2;
			}
			if(board[5][0]==1&&board[4][0]==1&&board[3][0]==1&&board[2][0]==1&&board[1][0]==1&&board[0][0]==2){
				board[5][0] = 2;
				board[4][0] = 2;
				board[3][0] = 2;
				board[2][0] = 2;
				board[1][0] = 2;
			}
			if(board[6][1]==1&&board[6][2]==2){
				board[6][1] = 2;
			}
			if(board[6][1]==1&&board[6][2]==1&&board[6][3]==2){
				board[6][1] = 2;
				board[6][2] = 2;
			}
			if(board[6][1]==1&&board[6][2]==1&&board[6][3]==1&&board[6][4]==2){
				board[6][1] = 2;
				board[6][2] = 2;
				board[6][3] = 2;
			}
			if(board[6][1]==1&&board[6][2]==1&&board[6][3]==1&&board[6][4]==1&&board[6][5]==2){
				board[6][1] = 2;
				board[6][2] = 2;
				board[6][3] = 2;
				board[6][4] = 2;
			}
			if(board[6][1]==1&&board[6][4]==1&&board[6][3]==1&&board[6][4]==1&&board[6][5]==1&&board[6][6]==2){
				board[6][1] = 2;
				board[6][2] = 2;
				board[6][3] = 2;
				board[6][4] = 2;
				board[6][5] = 2;
			}
			if(board[6][1]==1&&board[6][2]==1&&board[6][3]==1&&board[6][4]==1&&board[6][5]==1&&board[6][6]==1&&board[6][7]==2){
				board[6][1] = 2;
				board[6][2] = 2;
				board[6][3] = 2;
				board[6][4] = 2;
				board[6][5] = 2;
				board[6][6] = 2;
				}
			if(board[5][1]==1&&board[4][2]==2){
				board[5][1] = 2;
			}
			if(board[5][1]==1&&board[4][2]==1&&board[3][3]==2){
				board[5][1] = 2;
				board[4][2] = 2;
			}
			if(board[5][1]==1&&board[4][2]==1&&board[3][3]==1&&board[2][4]==2){
				board[5][1] = 2;
				board[4][2] = 2;
				board[3][3] = 2;
			}
			if(board[5][1]==1&&board[4][2]==1&&board[3][3]==1&&board[2][4]==1&&board[1][5]==2){
				board[5][1] = 2;
				board[4][2] = 2;
				board[3][3] = 2;
				board[2][4] = 2;
			}
			if(board[5][1]==1&&board[4][2]==1&&board[3][3]==1&&board[2][4]==1&&board[1][5]==1&&board[0][6]==2){
				board[5][1] = 2;
				board[4][2] = 2;
				board[3][3] = 2;
				board[2][4] = 2;
				board[1][5] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==0){//7,0黒
			if(board[6][0]==2&&board[5][0]==1){
				board[6][0] = 1;
			}
			if(board[6][0]==2&&board[5][0]==2&&board[4][0]==1){
				board[6][0] = 1;
				board[5][0] = 1;
			}
			if(board[6][0]==2&&board[5][0]==2&&board[4][0]==2&&board[3][0]==1){
				board[6][0] = 1;
				board[5][0] = 1;
				board[4][0] = 1;
			}
			if(board[6][0]==2&&board[5][0]==2&&board[4][0]==2&&board[3][0]==2&&board[2][0]==1){
				board[6][0] = 1;
				board[5][0] = 1;
				board[4][0] = 1;
				board[3][0] = 1;
			}
			if(board[6][0]==2&&board[5][0]==2&&board[4][0]==2&&board[3][0]==2&&board[2][0]==2&&board[1][0]==1){
				board[1][0] = 1;
				board[2][0] = 1;
				board[3][0] = 1;
				board[4][0] = 1;
				board[5][0] = 1;
			}
			if(board[6][0]==2&&board[5][0]==2&&board[4][0]==2&&board[3][0]==2&&board[2][0]==2&&board[1][0]==2&&board[0][0]==1){
				board[6][0] = 1;
				board[5][0] = 1;
				board[4][0] = 1;
				board[3][0] = 1;
				board[2][0] = 1;
				board[1][0] = 1;
			}
			if(board[7][1]==2&&board[7][2]==1){
				board[7][1] = 1;
			}
			if(board[7][1]==2&&board[7][2]==2&&board[7][3]==1){
				board[7][1] = 1;
				board[7][2] = 1;
			}
			if(board[7][1]==2&&board[7][2]==2&&board[7][3]==2&&board[7][4]==1){
				board[7][1] = 1;
				board[7][2] = 1;
				board[7][3] = 1;
			}
			if(board[7][1]==2&&board[7][2]==2&&board[7][3]==2&&board[7][4]==2&&board[7][5]==1){
				board[7][1] = 1;
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
			}
			if(board[7][1]==2&&board[7][2]==2&&board[7][3]==2&&board[7][4]==2&&board[7][5]==2&&board[7][6]==1){
				board[7][1] = 1;
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
				board[7][5] = 1;
			}
			if(board[7][1]==2&&board[7][2]==2&&board[7][3]==2&&board[7][4]==2&&board[7][5]==2&&board[7][6]==2&&board[7][7]==1){
				board[7][1] = 1;
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
				board[7][5] = 1;
				board[7][6] = 1;
				}
			if(board[6][1]==2&&board[5][2]==1){
				board[6][1] = 1;
			}
			if(board[6][1]==2&&board[5][2]==2&&board[4][3]==1){
				board[6][1] = 1;
				board[5][2] = 1;
			}
			if(board[6][1]==2&&board[5][2]==2&&board[4][3]==2&&board[3][4]==1){
				board[6][1] = 1;
				board[5][2] = 1;
				board[4][3] = 1;
			}
			if(board[6][1]==2&&board[5][2]==2&&board[4][3]==2&&board[3][4]==2&&board[2][5]==1){
				board[6][1] = 1;
				board[5][2] = 1;
				board[4][3] = 1;
				board[3][4] = 1;
			}
			if(board[6][1]==2&&board[5][2]==2&&board[4][3]==2&&board[3][4]==2&&board[2][5]==2&&board[1][6]==1){
				board[6][1] = 1;
				board[5][2] = 1;
				board[4][3] = 1;
				board[3][4] = 1;
				board[2][5] = 1;
			}
			if(board[6][1]==2&&board[5][2]==2&&board[4][3]==2&&board[3][4]==2&&board[2][5]==2&&board[1][6]==2&&board[0][7]==1){
				board[6][1] = 1;
				board[5][2] = 1;
				board[4][3] = 1;
				board[3][4] = 1;
				board[2][5] = 1;
				board[1][6] = 1;
				}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==0){//7,0白
			if(board[6][0]==1&&board[5][0]==2){
				board[6][0] = 2;
			}
			if(board[6][0]==1&&board[5][0]==1&&board[4][0]==2){
				board[6][0] = 2;
				board[5][0] = 2;
			}
			if(board[6][0]==1&&board[5][0]==1&&board[4][0]==1&&board[3][0]==2){
				board[6][0] = 2;
				board[5][0] = 2;
				board[4][0] = 2;
			}
			if(board[6][0]==1&&board[5][0]==1&&board[4][0]==1&&board[3][0]==1&&board[2][0]==2){
				board[6][0] = 2;
				board[5][0] = 2;
				board[4][0] = 2;
				board[3][0] = 2;
			}
			if(board[6][0]==1&&board[5][0]==1&&board[4][0]==1&&board[3][0]==1&&board[2][0]==1&&board[1][0]==2){
				board[6][0] = 2;
				board[5][0] = 2;
				board[4][0] = 2;
				board[3][0] = 2;
				board[2][0] = 2;
			}
			if(board[6][0]==1&&board[5][0]==1&&board[4][0]==1&&board[3][0]==1&&board[2][0]==1&&board[1][0]==1&&board[0][0]==2){
				board[6][0] = 2;
				board[5][0] = 2;
				board[4][0] = 2;
				board[3][0] = 2;
				board[2][0] = 2;
				board[1][0] = 2;
			}
				if(board[7][1]==1&&board[7][2]==2){
				board[7][1] = 2;
			}
			if(board[7][1]==1&&board[7][2]==1&&board[7][3]==2){
				board[7][1] = 2;
				board[7][2] = 2;
			}
			if(board[7][1]==1&&board[7][2]==1&&board[7][3]==1&&board[7][4]==2){
				board[7][1] = 2;
				board[7][2] = 2;
				board[7][3] = 2;
			}
			if(board[7][1]==1&&board[7][2]==1&&board[7][3]==1&&board[7][4]==1&&board[7][5]==2){
				board[7][1] = 2;
				board[7][2] = 2;
				board[7][3] = 2;
				board[7][4] = 2;
			}
			if(board[7][1]==1&&board[7][2]==1&&board[7][3]==1&&board[7][4]==1&&board[7][5]==1&&board[7][6]==2){
				board[7][1] = 2;
				board[7][2] = 2;
				board[7][3] = 2;
				board[7][4] = 2;
				board[7][5] = 2;
			}
			if(board[7][1]==1&&board[7][2]==1&&board[7][3]==1&&board[7][4]==1&&board[7][5]==1&&board[7][6]==1&&board[7][7]==2){
				board[7][1] = 2;
				board[7][2] = 2;
				board[7][3] = 2;
				board[7][4] = 2;
				board[7][5] = 2;
				board[7][6] = 2;
				}
			if(board[6][1]==1&&board[5][2]==2){
				board[6][1] = 2;
			}
			if(board[6][1]==1&&board[5][2]==1&&board[4][3]==2){
				board[6][1] = 2;
				board[5][2] = 2;
			}
			if(board[6][1]==1&&board[5][2]==1&&board[4][3]==1&&board[3][4]==2){
				board[6][1] = 2;
				board[5][2] = 2;
				board[4][3] = 2;
			}
			if(board[6][1]==1&&board[5][2]==1&&board[4][3]==1&&board[3][4]==1&&board[2][5]==2){
				board[6][1] = 2;
				board[5][2] = 2;
				board[4][3] = 2;
				board[3][4] = 2;
			}
			if(board[6][1]==1&&board[5][2]==1&&board[4][3]==1&&board[3][4]==1&&board[2][5]==1&&board[1][6]==2){
				board[6][1] = 2;
				board[5][2] = 2;
				board[4][3] = 2;
				board[3][4] = 2;
				board[2][5] = 2;
			}
			if(board[6][1]==1&&board[5][2]==1&&board[4][3]==1&&board[3][4]==1&&board[2][5]==1&&board[1][6]==1&&board[0][7]==2){
				board[6][1] = 2;
				board[5][2] = 2;
				board[4][3] = 2;
				board[3][4] = 2;
				board[2][5] = 2;
				board[1][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==1){//0,1黒
			
			if(board[1][1]==2&&board[2][1]==1){
				board[1][1] = 1;
			}
			if(board[1][1]==2&&board[2][1]==2&&board[3][1]==1){
				board[1][1] = 1;
				board[2][1] = 1;
			}
			if(board[1][1]==2&&board[2][1]==2&&board[3][1]==2&&board[4][1]==1){
				board[1][1] = 1;
				board[2][1] = 1;
				board[3][1] = 1;
			}
			if(board[1][1]==2&&board[2][1]==2&&board[3][1]==2&&board[4][1]==2&&board[5][1]==1){
				board[1][1] = 1;
				board[2][1] = 1;
				board[3][1] = 1;
				board[4][1] = 1;
			}
			if(board[1][1]==2&&board[2][1]==2&&board[3][1]==2&&board[4][1]==2&&board[5][1]==2&&board[6][1]==1){
				board[1][1] = 1;
				board[2][1] = 1;
				board[3][1] = 1;
				board[4][1] = 1;
				board[5][1] = 1;
			}
			if(board[1][1]==2&&board[2][1]==2&&board[3][1]==2&&board[4][1]==2&&board[5][1]==2&&board[6][1]==2&&board[7][1]==1){
				board[1][1] = 1;
				board[2][1] = 1;
				board[3][1] = 1;
				board[4][1] = 1;
				board[5][1] = 1;
				board[6][1] = 1;
				}
			if(board[0][2]==2&&board[0][3]==1){
				board[0][2] = 1;
			}
			if(board[0][2]==2&&board[0][3]==2&&board[0][4]==1){
				board[0][2] = 1;
				board[0][3] = 1;
			}
			if(board[0][2]==2&&board[0][3]==2&&board[0][4]==2&&board[0][5]==1){
				board[0][2] = 1;
				board[0][3] = 1;
				board[0][4] = 1;
			}
			if(board[0][2]==2&&board[0][3]==2&&board[0][4]==2&&board[0][5]==2&&board[0][6]==1){
				board[0][2] = 1;
				board[0][3] = 1;
				board[0][4] = 1;
				board[0][5] = 1;
			}
			if(board[0][2]==2&&board[0][3]==2&&board[0][4]==2&&board[0][5]==2&&board[0][6]==2&&board[0][7]==1){
				board[0][2] = 1;
				board[0][3] = 1;
				board[0][4] = 1;
				board[0][5] = 1;
				board[0][6] = 1;
			}
			if(board[1][2]==2&&board[2][3]==1){
				board[1][2] = 1;
			}
			if(board[1][2]==2&&board[2][3]==2&&board[3][4]==1){
				board[1][2] = 1;
				board[2][3] = 1;
			}
			if(board[1][2]==2&&board[2][3]==2&&board[3][4]==2&&board[4][5]==1){
				board[1][2] = 1;
				board[2][3] = 1;
				board[3][4] = 1;
			}
			if(board[1][2]==2&&board[2][3]==2&&board[3][4]==2&&board[4][5]==2&&board[5][6]==1){
				board[1][2] = 1;
				board[2][3] = 1;
				board[3][4] = 1;
				board[4][5] = 1;
			}
			if(board[1][2]==2&&board[2][3]==2&&board[3][4]==2&&board[4][5]==2&&board[5][6]==2&&board[6][7]==1){
				board[1][2] = 1;
				board[2][3] = 1;
				board[3][4] = 1;
				board[4][5] = 1;
				board[5][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==1){//0,1白
			if((board[1][1]==1)&&(board[2][1]==2)){
				board[1][1] = 2;
			}
			if(board[1][1]==1&&board[2][1]==1&&board[3][1]==2){
				board[1][1] = 2;
				board[2][1] = 2;
			}
			if(board[1][1]==1&&board[2][1]==1&&board[3][1]==1&&board[4][1]==2){
				board[1][1] = 2;
				board[2][1] = 2;
				board[3][1] = 2;
			}
			if(board[1][1]==1&&board[2][1]==1&&board[3][1]==1&&board[4][1]==1&&board[5][1]==2){
				board[1][1] = 2;
				board[2][1] = 2;
				board[3][1] = 2;
				board[4][1] = 2;
			}
			if(board[1][1]==1&&board[2][1]==1&&board[3][1]==1&&board[4][1]==1&&board[5][1]==1&&board[6][1]==2){
				board[1][1] = 2;
				board[2][1] = 2;
				board[3][1] = 2;
				board[4][1] = 2;
				board[5][1] = 2;
			}
			if(board[1][1]==1&&board[2][1]==1&&board[3][1]==1&&board[4][1]==1&&board[5][1]==1&&board[6][1]==1&&board[7][1]==2){
				board[1][1] = 2;
				board[2][1] = 2;
				board[3][1] = 2;
				board[4][1] = 2;
				board[5][1] = 2;
				board[6][1] = 2;
			}
			if(board[0][2]==1&&board[0][3]==2){
				board[0][2] = 2;
			}
			if(board[0][2]==1&&board[0][3]==1&&board[0][4]==2){
				board[0][2] = 2;
				board[0][3] = 2;
			}
			if(board[0][2]==1&&board[0][3]==1&&board[0][4]==1&&board[0][5]==2){
				board[0][2] = 2;
				board[0][3] = 2;
				board[0][4] = 2;
			}
			if(board[0][2]==1&&board[0][3]==1&&board[0][4]==1&&board[0][5]==1&&board[0][6]==2){
				board[0][2] = 2;
				board[0][3] = 2;
				board[0][4] = 2;
				board[0][5] = 2;
			}
			if(board[0][2]==1&&board[0][3]==1&&board[0][4]==1&&board[0][5]==1&&board[0][6]==1&&board[0][7]==2){
				board[0][2] = 2;
				board[0][3] = 2;
				board[0][4] = 2;
				board[0][5] = 2;
				board[0][6] = 2;
			}
			if(board[1][2]==1&&board[2][3]==2){
				board[1][2] = 2;
			}
			if(board[1][2]==1&&board[2][3]==1&&board[3][4]==2){
				board[1][2] = 2;
				board[2][3] = 2;
			}
			if(board[1][2]==1&&board[2][3]==1&&board[3][4]==1&&board[4][5]==2){
				board[1][2] = 2;
				board[2][3] = 2;
				board[3][4] = 2;
			}
			if(board[1][2]==1&&board[2][3]==1&&board[3][4]==2&&board[4][5]==1&&board[5][6]==2){
				board[1][2] = 2;
				board[2][3] = 2;
				board[3][4] = 2;
				board[4][5] = 2;
			}
			if(board[1][2]==1&&board[2][3]==1&&board[3][4]==1&&board[4][5]==1&&board[5][6]==1&&board[6][7]==2){
				board[1][2] = 2;
				board[2][3] = 2;
				board[3][4] = 2;
				board[4][5] = 2;
				board[5][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==1){//1,1黒
			if(board[2][1]==2&&board[3][1]==1){
				board[2][1] = 1;
			}
			if(board[2][1]==2&&board[3][1]==2&&board[4][1]==1){
				board[2][1] = 1;
				board[3][1] = 1;
			}
			if(board[2][1]==2&&board[3][1]==2&&board[4][1]==2&&board[5][1]==1){
				board[2][1] = 1;
				board[3][1] = 1;
				board[4][1] = 1;
			}
			if(board[2][1]==2&&board[3][1]==2&&board[4][1]==2&&board[5][1]==2&&board[6][1]==1){
				board[2][1] = 1;
				board[3][1] = 1;
				board[4][1] = 1;
				board[5][1] = 1;
			}
			if(board[2][1]==2&&board[3][1]==2&&board[4][1]==2&&board[5][1]==2&&board[6][1]==2&&board[7][1]==1){
				board[2][1] = 1;
				board[3][1] = 1;
				board[4][1] = 1;
				board[5][1] = 1;
				board[6][1] = 1;
			}
			if(board[1][2]==2&&board[1][3]==1){
				board[1][2] = 1;
			}
			if(board[1][2]==2&&board[1][3]==2&&board[1][4]==1){
				board[1][2] = 1;
				board[1][3] = 1;
			}
			if(board[1][2]==2&&board[1][3]==2&&board[1][4]==2&&board[1][5]==1){
				board[1][2] = 1;
				board[1][3] = 1;
				board[1][4] = 1;
			}
			if(board[1][2]==2&&board[1][3]==2&&board[1][4]==2&&board[1][5]==2&&board[1][6]==1){
				board[1][2] = 1;
				board[1][3] = 1;
				board[1][4] = 1;
				board[1][5] = 1;
			}
			if(board[1][2]==2&&board[1][3]==2&&board[1][4]==2&&board[1][5]==2&&board[1][6]==2&&board[1][7]==1){
				board[1][2] = 1;
				board[1][3] = 1;
				board[1][4] = 1;
				board[1][5] = 1;
				board[1][6] = 1;
			}
			if(board[2][2]==2&&board[3][3]==1){
				board[2][2] = 1;
			}
			if(board[2][2]==2&&board[3][3]==2&&board[4][4]==1){
				board[2][2] = 1;
				board[3][3] = 1;
			}
			if(board[2][2]==2&&board[3][3]==2&&board[4][4]==2&&board[5][5]==1){
				board[2][2] = 1;
				board[3][3] = 1;
				board[4][4] = 1;
			}
			if(board[2][2]==2&&board[3][3]==2&&board[4][4]==2&&board[5][5]==2&&board[6][6]==1){
				board[2][2] = 1;
				board[3][3] = 1;
				board[4][4] = 1;
				board[5][5] = 1;
			}
			if(board[2][2]==2&&board[3][3]==2&&board[4][4]==2&&board[5][5]==2&&board[6][6]==2&&board[7][7]==1){
				board[2][2] = 1;
				board[3][3] = 1;
				board[4][4] = 1;
				board[5][5] = 1;
				board[6][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==1){//1,1白
			if(board[2][1]==1&&board[3][1]==2){
				board[2][1] = 2;
			}
			if(board[2][1]==1&&board[3][1]==1&&board[4][1]==2){
				board[2][1] = 2;
				board[3][1] = 2;
			}
			if(board[2][1]==1&&board[3][1]==1&&board[4][1]==1&&board[5][1]==2){
				board[2][1] = 2;
				board[3][1] = 2;
				board[4][1] = 2;
			}
			if(board[2][1]==1&&board[3][1]==1&&board[4][1]==1&&board[5][1]==1&&board[6][1]==2){
				board[2][1] = 2;
				board[3][1] = 2;
				board[4][1] = 2;
				board[5][1] = 2;
			}
			if(board[2][1]==1&&board[3][1]==1&&board[4][1]==1&&board[5][1]==1&&board[6][1]==1&&board[7][1]==2){
				board[2][1] = 2;
				board[3][1] = 2;
				board[4][1] = 2;
				board[5][1] = 2;
				board[6][1] = 2;
			}
			if(board[1][2]==1&&board[1][3]==2){
				board[1][2] = 2;
			}
			if(board[1][2]==1&&board[1][3]==1&&board[1][4]==2){
				board[1][2] = 2;
				board[1][3] = 2;
			}
			if(board[1][2]==1&&board[1][3]==1&&board[1][4]==1&&board[1][5]==2){
				board[1][2] = 2;
				board[1][3] = 2;
				board[1][4] = 2;
			}
			if(board[1][2]==1&&board[1][3]==1&&board[1][4]==1&&board[1][5]==1&&board[1][6]==2){
				board[1][2] = 2;
				board[1][3] = 2;
				board[1][4] = 2;
				board[1][5] = 2;
			}
			if(board[1][2]==1&&board[1][3]==1&&board[1][4]==1&&board[1][5]==1&&board[1][6]==1&&board[1][7]==2){
				board[1][2] = 2;
				board[1][3] = 2;
				board[1][4] = 2;
				board[1][5] = 2;
				board[1][6] = 2;
			}
			if(board[2][2]==1&&board[3][3]==2){
				board[2][2] = 2;
			}
			if(board[2][2]==1&&board[3][3]==1&&board[4][4]==2){
				board[2][2] = 2;
				board[3][3] = 2;
			}
			if(board[2][2]==1&&board[3][3]==1&&board[4][4]==1&&board[5][5]==2){
				board[2][2] = 2;
				board[3][3] = 2;
				board[4][4] = 2;
			}
			if(board[2][2]==1&&board[3][3]==1&&board[4][4]==1&&board[5][5]==1&&board[6][6]==2){
				board[2][2] = 2;
				board[3][3] = 2;
				board[4][4] = 2;
				board[5][5] = 2;
			}
			if(board[2][2]==1&&board[3][3]==1&&board[4][4]==1&&board[5][5]==1&&board[6][6]==1&&board[7][7]==2){
				board[2][2] = 2;
				board[3][3] = 2;
				board[4][4] = 2;
				board[5][5] = 2;
				board[6][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==1){//2,1黒
			if(board[3][1]==2&&board[4][1]==1){
				board[3][1] = 1;
			}
			if(board[1][1]==2&&board[0][1]==1){
				board[1][1] = 1;
			}
			if(board[3][1]==2&&board[4][1]==2&&board[5][1]==1){
				board[3][1] = 1;
				board[4][1] = 1;
			}
			if(board[3][1]==2&&board[4][1]==2&&board[5][1]==2&&board[6][1]==1){
				board[3][1] = 1;
				board[4][1] = 1;
				board[5][1] = 1;
			}
			if(board[3][1]==2&&board[4][1]==2&&board[5][1]==2&&board[6][1]==2&&board[7][1]==1){
				board[3][1] = 1;
				board[4][1] = 1;
				board[5][1] = 1;
				board[6][1] = 1;
			}
			if(board[2][2]==2&&board[2][3]==1){
				board[2][2] = 1;
			}
			if(board[2][2]==2&&board[2][3]==2&&board[2][4]==1){
				board[2][2] = 1;
				board[2][3] = 1;
			}
			if(board[2][2]==2&&board[2][3]==2&&board[2][4]==2&&board[2][5]==1){
				board[2][2] = 1;
				board[2][3] = 1;
				board[2][4] = 1;
			}
			if(board[2][2]==2&&board[2][3]==2&&board[2][4]==2&&board[2][5]==2&&board[2][6]==1){
				board[2][2] = 1;
				board[2][3] = 1;
				board[2][4] = 1;
				board[2][5] = 1;
			}
			if(board[2][2]==2&&board[2][3]==2&&board[2][4]==2&&board[2][5]==2&&board[2][6]==2&&board[2][7]==1){
				board[2][2] = 1;
				board[2][3] = 1;
				board[2][4] = 1;
				board[2][5] = 1;
				board[2][6] = 1;
			}
			if(board[3][2]==2&&board[4][3]==1){
				board[3][2] = 1;
			}
			if(board[1][2]==2&&board[0][3]==1){
				board[1][2] = 1;
			}
			if(board[3][2]==2&&board[4][3]==2&&board[5][4]==1){
				board[3][2] = 1;
				board[4][3] = 1;
			}
			if(board[3][2]==2&&board[4][3]==2&&board[5][4]==2&&board[6][5]==1){
				board[3][2] = 1;
				board[4][3] = 1;
				board[5][4] = 1;
			}
			if(board[3][2]==2&&board[4][3]==2&&board[5][4]==2&&board[6][5]==2&&board[7][6]==1){
				board[3][2] = 1;
				board[4][3] = 1;
				board[5][4] = 1;
				board[6][5] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==1){//2,1白
			if(board[3][1]==1&&board[4][1]==2){
				board[3][1] = 2;
			}
			if(board[1][1]==1&&board[0][1]==2){
				board[1][1] = 2;
			}
			if(board[3][1]==1&&board[4][1]==1&&board[5][1]==2){
				board[3][1] = 2;
				board[4][1] = 2;
			}
			if(board[3][1]==1&&board[4][1]==1&&board[5][1]==1&&board[6][1]==2){
				board[3][1] = 2;
				board[4][1] = 2;
				board[5][1] = 2;
			}
			if(board[3][1]==1&&board[4][1]==1&&board[5][1]==1&&board[6][1]==1&&board[7][1]==2){
				board[3][1] = 2;
				board[4][1] = 2;
				board[5][1] = 2;
				board[6][1] = 2;
			}
			if(board[2][2]==1&&board[2][3]==2){
				board[2][2] = 2;
			}
			if(board[2][2]==1&&board[2][3]==1&&board[2][4]==2){
				board[2][2] = 2;
				board[2][3] = 2;
			}
			if(board[2][2]==1&&board[2][3]==1&&board[2][4]==1&&board[2][5]==2){
				board[2][2] = 2;
				board[2][3] = 2;
				board[2][4] = 2;
			}
			if(board[2][2]==1&&board[2][3]==1&&board[2][4]==1&&board[2][5]==1&&board[2][6]==2){
				board[2][2] = 2;
				board[2][3] = 2;
				board[2][4] = 2;
				board[2][5] = 2;
			}
			if(board[2][2]==1&&board[2][3]==1&&board[2][4]==1&&board[2][5]==1&&board[2][6]==1&&board[2][7]==2){
				board[2][2] = 2;
				board[2][3] = 2;
				board[2][4] = 2;
				board[2][5] = 2;
				board[2][6] = 2;
			}
			if(board[3][2]==1&&board[4][3]==2){
				board[3][2] = 2;
			}
			if(board[1][2]==1&&board[0][3]==2){
				board[3][2] = 2;
			}
			if(board[3][2]==1&&board[4][3]==1&&board[5][4]==2){
				board[3][2] = 2;
				board[4][3] = 2;
			}
			if(board[3][2]==1&&board[4][3]==1&&board[5][4]==1&&board[6][5]==2){
				board[3][2] = 2;
				board[4][3] = 2;
				board[5][4] = 2;
			}
			if(board[3][2]==1&&board[4][3]==1&&board[5][4]==1&&board[6][5]==1&&board[7][6]==2){
				board[3][2] = 2;
				board[4][3] = 2;
				board[5][4] = 2;
				board[6][5] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==3&&retu==1){//3,1黒
			if(board[4][1]==2&&board[5][1]==1){
				board[4][1] = 1;
			}
			if(board[2][1]==2&&board[1][1]==1){
				board[2][1] = 1;
			}
			if(board[4][1]==2&&board[5][1]==2&&board[6][1]==1){
				board[4][1] = 1;
				board[5][1] = 1;
			}
			if(board[2][1]==2&&board[1][1]==2&&board[0][1]==1){
				board[2][1] = 1;
				board[1][1] = 1;
			}
			if(board[4][1]==2&&board[5][1]==2&&board[6][1]==2&&board[7][1]==1){
				board[4][1] = 1;
				board[5][1] = 1;
				board[6][1] = 1;
			}
			if(board[3][2]==2&&board[3][3]==1){
				board[3][2] = 1;
			}
			if(board[3][2]==2&&board[3][3]==2&&board[3][4]==1){
				board[3][2] = 1;
				board[3][3] = 1;
			}
			if(board[3][2]==2&&board[3][3]==2&&board[3][4]==2&&board[3][5]==1){
				board[3][2] = 1;
				board[3][3] = 1;
				board[3][4] = 1;
			}
			if(board[3][2]==2&&board[3][3]==2&&board[3][4]==2&&board[3][5]==2&&board[3][6]==1){
				board[3][2] = 1;
				board[3][3] = 1;
				board[3][4] = 1;
				board[3][5] = 1;
			}
			if(board[3][2]==2&&board[3][3]==2&&board[3][4]==2&&board[3][5]==2&&board[3][6]==2&&board[3][7]==1){
				board[3][2] = 1;
				board[3][3] = 1;
				board[3][4] = 1;
				board[3][5] = 1;
				board[3][6] = 1;
			}
			if(board[4][2]==2&&board[5][3]==1){
				board[4][2] = 1;
			}
			if(board[2][2]==2&&board[1][3]==1){
				board[2][2] = 1;
			}
			if(board[4][2]==2&&board[5][3]==2&&board[6][4]==1){
				board[4][2] = 1;
				board[5][3] = 1;
			}
			if(board[2][2]==2&&board[1][3]==2&&board[0][4]==1){
				board[2][2] = 1;
				board[1][3] = 1;
			}
			if(board[4][2]==2&&board[5][3]==2&&board[6][4]==2&&board[7][5]==1){
				board[3][1] = 1;
				board[4][2] = 1;
				board[5][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==3&&retu==1){//3,1白
			if(board[4][1]==1&&board[5][1]==2){
				board[4][1] = 2;
			}
			if(board[2][1]==1&&board[1][1]==2){
				board[2][1] = 2;
			}
			if(board[4][1]==1&&board[5][1]==1&&board[6][1]==2){
				board[4][1] = 2;
				board[5][1] = 2;
			}
			if(board[2][1]==1&&board[1][1]==1&&board[0][1]==2){
				board[2][1] = 2;
				board[1][1] = 2;
			}
			if(board[4][1]==1&&board[5][1]==1&&board[6][1]==1&&board[7][1]==2){
				board[4][1] = 2;
				board[5][1] = 2;
				board[6][1] = 2;
			}
			if(board[3][2]==1&&board[3][3]==1&&board[3][4]==2){
				board[3][2] = 2;
				board[3][3] = 2;
			}
			if(board[3][2]==1&&board[3][3]==1&&board[3][4]==1&&board[3][5]==2){
				board[3][2] = 2;
				board[3][3] = 2;
				board[3][4] = 2;
			}
			if(board[3][2]==1&&board[3][3]==1&&board[3][4]==1&&board[3][5]==1&&board[3][6]==2){
				board[3][2] = 2;
				board[3][3] = 2;
				board[3][4] = 2;
				board[3][5] = 2;
			}
			if(board[3][2]==1&&board[3][3]==1&&board[3][4]==1&&board[3][5]==1&&board[3][6]==1&&board[3][7]==2){
				board[3][2] = 2;
				board[3][3] = 2;
				board[3][4] = 2;
				board[3][5] = 2;
				board[3][6] = 2;
			}
			if(board[4][2]==1&&board[5][3]==2){
				board[4][2] = 2;
			}
			if(board[2][2]==1&&board[1][3]==2){
				board[2][2] = 2;
			}
			if(board[4][2]==1&&board[5][3]==1&&board[6][4]==2){
				board[4][2] = 2;
				board[5][3] = 2;
			}
			if(board[2][2]==1&&board[1][3]==1&&board[0][4]==2){
				board[2][2] = 2;
				board[1][3] = 2;
			}
			if(board[4][2]==1&&board[5][3]==1&&board[6][4]==1&&board[7][5]==2){
				board[4][2] = 2;
				board[5][3] = 2;
				board[6][4] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==4&&retu==1){//4,1黒
			if(board[5][1]==2&&board[6][1]==1){
				board[5][1] = 1;
			}
			if(board[3][1]==2&&board[2][1]==1){
				board[3][1] = 1;
			}
			if(board[5][1]==2&&board[6][1]==2&&board[7][1]==1){
				board[5][1] = 1;
				board[6][1] = 1;
			}
			if(board[3][1]==2&&board[2][1]==2&&board[1][1]==1){
				board[3][1] = 1;
				board[2][1] = 1;
			}
			if(board[3][1]==2&&board[2][1]==2&&board[1][1]==1&&board[0][1]==1){
				board[3][1] = 1;
				board[2][1] = 1;
				board[1][1] = 1;
			}
			if(board[4][2]==2&&board[4][3]==1){
				board[4][2] = 1;
			}
			if(board[4][2]==2&&board[4][3]==2&&board[4][4]==1){
				board[4][2] = 1;
				board[4][3] = 1;
			}
			if(board[4][2]==2&&board[4][3]==2&&board[4][4]==2&&board[4][5]==1){
				board[4][2] = 1;
				board[4][3] = 1;
				board[4][4] = 1;
			}
			if(board[4][2]==2&&board[4][3]==2&&board[4][4]==2&&board[4][5]==2&&board[4][6]==1){
				board[4][2] = 1;
				board[4][3] = 1;
				board[4][4] = 1;
				board[4][5] = 1;
			}
			if(board[4][2]==2&&board[4][3]==2&&board[4][4]==2&&board[4][5]==2&&board[4][6]==2&&board[4][7]==1){
				board[4][2] = 1;
				board[4][3] = 1;
				board[4][4] = 1;
				board[4][5] = 1;
				board[4][6] = 1;
			}
			if(board[5][2]==2&&board[6][3]==1){
				board[5][2] = 1;
			}
			if(board[3][2]==2&&board[2][3]==1){
				board[3][2] = 1;
			}
			if(board[5][2]==2&&board[6][3]==2&&board[7][4]==1){
				board[5][2] = 1;
				board[6][3] = 1;
			}
			if(board[3][2]==2&&board[2][3]==2&&board[1][4]==1){
				board[3][2] = 1;
				board[2][3] = 1;
			}
			if(board[3][2]==2&&board[2][3]==2&&board[1][4]==2&&board[0][5]==1){
				board[3][2] = 1;
				board[2][3] = 1;
				board[1][4] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==4&&retu==1){//4,1白
			if(board[5][1]==1&&board[6][1]==2){
				board[5][1] = 2;
			}
			if(board[3][1]==1&&board[2][1]==2){
				board[3][1] = 2;
			}
			if(board[5][1]==1&&board[6][1]==1&&board[7][1]==2){
				board[5][1] = 2;
				board[6][1] = 2;
			}
			if(board[3][1]==1&&board[2][1]==1&&board[1][1]==2){
				board[3][1] = 2;
				board[2][1] = 2;
			}
			if(board[3][1]==1&&board[2][1]==1&&board[1][1]==1&&board[0][1]==2){
				board[3][1] = 2;
				board[2][1] = 2;
				board[1][1] = 2;
			}
			if(board[4][2]==1&&board[4][3]==2){
				board[4][2] = 2;
			}
			if(board[4][2]==1&&board[4][3]==1&&board[4][4]==2){
				board[4][2] = 2;
				board[4][3] = 2;
			}
			if(board[4][2]==1&&board[4][3]==1&&board[4][4]==1&&board[4][5]==2){
				board[4][2] = 2;
				board[4][3] = 2;
				board[4][4] = 2;
			}
			if(board[4][2]==1&&board[4][3]==1&&board[4][4]==1&&board[4][5]==1&&board[4][6]==2){
				board[4][2] = 2;
				board[4][3] = 2;
				board[4][4] = 2;
				board[4][5] = 2;
			}
			if(board[4][2]==1&&board[4][3]==1&&board[4][4]==1&&board[4][5]==1&&board[4][6]==1&&board[4][7]==2){
				board[4][2] = 2;
				board[4][3] = 2;
				board[4][4] = 2;
				board[4][5] = 2;
				board[4][6] = 2;
			}
			if(board[5][2]==1&&board[6][3]==2){
				board[5][2] = 2;
			}
			if(board[3][2]==1&&board[2][3]==2){
				board[3][2] = 2;
			}
			if(board[5][2]==1&&board[6][3]==1&&board[7][4]==2){
				board[5][2] = 2;
				board[6][3] = 2;
			}
			if(board[3][2]==1&&board[2][3]==1&&board[1][4]==2){
				board[3][2] = 2;
				board[2][3] = 2;
			}
			if(board[3][2]==1&&board[2][3]==1&&board[1][4]==1&&board[0][5]==2){
				board[3][2] = 2;
				board[2][3] = 2;
				board[1][4] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==1){//5,1黒
			if(board[6][1]==2&&board[7][1]==1){
				board[6][1] = 1;
			}
			if(board[4][1]==2&&board[3][1]==1){
				board[4][1] = 1;
			}
			if(board[4][1]==2&&board[3][1]==2&&board[2][1]==1){
				board[4][1] = 1;
				board[3][1] = 1;
			}
			if(board[4][1]==2&&board[3][1]==2&&board[2][1]==2&&board[1][1]==1){
				board[4][1] = 1;
				board[3][1] = 1;
				board[2][1] = 1;
			}
			if(board[4][1]==2&&board[3][1]==2&&board[2][1]==2&&board[1][1]==2&&board[0][1]==1){
				board[4][1] = 1;
				board[3][1] = 1;
				board[2][1] = 1;
				board[1][1] = 1;
			}
			if(board[5][2]==2&&board[5][3]==1){
				board[5][2] = 1;
			}
			if(board[5][2]==2&&board[5][3]==2&&board[5][4]==1){
				board[5][2] = 1;
				board[5][3] = 1;
			}
			if(board[5][2]==2&&board[5][3]==2&&board[5][4]==2&&board[5][5]==1){
				board[5][2] = 1;
				board[5][3] = 1;
				board[5][4] = 1;
			}
			if(board[5][2]==2&&board[5][3]==2&&board[5][4]==2&&board[5][5]==2&&board[5][6]==1){
				board[5][2] = 1;
				board[5][3] = 1;
				board[5][4] = 1;
				board[5][5] = 1;
			}
			if(board[5][2]==2&&board[5][3]==2&&board[5][4]==2&&board[5][5]==2&&board[5][6]==2&&board[5][7]==1){
				board[5][2] = 1;
				board[5][3] = 1;
				board[5][4] = 1;
				board[5][5] = 1;
				board[5][6] = 1;
			}
			if(board[6][2]==2&&board[7][3]==1){
				board[6][2] = 1;
			}
			if(board[4][2]==2&&board[3][3]==1){
				board[4][2] = 1;
			}
			if(board[4][2]==2&&board[3][3]==2&&board[2][4]==1){
				board[4][2] = 1;
				board[3][3] = 1;
			}
			if(board[4][2]==2&&board[3][3]==2&&board[2][4]==2&&board[1][5]==1){
				board[4][2] = 1;
				board[3][3] = 1;
				board[2][4] = 1;
			}
			if(board[4][2]==2&&board[3][3]==2&&board[2][4]==2&&board[1][5]==2&&board[0][6]==1){
				board[4][2] = 1;
				board[3][3] = 1;
				board[2][4] = 1;
				board[1][5] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==1){//5,1白
			if(board[6][1]==1&&board[7][1]==2){
				board[6][1] = 2;
			}
			if(board[4][1]==1&&board[3][1]==2){
				board[4][1] = 2;
			}
			if(board[4][1]==1&&board[3][1]==1&&board[2][1]==2){
				board[4][1] = 2;
				board[3][1] = 2;
			}
			if(board[4][1]==1&&board[3][1]==1&&board[2][1]==1&&board[1][1]==2){
				board[4][1] = 2;
				board[3][1] = 2;
				board[2][1] = 2;
			}
			if(board[4][1]==1&&board[3][1]==1&&board[2][1]==1&&board[1][1]==1&&board[0][1]==2){
				board[4][1] = 2;
				board[3][1] = 2;
				board[2][1] = 2;
				board[1][1] = 2;
			}
			if(board[5][2]==1&&board[5][3]==1){
				board[5][2] = 2;
			}
			if(board[5][2]==1&&board[5][3]==1&&board[5][4]==2){
				board[5][2] = 2;
				board[5][3] = 2;
			}
			if(board[5][2]==1&&board[5][3]==1&&board[5][4]==1&&board[5][5]==2){
				board[5][2] = 2;
				board[5][3] = 2;
				board[5][4] = 2;
			}
			if(board[5][2]==1&&board[5][3]==1&&board[5][4]==1&&board[5][5]==1&&board[5][6]==2){
				board[5][2] = 2;
				board[5][3] = 2;
				board[5][4] = 2;
				board[5][5] = 2;
			}
			if(board[5][2]==1&&board[5][3]==1&&board[5][4]==1&&board[5][5]==1&&board[5][6]==1&&board[5][7]==2){
				board[5][2] = 2;
				board[5][3] = 2;
				board[5][4] = 2;
				board[5][5] = 2;
				board[5][6] = 2;
			}
			if(board[6][2]==1&&board[7][3]==2){
				board[6][2] = 2;
			}
			if(board[4][2]==1&&board[3][3]==2){
				board[4][2] = 2;
			}
			if(board[4][2]==1&&board[3][3]==1&&board[2][4]==2){
				board[4][2] = 2;
				board[3][3] = 2;
			}
			if(board[4][2]==1&&board[3][3]==1&&board[2][4]==1&&board[1][5]==2){
				board[4][2] = 2;
				board[3][3] = 2;
				board[2][4] = 2;
			}
			if(board[4][2]==1&&board[3][3]==1&&board[2][4]==1&&board[1][5]==1&&board[0][6]==2){
				board[4][2] = 2;
				board[3][3] = 2;
				board[2][4] = 2;
				board[1][5] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==6&&retu==1){//6,1黒
			if(board[5][1]==2&&board[4][1]==1){
				board[5][1] = 1;
			}
			if(board[5][1]==2&&board[4][1]==2&&board[3][1]==1){
				board[5][1] = 1;
				board[4][1] = 1;
			}
			if(board[5][1]==2&&board[4][1]==2&&board[3][1]==2&&board[2][1]==1){
				board[5][1] = 1;
				board[4][1] = 1;
				board[3][1] = 1;
			}
			if(board[5][1]==2&&board[4][1]==2&&board[3][1]==2&&board[2][1]==2&&board[1][1]==1){
				board[5][1] = 1;
				board[4][1] = 1;
				board[3][1] = 1;
				board[2][1] = 1;
			}
			if(board[5][1]==2&&board[4][1]==2&&board[3][1]==2&&board[2][1]==2&&board[1][1]==2&&board[0][1]==1){
				board[5][1] = 1;
				board[4][1] = 1;
				board[3][1] = 1;
				board[2][1] = 1;
				board[1][1] = 1;
			}
			if(board[6][2]==2&&board[6][3]==1){
				board[6][2] = 1;
			}
			if(board[6][2]==2&&board[6][3]==2&&board[6][4]==1){
				board[6][2] = 1;
				board[6][3] = 1;
			}
			if(board[6][2]==2&&board[6][3]==2&&board[6][4]==2&&board[6][5]==1){
				board[6][2] = 1;
				board[6][3] = 1;
				board[6][4] = 1;
			}
			if(board[6][2]==2&&board[6][3]==2&&board[6][4]==2&&board[6][5]==2&&board[6][6]==1){
				board[6][2] = 1;
				board[6][3] = 1;
				board[6][4] = 1;
				board[6][5] = 1;
			}
			if(board[6][2]==2&&board[6][3]==2&&board[6][4]==2&&board[6][5]==2&&board[6][6]==2&&board[6][7]==1){
				board[6][2] = 1;
				board[6][3] = 1;
				board[6][4] = 1;
				board[6][5] = 1;
				board[6][6] = 1;
			}
			if(board[5][2]==2&&board[4][3]==1){
				board[5][2] = 1;
			}
			if(board[5][2]==2&&board[4][3]==2&&board[3][4]==1){
				board[5][2] = 1;
				board[4][3] = 1;
			}
			if(board[5][2]==2&&board[4][3]==2&&board[3][4]==2&&board[2][5]==1){
				board[5][2] = 1;
				board[4][3] = 1;
				board[3][4] = 1;
			}
			if(board[5][2]==2&&board[4][3]==2&&board[3][4]==2&&board[2][5]==2&&board[1][6]==1){
				board[5][2] = 1;
				board[4][3] = 1;
				board[3][4] = 1;
				board[2][5] = 1;
			}
			if(board[5][2]==2&&board[4][3]==2&&board[3][4]==2&&board[2][5]==2&&board[1][6]==2&&board[0][7]==1){
				board[5][2] = 1;
				board[4][3] = 1;
				board[3][4] = 1;
				board[2][5] = 1;
				board[1][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==1){//6,1白
			if(board[5][1]==1&&board[4][1]==2){
				board[5][1] = 2;
			}
			if(board[5][1]==1&&board[4][1]==1&&board[3][1]==2){
				board[5][1] = 2;
				board[4][1] = 2;
			}
			if(board[5][1]==1&&board[4][1]==1&&board[3][1]==1&&board[2][1]==2){
				board[5][1] = 2;
				board[4][1] = 2;
				board[3][1] = 2;
			}
			if(board[5][1]==1&&board[4][1]==1&&board[3][1]==1&&board[2][1]==1&&board[1][1]==2){
				board[5][1] = 2;
				board[4][1] = 2;
				board[3][1] = 2;
				board[2][1] = 2;
			}
			if(board[5][1]==1&&board[4][1]==1&&board[3][1]==1&&board[2][1]==1&&board[1][1]==1&&board[0][1]==2){
				board[5][1] = 2;
				board[4][1] = 2;
				board[3][1] = 2;
				board[2][1] = 2;
				board[1][1] = 2;
			}
			if(board[6][2]==1&&board[6][3]==2){
				board[6][2] = 2;
			}
			if(board[6][2]==1&&board[6][3]==1&&board[6][4]==2){
				board[6][2] = 2;
				board[6][3] = 2;
			}
			if(board[6][2]==1&&board[6][3]==1&&board[6][4]==1&&board[6][5]==2){
				board[6][2] = 2;
				board[6][3] = 2;
				board[6][4] = 2;
			}
			if(board[6][2]==1&&board[6][3]==1&&board[6][4]==1&&board[6][5]==1&&board[6][6]==2){
				board[6][2] = 2;
				board[6][3] = 2;
				board[6][4] = 2;
				board[6][5] = 2;
			}
			if(board[6][2]==1&&board[6][3]==1&&board[6][4]==1&&board[6][5]==1&&board[6][6]==1&&board[6][7]==2){
				board[6][2] = 2;
				board[6][3] = 2;
				board[6][4] = 2;
				board[6][5] = 2;
				board[6][6] = 2;
			}
			if(board[5][2]==1&&board[4][3]==2){
				board[5][2] = 2;
			}
			if(board[5][2]==1&&board[4][3]==1&&board[3][4]==2){
				board[5][2] = 2;
				board[4][3] = 2;
			}
			if(board[5][2]==1&&board[4][3]==1&&board[3][4]==1&&board[2][5]==2){
				board[5][2] = 2;
				board[4][3] = 2;
				board[3][4] = 2;
			}
			if(board[5][2]==1&&board[4][3]==1&&board[3][4]==1&&board[2][5]==1&&board[1][6]==2){
				board[5][2] = 2;
				board[4][3] = 2;
				board[3][4] = 2;
				board[2][5] = 2;
			}
			if(board[5][2]==1&&board[4][3]==1&&board[3][4]==1&&board[2][5]==1&&board[1][6]==1&&board[0][7]==2){
				board[5][2] = 2;
				board[4][3] = 2;
				board[3][4] = 2;
				board[2][5] = 2;
				board[1][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==1){//7,1黒
			if(board[6][1]==2&&board[5][1]==1){
				board[6][1] = 1;
			}
			if(board[6][1]==2&&board[5][1]==2&&board[4][1]==1){
				board[6][1] = 1;
				board[5][1] = 1;
			}
			if(board[6][1]==2&&board[5][1]==2&&board[4][1]==2&&board[3][1]==1){
				board[6][1] = 1;
				board[5][1] = 1;
				board[4][1] = 1;
			}
			if(board[6][1]==2&&board[5][1]==2&&board[4][1]==2&&board[3][1]==2&&board[2][1]==1){
				board[6][1] = 1;
				board[5][1] = 1;
				board[4][1] = 1;
				board[3][1] = 1;
			}
			if(board[6][1]==2&&board[5][1]==2&&board[4][1]==2&&board[3][1]==2&&board[2][1]==2&&board[1][1]==1){
				board[6][1] = 1;
				board[5][1] = 1;
				board[4][1] = 1;
				board[3][1] = 1;
				board[2][1] = 1;
			}
			if(board[6][1]==2&&board[5][1]==2&&board[4][1]==2&&board[3][1]==2&&board[2][1]==2&&board[1][1]==2&&board[0][1]==1){
				board[6][1] = 1;
				board[5][1] = 1;
				board[4][1] = 1;
				board[3][1] = 1;
				board[2][1] = 1;
				board[1][1] = 1;
			}
			if(board[7][2]==2&&board[7][3]==1){
				board[7][2] = 1;
			}
			if(board[7][2]==2&&board[7][3]==2&&board[7][4]==1){
				board[7][2] = 1;
				board[7][3] = 1;
			}
			if(board[7][2]==2&&board[7][3]==2&&board[7][4]==2&&board[7][5]==1){
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
			}
			if(board[7][2]==2&&board[7][3]==2&&board[7][4]==2&&board[7][5]==2&&board[7][6]==1){
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
				board[7][5] = 1;
			}
			if(board[7][2]==2&&board[7][3]==2&&board[7][4]==2&&board[7][5]==2&&board[7][6]==2&&board[7][7]==1){
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
				board[7][5] = 1;
				board[7][6] = 1;
			}
			if(board[6][2]==2&&board[5][3]==1){
				board[6][2] = 1;
			}
			if(board[6][2]==2&&board[5][3]==2&&board[4][4]==1){
				board[6][2] = 1;
				board[5][3] = 1;
			}
			if(board[6][2]==2&&board[5][3]==2&&board[4][4]==2&&board[3][5]==1){
				board[6][2] = 1;
				board[5][3] = 1;
				board[4][4] = 1;
			}
			if(board[6][2]==2&&board[5][3]==2&&board[4][4]==2&&board[3][5]==2&&board[5][6]==1){
				board[6][2] = 1;
				board[5][3] = 1;
				board[4][4] = 1;
				board[3][5] = 1;
			}
			if(board[6][2]==2&&board[5][3]==2&&board[4][4]==2&&board[3][5]==2&&board[2][6]==2&&board[1][7]==1){
				board[6][2] = 1;
				board[5][3] = 1;
				board[4][4] = 1;
				board[3][5] = 1;
				board[2][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==1){//7,1白
			if(board[6][1]==1&&board[5][1]==2){
				board[6][1] = 2;
			}
			if(board[6][1]==1&&board[5][1]==1&&board[4][1]==2){
				board[6][1] = 2;
				board[5][1] = 2;
			}
			if(board[6][1]==1&&board[5][1]==1&&board[4][1]==1&&board[3][1]==2){
				board[6][1] = 2;
				board[5][1] = 2;
				board[4][1] = 2;
			}
			if(board[6][1]==1&&board[5][1]==1&&board[4][1]==1&&board[3][1]==1&&board[2][1]==2){
				board[6][1] = 2;
				board[5][1] = 2;
				board[4][1] = 2;
				board[3][1] = 2;
			}
			if(board[6][1]==1&&board[5][1]==1&&board[4][1]==1&&board[3][1]==1&&board[2][1]==1&&board[1][1]==2){
				board[6][1] = 2;
				board[5][1] = 2;
				board[4][1] = 2;
				board[3][1] = 2;
				board[2][1] = 2;
			}
			if(board[6][1]==1&&board[5][1]==1&&board[4][1]==1&&board[3][1]==1&&board[2][1]==1&&board[1][1]==1&&board[0][1]==2){
				board[6][1] = 2;
				board[5][1] = 2;
				board[4][1] = 2;
				board[3][1] = 2;
				board[2][1] = 2;
				board[1][1] = 2;
			}
				if(board[7][2]==1&&board[7][3]==2){
				board[7][2] = 2;
			}
			if(board[7][2]==1&&board[7][3]==1&&board[7][4]==2){
				board[7][2] = 2;
				board[7][3] = 2;
			}
			if(board[7][2]==1&&board[7][3]==1&&board[7][4]==1&&board[7][5]==2){
				board[7][2] = 2;
				board[7][3] = 2;
				board[7][4] = 2;
			}
			if(board[7][2]==1&&board[7][3]==1&&board[7][4]==1&&board[7][5]==1&&board[7][6]==2){
				board[7][2] = 2;
				board[7][3] = 2;
				board[7][4] = 2;
				board[7][5] = 2;
			}
			if(board[7][2]==1&&board[7][3]==1&&board[7][4]==1&&board[7][5]==1&&board[7][6]==1&&board[7][7]==2){
				board[7][2] = 2;
				board[7][3] = 2;
				board[7][4] = 2;
				board[7][5] = 2;
				board[7][6] = 2;
			}
			if(board[6][2]==1&&board[5][3]==2){
				board[6][2] = 2;
			}
			if(board[6][2]==1&&board[5][3]==1&&board[4][4]==2){
				board[6][2] = 2;
				board[5][3] = 2;
			}
			if(board[6][2]==1&&board[5][3]==1&&board[4][4]==1&&board[3][5]==2){
				board[6][2] = 2;
				board[5][3] = 2;
				board[4][4] = 2;
			}
			if(board[6][2]==1&&board[5][3]==1&&board[4][4]==1&&board[3][5]==1&&board[2][6]==2){
				board[6][2] = 2;
				board[5][3] = 2;
				board[4][4] = 2;
				board[3][5] = 2;
			}
			if(board[6][2]==1&&board[5][3]==1&&board[4][4]==1&&board[3][5]==1&&board[2][6]==1&&board[1][7]==2){
				board[6][2] = 2;
				board[5][3] = 2;
				board[4][4] = 2;
				board[3][5] = 2;
				board[2][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==2){//0,2黒
			if(board[1][2]==2&&board[2][2]==1){
				board[1][2] = 1;
			}
			if(board[1][2]==2&&board[2][2]==2&&board[3][2]==1){
				board[1][2] = 1;
				board[2][2] = 1;
			}
			if(board[1][2]==2&&board[2][2]==2&&board[3][2]==2&&board[4][2]==1){
				board[1][2] = 1;
				board[2][2] = 1;
				board[3][2] = 1;
			}
			if(board[1][2]==2&&board[2][2]==2&&board[3][2]==2&&board[4][2]==2&&board[5][2]==1){
				board[1][2] = 1;
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
			}
			if(board[1][2]==2&&board[2][2]==2&&board[3][2]==2&&board[4][2]==2&&board[5][2]==2&&board[6][2]==1){
				board[1][2] = 1;
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
			}
			if(board[1][2]==2&&board[2][2]==2&&board[3][2]==2&&board[4][2]==2&&board[5][2]==2&&board[6][2]==2&&board[7][2]==1){
				board[1][2] = 1;
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
				board[6][2] = 1;
				}
			if(board[0][3]==2&&board[0][4]==1){
				board[0][3] = 1;
			}
			if(board[0][1]==2&&board[0][0]==1){
				board[0][1] = 1;
			}
			if(board[0][3]==2&&board[0][4]==2&&board[0][5]==1){
				board[0][3] = 1;
				board[0][4] = 1;
			}
			if(board[0][3]==2&&board[0][4]==2&&board[0][5]==2&&board[0][6]==1){
				board[0][3] = 1;
				board[0][4] = 1;
				board[0][5] = 1;
			}
			if(board[0][3]==2&&board[0][4]==2&&board[0][5]==2&&board[0][6]==2&&board[0][7]==1){
				board[0][3] = 1;
				board[0][4] = 1;
				board[0][5] = 1;
				board[0][6] = 1;
			}
			if(board[1][3]==2&&board[2][4]==1){
				board[1][3] = 1;
			}
			if(board[1][1]==2&&board[2][0]==1){
				board[1][1] = 1;
			}
			if(board[1][3]==2&&board[2][4]==2&&board[3][5]==1){
				board[1][3] = 1;
				board[2][4] = 1;
			}
			if(board[1][3]==2&&board[2][4]==2&&board[3][5]==2&&board[4][6]==1){
				board[1][3] = 1;
				board[2][4] = 1;
				board[3][5] = 1;
			}
			if(board[1][3]==2&&board[2][4]==2&&board[3][5]==2&&board[4][6]==2&&board[5][7]==1){
				board[1][3] = 1;
				board[2][4] = 1;
				board[3][5] = 1;
				board[4][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==2){//0,2白
			if((board[1][2]==1)&&(board[2][2]==2)){
				board[1][2] = 2;
			}
			if(board[1][2]==1&&board[2][2]==1&&board[3][2]==2){
				board[1][2] = 2;
				board[2][2] = 2;
			}
			if(board[1][2]==1&&board[2][2]==1&&board[3][2]==1&&board[4][2]==2){
				board[1][2] = 2;
				board[2][2] = 2;
				board[3][2] = 2;
			}
			if(board[1][2]==1&&board[2][2]==1&&board[3][2]==1&&board[4][2]==1&&board[5][2]==2){
				board[1][2] = 2;
				board[2][2] = 2;
				board[3][2] = 2;
				board[4][2] = 2;
			}
			if(board[1][2]==1&&board[2][2]==1&&board[3][2]==1&&board[4][2]==1&&board[5][2]==1&&board[6][2]==2){
				board[1][2] = 2;
				board[2][2] = 2;
				board[3][2] = 2;
				board[4][2] = 2;
				board[5][2] = 2;
			}
			if(board[1][2]==1&&board[2][2]==1&&board[3][2]==1&&board[4][2]==1&&board[5][2]==1&&board[6][2]==1&&board[7][2]==2){
				board[1][2] = 2;
				board[2][2] = 2;
				board[3][2] = 2;
				board[4][2] = 2;
				board[5][2] = 2;
				board[6][2] = 2;
			}
			if(board[0][3]==1&&board[0][4]==2){
				board[0][3] = 2;
			}
			if(board[0][1]==1&&board[0][0]==2){
				board[0][1] = 2;
			}
			if(board[0][3]==1&&board[0][4]==1&&board[0][5]==2){
				board[0][3] = 2;
				board[0][4] = 2;
			}
			if(board[0][3]==1&&board[0][4]==1&&board[0][5]==1&&board[0][6]==2){
				board[0][3] = 2;
				board[0][4] = 2;
				board[0][5] = 2;
			}
			if(board[0][3]==1&&board[0][4]==1&&board[0][5]==1&&board[0][6]==1&&board[0][7]==2){
				board[0][3] = 2;
				board[0][4] = 2;
				board[0][5] = 2;
				board[0][6] = 2;
			}
			if(board[1][3]==1&&board[2][4]==2){
				board[1][1] = 2;
			}
			if(board[1][1]==1&&board[2][0]==2){
				board[1][3] = 2;
			}
			if(board[1][3]==1&&board[2][4]==1&&board[3][5]==2){
				board[1][3] = 2;
				board[2][4] = 2;
			}
			if(board[1][3]==1&&board[2][4]==1&&board[3][5]==1&&board[4][6]==2){
				board[1][3] = 2;
				board[2][4] = 2;
				board[3][5] = 2;
			}
			if(board[1][3]==1&&board[2][4]==1&&board[3][5]==2&&board[4][6]==1&&board[5][7]==2){
				board[1][3] = 2;
				board[2][4] = 2;
				board[3][5] = 2;
				board[4][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==2){//1,2黒
			if(board[2][2]==2&&board[3][2]==1){
				board[2][2] = 1;
			}
			if(board[2][2]==2&&board[3][2]==2&&board[4][2]==1){
				board[2][2] = 1;
				board[3][2] = 1;
			}
			if(board[2][2]==2&&board[3][2]==2&&board[4][2]==2&&board[5][2]==1){
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
			}
			if(board[2][2]==2&&board[3][2]==2&&board[4][2]==2&&board[5][2]==2&&board[6][2]==1){
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
			}
			if(board[2][2]==2&&board[3][2]==2&&board[4][2]==2&&board[5][2]==2&&board[6][2]==2&&board[7][2]==1){
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
				board[6][2] = 1;
			}
			if(board[1][3]==2&&board[1][4]==1){
				board[1][3] = 1;
			}
			if(board[1][1]==2&&board[1][0]==1){
				board[1][1] = 1;
			}
			if(board[1][3]==2&&board[1][4]==2&&board[1][5]==1){
				board[1][3] = 1;
				board[1][4] = 1;
			}
			if(board[1][3]==2&&board[1][4]==2&&board[1][5]==2&&board[1][6]==1){
				board[1][3] = 1;
				board[1][4] = 1;
				board[1][5] = 1;
			}
			if(board[1][3]==2&&board[1][4]==2&&board[1][5]==2&&board[1][6]==2&&board[1][7]==1){
				board[1][3] = 1;
				board[1][4] = 1;
				board[1][5] = 1;
				board[1][6] = 1;
			}
			if(board[2][3]==2&&board[3][4]==1){
				board[2][3] = 1;
			}
			if(board[2][1]==2&&board[3][0]==1){
				board[2][1] = 1;
			}
			if(board[2][3]==2&&board[3][4]==2&&board[4][5]==1){
				board[2][3] = 1;
				board[3][4] = 1;
			}
			if(board[2][3]==2&&board[3][4]==2&&board[4][5]==2&&board[5][6]==1){
				board[2][3] = 1;
				board[3][4] = 1;
				board[4][5] = 1;
			}
			if(board[2][3]==2&&board[3][4]==2&&board[4][5]==2&&board[5][6]==2&&board[6][7]==1){
				board[2][3] = 1;
				board[3][4] = 1;
				board[4][5] = 1;
				board[5][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==2){//1,2白
			if(board[2][2]==1&&board[3][2]==2){
				board[2][2] = 2;
			}
			if(board[2][2]==1&&board[3][2]==1&&board[4][2]==2){
				board[2][2] = 2;
				board[3][2] = 2;
			}
			if(board[2][2]==1&&board[3][2]==1&&board[4][2]==1&&board[5][2]==2){
				board[2][2] = 2;
				board[3][2] = 2;
				board[4][2] = 2;
			}
			if(board[2][2]==1&&board[3][2]==1&&board[4][2]==1&&board[5][2]==1&&board[6][2]==2){
				board[2][2] = 2;
				board[3][2] = 2;
				board[4][2] = 2;
				board[5][2] = 2;
			}
			if(board[2][2]==1&&board[3][2]==1&&board[4][2]==1&&board[5][2]==1&&board[6][2]==1&&board[7][2]==2){
				board[2][2] = 2;
				board[3][2] = 2;
				board[4][2] = 2;
				board[5][2] = 2;
				board[6][2] = 2;
			}
			if(board[1][3]==1&&board[1][4]==2){
				board[1][3] = 2;
			}
			if(board[1][1]==1&&board[1][0]==2){
				board[1][1] = 2;
			}
			if(board[1][3]==1&&board[1][4]==1&&board[1][5]==2){
				board[1][3] = 2;
				board[1][4] = 2;
			}
			if(board[1][3]==1&&board[1][4]==1&&board[1][5]==1&&board[1][6]==2){
				board[1][3] = 2;
				board[1][4] = 2;
				board[1][5] = 2;
			}
			if(board[1][3]==1&&board[1][4]==1&&board[1][5]==1&&board[1][6]==1&&board[1][7]==2){
				board[1][3] = 2;
				board[1][4] = 2;
				board[1][5] = 2;
				board[1][6] = 2;
			}
			if(board[2][3]==1&&board[3][4]==2){
				board[2][3] = 2;
			}
			if(board[2][1]==1&&board[3][0]==2){
				board[2][1] = 2;
			}
			if(board[2][3]==1&&board[3][4]==1&&board[4][5]==2){
				board[2][3] = 2;
				board[3][4] = 2;
			}
			if(board[2][3]==1&&board[3][4]==1&&board[4][5]==1&&board[5][6]==2){
				board[2][3] = 2;
				board[3][4] = 2;
				board[4][5] = 2;
			}
			if(board[2][3]==1&&board[3][4]==1&&board[4][5]==1&&board[5][6]==1&&board[6][7]==2){
				board[2][3] = 2;
				board[3][4] = 2;
				board[4][5] = 2;
				board[5][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==2){//2,2黒
			if(board[3][2]==2&&board[4][2]==1){
				board[3][2] = 1;
			}
			if(board[1][2]==2&&board[0][2]==1){
				board[1][2] = 1;
			}
			if(board[3][2]==2&&board[4][2]==2&&board[5][2]==1){
				board[3][2] = 1;
				board[4][2] = 1;
			}
			if(board[3][2]==2&&board[4][2]==2&&board[5][2]==2&&board[6][2]==1){
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
			}
			if(board[3][2]==2&&board[4][2]==2&&board[5][2]==2&&board[6][2]==2&&board[7][2]==1){
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
				board[6][2] = 1;
			}
			if(board[2][3]==2&&board[2][4]==1){
				board[2][3] = 1;
			}
			if(board[2][1]==2&&board[2][0]==1){
				board[2][1] = 1;
			}
			if(board[2][3]==2&&board[2][4]==2&&board[2][5]==1){
				board[2][3] = 1;
				board[2][4] = 1;
			}
			if(board[2][3]==2&&board[2][4]==2&&board[2][5]==2&&board[2][6]==1){
				board[2][3] = 1;
				board[2][4] = 1;
				board[2][5] = 1;
			}
			if(board[2][3]==2&&board[2][4]==2&&board[2][5]==2&&board[2][6]==2&&board[2][7]==1){
				board[2][3] = 1;
				board[2][4] = 1;
				board[2][5] = 1;
				board[2][6] = 1;
			}
			if(board[3][3]==2&&board[4][4]==1){
				board[3][3] = 1;
			}
			if(board[1][3]==2&&board[0][4]==1){
				board[1][3] = 1;
			}
			if(board[1][1]==2&&board[0][0]==1){
				board[1][1] = 1;
			}
			if(board[3][1]==2&&board[4][0]==1){
				board[3][1] = 1;
			}
			if(board[3][3]==2&&board[4][4]==2&&board[5][5]==1){
				board[3][3] = 1;
				board[4][4] = 1;
			}
			if(board[3][3]==2&&board[4][4]==2&&board[5][5]==2&&board[6][6]==1){
				board[3][3] = 1;
				board[4][4] = 1;
				board[5][5] = 1;
			}
			if(board[3][3]==2&&board[4][4]==2&&board[5][5]==2&&board[6][6]==2&&board[7][7]==1){
				board[3][3] = 1;
				board[4][4] = 1;
				board[5][5] = 1;
				board[6][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==2){//2,2白
			if(board[3][2]==1&&board[4][2]==2){
				board[3][2] = 2;
			}
			if(board[1][2]==1&&board[0][2]==2){
				board[1][2] = 2;
			}
			if(board[3][2]==1&&board[4][2]==1&&board[5][2]==2){
				board[3][2] = 2;
				board[4][2] = 2;
			}
			if(board[3][2]==1&&board[4][2]==1&&board[5][2]==1&&board[6][2]==2){
				board[3][2] = 2;
				board[4][2] = 2;
				board[5][2] = 2;
			}
			if(board[3][2]==1&&board[4][2]==1&&board[5][2]==1&&board[6][2]==1&&board[7][2]==2){
				board[3][2] = 2;
				board[4][2] = 2;
				board[5][2] = 2;
				board[6][2] = 2;
			}
			if(board[2][3]==1&&board[2][4]==2){
				board[2][3] = 2;
			}
			if(board[2][1]==1&&board[2][0]==2){
				board[2][1] = 2;
			}
			if(board[2][3]==1&&board[2][4]==1&&board[2][5]==2){
				board[2][3] = 2;
				board[2][4] = 2;
			}
			if(board[2][3]==1&&board[2][4]==1&&board[2][5]==1&&board[2][6]==2){
				board[2][3] = 2;
				board[2][4] = 2;
				board[2][5] = 2;
			}
			if(board[2][3]==1&&board[2][4]==1&&board[2][5]==1&&board[2][6]==1&&board[2][7]==2){
				board[2][3] = 2;
				board[2][4] = 2;
				board[2][5] = 2;
				board[2][6] = 2;
			}
			if(board[3][3]==1&&board[4][4]==2){
				board[3][3] = 2;
			}
			if(board[1][3]==1&&board[0][4]==2){
				board[1][1] = 2;
			}
			if(board[1][1]==1&&board[0][0]==2){
				board[1][1] = 2;
			}
			if(board[3][1]==1&&board[4][0]==2){
				board[3][1] = 2;
			}
			if(board[3][3]==1&&board[4][4]==1&&board[5][5]==2){
				board[3][3] = 2;
				board[4][4] = 2;
			}
			if(board[3][3]==1&&board[4][4]==1&&board[5][5]==1&&board[6][6]==2){
				board[3][3] = 2;
				board[4][4] = 2;
				board[5][5] = 2;
			}
			if(board[3][3]==1&&board[4][4]==1&&board[5][5]==1&&board[6][6]==1&&board[7][7]==2){
				board[3][3] = 2;
				board[4][4] = 2;
				board[5][5] = 2;
				board[6][6] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==3&&retu==2){//3,2黒
			if(board[4][2]==2&&board[5][2]==1){
				board[4][2] = 1;
			}
			if(board[2][2]==2&&board[1][2]==1){
				board[2][2] = 1;
			}
			if(board[4][2]==2&&board[5][2]==2&&board[6][2]==1){
				board[4][2] = 1;
				board[5][2] = 1;
			}
			if(board[2][2]==2&&board[1][2]==2&&board[0][2]==1){
				board[2][2] = 1;
				board[1][2] = 1;
			}
			if(board[4][2]==2&&board[5][2]==2&&board[6][2]==2&&board[7][2]==1){
				board[4][2] = 1;
				board[5][2] = 1;
				board[6][2] = 1;
			}
			if(board[3][3]==2&&board[3][4]==1){
				board[3][3] = 1;
			}
			if(board[3][1]==2&&board[3][0]==1){
				board[3][1] = 1;
			}
			if(board[3][3]==2&&board[3][4]==2&&board[3][5]==1){
				board[3][3] = 1;
				board[3][4] = 1;
			}
			if(board[3][3]==2&&board[3][4]==2&&board[3][5]==2&&board[3][6]==1){
				board[3][3] = 1;
				board[3][4] = 1;
				board[3][5] = 1;
			}
			if(board[3][3]==2&&board[3][4]==2&&board[3][5]==2&&board[3][6]==2&&board[3][7]==1){
				board[3][3] = 1;
				board[3][4] = 1;
				board[3][5] = 1;
				board[3][6] = 1;
			}
			if(board[4][3]==2&&board[5][4]==1){
				board[4][3] = 1;
			}
			if(board[2][3]==2&&board[1][4]==1){
				board[2][3] = 1;
			}
			if(board[4][1]==2&&board[5][0]==1){
				board[4][1] = 1;
			}
			if(board[2][1]==2&&board[1][0]==1){
				board[2][1] = 1;
			}
			if(board[4][3]==2&&board[5][4]==2&&board[6][5]==1){
				board[4][3] = 1;
				board[5][4] = 1;
			}
			if(board[2][3]==2&&board[1][4]==2&&board[0][5]==1){
				board[2][3] = 1;
				board[1][4] = 1;
			}
			if(board[4][3]==2&&board[5][4]==2&&board[6][5]==2&&board[7][6]==1){
				board[4][3] = 1;
				board[5][4] = 1;
				board[6][5] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==3&&retu==2){//3,2白
			if(board[4][2]==1&&board[5][2]==2){
				board[4][2] = 2;
			}
			if(board[2][2]==1&&board[1][2]==2){
				board[2][2] = 2;
			}
			if(board[4][2]==1&&board[5][2]==1&&board[6][2]==2){
				board[4][2] = 2;
				board[5][2] = 2;
			}
			if(board[2][2]==1&&board[1][2]==1&&board[0][2]==2){
				board[2][2] = 2;
				board[1][2] = 2;
			}
			if(board[4][2]==1&&board[5][2]==1&&board[6][2]==1&&board[7][2]==2){
				board[4][2] = 2;
				board[5][2] = 2;
				board[6][2] = 2;
			}
			if(board[3][3]==1&&board[3][4]==2){
				board[3][3] = 2;
			}
			if(board[3][1]==1&&board[3][0]==2){
				board[3][1] = 2;
			}
			if(board[3][3]==1&&board[3][4]==1&&board[3][5]==2){
				board[3][3] = 2;
				board[3][4] = 2;
			}
			if(board[3][3]==1&&board[3][4]==1&&board[3][5]==1&&board[3][6]==2){
				board[3][3] = 2;
				board[3][4] = 2;
				board[3][5] = 2;
			}
			if(board[3][3]==1&&board[3][4]==1&&board[3][5]==1&&board[3][6]==1&&board[3][7]==2){
				board[3][3] = 2;
				board[3][4] = 2;
				board[3][5] = 2;
				board[3][6] = 2;
			}
			if(board[4][3]==1&&board[5][4]==2){
				board[4][3] = 2;
			}
			if(board[2][1]==1&&board[1][0]==2){
				board[2][1] = 2;
			}
			if(board[4][1]==1&&board[5][0]==2){
				board[4][1] = 2;
			}
			if(board[2][1]==1&&board[1][0]==2){
				board[2][1] = 2;
			}
			if(board[4][3]==1&&board[5][4]==1&&board[6][5]==2){
				board[4][3] = 2;
				board[5][4] = 2;
			}
			if(board[2][3]==1&&board[1][4]==1&&board[0][5]==2){
				board[2][3] = 2;
				board[1][4] = 2;
			}
			if(board[4][3]==1&&board[5][4]==1&&board[6][5]==1&&board[7][6]==2){
				board[4][3] = 2;
				board[5][4] = 2;
				board[6][5] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==4&&retu==2){//4,2黒
			if(board[5][2]==2&&board[6][2]==1){
				board[5][2] = 1;
			}
			if(board[3][2]==2&&board[2][2]==1){
				board[3][2] = 1;
			}
			if(board[5][2]==2&&board[6][2]==2&&board[7][2]==1){
				board[5][2] = 1;
				board[6][2] = 1;
			}
			if(board[3][2]==2&&board[2][2]==2&&board[1][2]==1){
				board[3][2] = 1;
				board[2][2] = 1;
			}
			if(board[3][2]==2&&board[2][2]==2&&board[1][2]==1&&board[0][2]==1){
				board[3][2] = 1;
				board[2][2] = 1;
				board[1][2] = 1;
			}
			if(board[4][3]==2&&board[4][4]==1){
				board[4][3] = 1;
			}
			if(board[4][1]==2&&board[4][0]==1){
				board[4][1] = 1;
			}
			if(board[4][3]==2&&board[4][4]==2&&board[4][5]==1){
				board[4][3] = 1;
				board[4][4] = 1;
			}
			if(board[4][3]==2&&board[4][4]==2&&board[4][5]==2&&board[4][6]==1){
				board[4][3] = 1;
				board[4][4] = 1;
				board[4][5] = 1;
			}
			if(board[4][3]==2&&board[4][4]==2&&board[4][5]==2&&board[4][6]==2&&board[4][7]==1){
				board[4][3] = 1;
				board[4][4] = 1;
				board[4][5] = 1;
				board[4][6] = 1;
			}
			if(board[5][3]==2&&board[6][4]==1){
				board[5][3] = 1;
			}
			if(board[3][3]==2&&board[2][4]==1){
				board[3][3] = 1;
			}
			if(board[5][1]==2&&board[6][0]==1){
				board[5][1] = 1;
			}
			if(board[3][1]==2&&board[2][0]==1){
				board[3][1] = 1;
			}
			if(board[5][3]==2&&board[6][4]==2&&board[7][5]==1){
				board[5][3] = 1;
				board[6][4] = 1;
			}
			if(board[3][3]==2&&board[2][4]==2&&board[1][5]==1){
				board[3][3] = 1;
				board[2][4] = 1;
			}
			if(board[3][3]==2&&board[2][4]==2&&board[1][5]==2&&board[0][6]==1){
				board[3][3] = 1;
				board[2][4] = 1;
				board[1][5] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==4&&retu==2){//4,2白
			if(board[5][2]==1&&board[6][2]==2){
				board[5][2] = 2;
			}
			if(board[3][2]==1&&board[2][2]==2){
				board[3][2] = 2;
			}
			if(board[5][2]==1&&board[6][2]==1&&board[7][2]==2){
				board[5][2] = 2;
				board[6][2] = 2;
			}
			if(board[3][2]==1&&board[2][2]==1&&board[1][2]==2){
				board[3][2] = 2;
				board[2][2] = 2;
			}
			if(board[3][2]==1&&board[2][2]==1&&board[1][2]==1&&board[0][2]==2){
				board[3][2] = 2;
				board[2][2] = 2;
				board[1][2] = 2;
			}
			if(board[4][3]==1&&board[4][4]==2){
				board[4][3] = 2;
			}
			if(board[4][1]==1&&board[4][0]==2){
				board[4][1] = 2;
			}
			if(board[4][3]==1&&board[4][4]==1&&board[4][5]==2){
				board[4][3] = 2;
				board[4][4] = 2;
			}
			if(board[4][3]==1&&board[4][4]==1&&board[4][5]==1&&board[4][6]==2){
				board[4][3] = 2;
				board[4][4] = 2;
				board[4][5] = 2;
			}
			if(board[4][3]==1&&board[4][4]==1&&board[4][5]==1&&board[4][6]==1&&board[4][7]==2){
				board[4][3] = 2;
				board[4][4] = 2;
				board[4][5] = 2;
				board[4][6] = 2;
			}
			if(board[5][3]==1&&board[6][4]==2){
				board[5][3] = 2;
			}
			if(board[3][3]==1&&board[2][4]==2){
				board[3][3] = 2;
			}
			if(board[5][1]==1&&board[6][0]==2){
				board[5][1] = 2;
			}
			if(board[3][1]==1&&board[2][0]==2){
				board[3][1] = 2;
			}
			if(board[5][3]==1&&board[6][4]==1&&board[7][5]==2){
				board[5][3] = 2;
				board[6][4] = 2;
			}
			if(board[3][3]==1&&board[2][4]==1&&board[1][5]==2){
				board[3][3] = 2;
				board[2][4] = 2;
			}
			if(board[3][3]==1&&board[2][4]==1&&board[1][5]==1&&board[0][6]==2){
				board[3][3] = 2;
				board[2][4] = 2;
				board[1][5] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==2){//5,2黒
			if(board[6][2]==2&&board[7][2]==1){
				board[6][2] = 1;
			}
			if(board[4][2]==2&&board[3][2]==1){
				board[4][2] = 1;
			}
			if(board[4][2]==2&&board[3][2]==2&&board[2][2]==1){
				board[4][2] = 1;
				board[3][2] = 1;
			}
			if(board[4][2]==2&&board[3][2]==2&&board[2][2]==2&&board[1][2]==1){
				board[4][2] = 1;
				board[3][2] = 1;
				board[2][2] = 1;
			}
			if(board[4][2]==2&&board[3][2]==2&&board[2][2]==2&&board[1][2]==2&&board[0][2]==1){
				board[4][2] = 1;
				board[3][2] = 1;
				board[2][2] = 1;
				board[1][2] = 1;
			}
			if(board[5][3]==2&&board[5][4]==1){
				board[5][3] = 1;
			}
			if(board[5][1]==2&&board[5][0]==1){
				board[5][1] = 1;
			}
			if(board[5][3]==2&&board[5][4]==2&&board[5][5]==1){
				board[5][3] = 1;
				board[5][4] = 1;
			}
			if(board[5][3]==2&&board[5][4]==2&&board[5][5]==2&&board[5][6]==1){
				board[5][3] = 1;
				board[5][4] = 1;
				board[5][5] = 1;
			}
			if(board[5][3]==2&&board[5][4]==2&&board[5][5]==2&&board[5][6]==2&&board[5][7]==1){
				board[5][3] = 1;
				board[5][4] = 1;
				board[5][5] = 1;
				board[5][6] = 1;
			}
			if(board[6][3]==2&&board[7][4]==1){
				board[6][3] = 1;
			}
			if(board[4][3]==2&&board[3][4]==1){
				board[4][3] = 1;
			}
			if(board[6][1]==2&&board[7][0]==1){
				board[6][1] = 1;
			}
			if(board[4][1]==2&&board[3][0]==1){
				board[4][1] = 1;
			}
			if(board[4][3]==2&&board[3][4]==2&&board[2][5]==1){
				board[4][3] = 1;
				board[3][4] = 1;
			}
			if(board[4][3]==2&&board[3][4]==2&&board[2][5]==2&&board[1][6]==1){
				board[4][3] = 1;
				board[3][4] = 1;
				board[2][5] = 1;
			}
			if(board[4][3]==2&&board[3][4]==2&&board[2][5]==2&&board[1][6]==2&&board[0][7]==1){
				board[4][3] = 1;
				board[3][4] = 1;
				board[2][5] = 1;
				board[1][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==2){//5,2白
			if(board[6][2]==1&&board[7][2]==2){
				board[6][2] = 2;
			}
			if(board[4][2]==1&&board[3][2]==2){
				board[4][2] = 2;
			}
			if(board[4][2]==1&&board[3][2]==1&&board[2][2]==2){
				board[4][2] = 2;
				board[3][2] = 2;
			}
			if(board[4][2]==1&&board[3][2]==1&&board[2][2]==1&&board[1][2]==2){
				board[4][2] = 2;
				board[3][2] = 2;
				board[2][2] = 2;
			}
			if(board[4][2]==1&&board[3][2]==1&&board[2][2]==1&&board[1][2]==1&&board[0][2]==2){
				board[4][2] = 2;
				board[3][2] = 2;
				board[2][2] = 2;
				board[1][2] = 2;
			}
			if(board[5][3]==1&&board[5][4]==1){
				board[5][3] = 2;
			}
			if(board[5][1]==1&&board[5][0]==1){
				board[5][1] = 2;
			}
			if(board[5][3]==1&&board[5][4]==1&&board[5][5]==2){
				board[5][3] = 2;
				board[5][4] = 2;
			}
			if(board[5][3]==1&&board[5][4]==1&&board[5][5]==1&&board[5][6]==2){
				board[5][3] = 2;
				board[5][4] = 2;
				board[5][5] = 2;
			}
			if(board[5][3]==1&&board[5][4]==1&&board[5][5]==1&&board[5][6]==1&&board[5][7]==2){
				board[5][3] = 2;
				board[5][4] = 2;
				board[5][5] = 2;
				board[5][6] = 2;
			}
			if(board[6][3]==1&&board[7][4]==2){
				board[6][3] = 2;
			}
			if(board[4][3]==1&&board[3][4]==2){
				board[4][3] = 2;
			}
			if(board[6][1]==1&&board[7][0]==2){
				board[6][1] = 2;
			}
			if(board[4][1]==1&&board[3][0]==2){
				board[4][1] = 2;
			}
			if(board[4][3]==1&&board[3][4]==1&&board[2][5]==2){
				board[4][3] = 2;
				board[3][4] = 2;
			}
			if(board[4][3]==1&&board[3][4]==1&&board[2][5]==1&&board[1][6]==2){
				board[4][3] = 2;
				board[3][4] = 2;
				board[2][5] = 2;
			}
			if(board[4][3]==1&&board[3][4]==1&&board[2][5]==1&&board[1][6]==1&&board[0][7]==2){
				board[4][3] = 2;
				board[3][4] = 2;
				board[2][5] = 2;
				board[1][6] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==6&&retu==2){//6,2黒
			if(board[5][2]==2&&board[4][2]==1){
				board[5][2] = 1;
			}
			if(board[5][2]==2&&board[4][2]==2&&board[3][2]==1){
				board[5][2] = 1;
				board[4][2] = 1;
			}
			if(board[5][2]==2&&board[4][2]==2&&board[3][2]==2&&board[2][2]==1){
				board[5][2] = 1;
				board[4][2] = 1;
				board[3][2] = 1;
			}
			if(board[5][2]==2&&board[4][2]==2&&board[3][2]==2&&board[2][2]==2&&board[1][2]==1){
				board[5][2] = 1;
				board[4][2] = 1;
				board[3][2] = 1;
				board[2][2] = 1;
			}
			if(board[5][2]==2&&board[4][2]==2&&board[3][2]==2&&board[2][2]==2&&board[1][2]==2&&board[0][2]==1){
				board[5][2] = 1;
				board[4][2] = 1;
				board[3][2] = 1;
				board[2][2] = 1;
				board[1][2] = 1;
			}
			if(board[6][3]==2&&board[6][4]==1){
				board[6][3] = 1;
			}
			if(board[6][1]==2&&board[6][0]==1){
				board[6][1] = 1;
			}
			if(board[6][3]==2&&board[6][4]==2&&board[6][5]==1){
				board[6][3] = 1;
				board[6][4] = 1;
			}
			if(board[6][3]==2&&board[6][4]==2&&board[6][5]==2&&board[6][6]==1){
				board[6][3] = 1;
				board[6][4] = 1;
				board[6][5] = 1;
			}
			if(board[6][3]==2&&board[6][4]==2&&board[6][5]==2&&board[6][6]==2&&board[6][7]==1){
				board[6][3] = 1;
				board[6][4] = 1;
				board[6][5] = 1;
				board[6][6] = 1;
			}
			if(board[5][3]==2&&board[4][4]==1){
				board[5][3] = 1;
			}
			if(board[5][1]==2&&board[4][0]==1){
				board[5][1] = 1;
			}
			if(board[5][3]==2&&board[4][4]==2&&board[3][5]==1){
				board[5][3] = 1;
				board[4][4] = 1;
			}
			if(board[5][3]==2&&board[4][4]==2&&board[3][5]==2&&board[2][6]==1){
				board[5][3] = 1;
				board[4][4] = 1;
				board[3][5] = 1;
			}
			if(board[5][3]==2&&board[4][4]==2&&board[3][5]==2&&board[2][6]==2&&board[1][7]==1){
				board[5][3] = 1;
				board[4][4] = 1;
				board[3][5] = 1;
				board[2][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==2){//6,2白
			if(board[5][2]==1&&board[4][2]==2){
				board[5][2] = 2;
			}
			if(board[5][2]==1&&board[4][2]==1&&board[3][2]==2){
				board[5][2] = 2;
				board[4][2] = 2;
			}
			if(board[5][2]==1&&board[4][2]==1&&board[3][2]==1&&board[2][2]==2){
				board[5][2] = 2;
				board[4][2] = 2;
				board[3][2] = 2;
			}
			if(board[5][2]==1&&board[4][2]==1&&board[3][2]==1&&board[2][2]==1&&board[1][2]==2){
				board[5][2] = 2;
				board[4][2] = 2;
				board[3][2] = 2;
				board[2][2] = 2;
			}
			if(board[5][2]==1&&board[4][2]==1&&board[3][2]==1&&board[2][2]==1&&board[1][2]==1&&board[0][2]==2){
				board[5][2] = 2;
				board[4][2] = 2;
				board[3][2] = 2;
				board[2][2] = 2;
				board[1][2] = 2;
			}
			if(board[6][3]==1&&board[6][4]==2){
				board[6][3] = 2;
			}
			if(board[6][1]==1&&board[6][0]==2){
				board[6][1] = 2;
			}
			if(board[6][3]==1&&board[6][4]==1&&board[6][5]==2){
				board[6][3] = 2;
				board[6][4] = 2;
			}
			if(board[6][3]==1&&board[6][4]==1&&board[6][5]==1&&board[6][6]==2){
				board[6][3] = 2;
				board[6][4] = 2;
				board[6][5] = 2;
			}
			if(board[6][3]==1&&board[6][4]==1&&board[6][5]==1&&board[6][6]==1&&board[6][7]==2){
				board[6][3] = 2;
				board[6][4] = 2;
				board[6][5] = 2;
				board[6][6] = 2;
			}
			if(board[5][3]==1&&board[4][4]==2){
				board[5][3] = 2;
			}
			if(board[5][1]==1&&board[4][0]==2){
				board[5][1] = 2;
			}
			if(board[5][3]==1&&board[4][4]==1&&board[3][5]==2){
				board[5][3] = 2;
				board[4][4] = 2;
			}
			if(board[5][3]==1&&board[4][4]==1&&board[3][5]==1&&board[2][6]==2){
				board[5][3] = 2;
				board[4][4] = 2;
				board[3][5] = 2;
			}
			if(board[5][3]==1&&board[4][4]==1&&board[3][5]==1&&board[2][6]==1&&board[1][7]==2){
				board[5][3] = 2;
				board[4][4] = 2;
				board[3][5] = 2;
				board[2][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==2){//7,2黒
			if(board[6][2]==2&&board[5][2]==1){
				board[6][2] = 1;
			}
			if(board[6][2]==2&&board[5][2]==2&&board[4][2]==1){
				board[6][2] = 1;
				board[5][2] = 1;
			}
			if(board[6][2]==2&&board[5][2]==2&&board[4][2]==2&&board[3][2]==1){
				board[6][2] = 1;
				board[5][2] = 1;
				board[4][2] = 1;
			}
			if(board[6][2]==2&&board[5][2]==2&&board[4][2]==2&&board[3][2]==2&&board[2][2]==1){
				board[6][2] = 1;
				board[5][2] = 1;
				board[4][2] = 1;
				board[3][2] = 1;
			}
			if(board[6][2]==2&&board[5][2]==2&&board[4][2]==2&&board[3][2]==2&&board[2][2]==2&&board[1][2]==1){
				board[1][2] = 1;
				board[2][2] = 1;
				board[3][2] = 1;
				board[4][2] = 1;
				board[5][2] = 1;
			}
			if(board[6][2]==2&&board[5][2]==2&&board[4][2]==2&&board[3][2]==2&&board[2][2]==2&&board[1][2]==2&&board[0][2]==1){
				board[6][2] = 1;
				board[5][2] = 1;
				board[4][2] = 1;
				board[3][2] = 1;
				board[2][2] = 1;
				board[1][2] = 1;
			}
			if(board[7][3]==2&&board[7][4]==1){
				board[7][3] = 1;
			}
			if(board[7][1]==2&&board[7][0]==1){
				board[7][1] = 1;
			}
			if(board[7][3]==2&&board[7][4]==2&&board[7][5]==1){
				board[7][3] = 1;
				board[7][4] = 1;
			}
			if(board[7][3]==2&&board[7][4]==2&&board[7][5]==2&&board[7][6]==1){
				board[7][3] = 1;
				board[7][4] = 1;
				board[7][5] = 1;
			}
			if(board[7][3]==2&&board[7][4]==2&&board[7][5]==2&&board[7][6]==2&&board[7][7]==1){
				board[7][2] = 1;
				board[7][3] = 1;
				board[7][4] = 1;
				board[7][5] = 1;
			}
			if(board[6][3]==2&&board[5][4]==1){
				board[6][3] = 1;
			}
			if(board[6][1]==2&&board[5][0]==1){
				board[6][1] = 1;
			}
			if(board[6][3]==2&&board[5][4]==2&&board[4][5]==1){
				board[6][3] = 1;
				board[5][4] = 1;
			}
			if(board[6][3]==2&&board[5][4]==2&&board[4][5]==2&&board[3][6]==1){
				board[6][3] = 1;
				board[5][4] = 1;
				board[4][5] = 1;
			}
			if(board[6][3]==2&&board[5][4]==2&&board[4][5]==2&&board[3][6]==2&&board[5][7]==1){
				board[6][3] = 1;
				board[5][4] = 1;
				board[4][5] = 1;
				board[3][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==2){//7,2白
			if(board[6][2]==1&&board[5][2]==2){
				board[6][2] = 2;
			}
			if(board[6][2]==1&&board[5][2]==1&&board[4][2]==2){
				board[6][2] = 2;
				board[5][2] = 2;
			}
			if(board[6][2]==1&&board[5][2]==1&&board[4][2]==1&&board[3][2]==2){
				board[6][2] = 2;
				board[5][2] = 2;
				board[4][2] = 2;
			}
			if(board[6][2]==1&&board[5][2]==1&&board[4][2]==1&&board[3][2]==1&&board[2][2]==2){
				board[6][2] = 2;
				board[5][2] = 2;
				board[4][2] = 2;
				board[3][2] = 2;
			}
			if(board[6][2]==1&&board[5][2]==1&&board[4][2]==1&&board[3][2]==1&&board[2][2]==1&&board[1][2]==2){
				board[6][2] = 2;
				board[5][2] = 2;
				board[4][2] = 2;
				board[3][2] = 2;
				board[2][2] = 2;
			}
			if(board[6][2]==1&&board[5][2]==1&&board[4][2]==1&&board[3][2]==1&&board[2][2]==1&&board[1][2]==1&&board[0][2]==2){
				board[6][2] = 2;
				board[5][2] = 2;
				board[4][2] = 2;
				board[3][2] = 2;
				board[2][2] = 2;
				board[1][2] = 2;
			}
			if(board[7][3]==1&&board[7][4]==2){
				board[7][3] = 2;
			}
			if(board[7][1]==1&&board[7][0]==2){
				board[7][1] = 2;
			}
			if(board[7][3]==1&&board[7][4]==1&&board[7][5]==2){
				board[7][3] = 2;
				board[7][4] = 2;
			}
			if(board[7][3]==1&&board[7][4]==1&&board[7][5]==1&&board[7][6]==2){
				board[7][3] = 2;
				board[7][4] = 2;
				board[7][5] = 2;
			}
			if(board[7][3]==1&&board[7][4]==1&&board[7][5]==1&&board[7][6]==1&&board[7][7]==2){
				board[7][3] = 2;
				board[7][4] = 2;
				board[7][5] = 2;
				board[7][6] = 2;
			}
			if(board[6][3]==1&&board[5][4]==2){
				board[6][3] = 2;
			}
			if(board[6][1]==1&&board[5][0]==2){
				board[6][1] = 2;
			}
			if(board[6][3]==1&&board[5][4]==1&&board[4][5]==2){
				board[6][3] = 2;
				board[5][4] = 2;
			}
			if(board[6][3]==1&&board[5][4]==1&&board[4][5]==1&&board[3][6]==2){
				board[6][3] = 2;
				board[5][4] = 2;
				board[4][5] = 2;
			}
			if(board[6][3]==1&&board[5][4]==1&&board[4][5]==1&&board[3][6]==1&&board[2][7]==2){
				board[6][3] = 2;
				board[5][4] = 2;
				board[4][5] = 2;
				board[3][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==3){//0,3黒
			if(board[1][3]==2&&board[2][3]==1){
				board[1][3] = 1;
			}
			if(board[1][3]==2&&board[2][3]==2&&board[3][3]==1){
				board[1][3] = 1;
				board[2][3] = 1;
			}
			if(board[1][3]==2&&board[2][3]==2&&board[3][3]==2&&board[4][3]==1){
				board[1][3] = 1;
				board[2][3] = 1;
				board[3][3] = 1;
			}
			if(board[1][3]==2&&board[2][3]==2&&board[3][3]==2&&board[4][3]==2&&board[5][3]==1){
				board[1][3] = 1;
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
			}
			if(board[1][3]==2&&board[2][3]==2&&board[3][3]==2&&board[4][3]==2&&board[5][3]==2&&board[6][3]==1){
				board[1][3] = 1;
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
			}
			if(board[1][3]==2&&board[2][3]==2&&board[3][3]==2&&board[4][3]==2&&board[5][3]==2&&board[6][3]==2&&board[7][3]==1){
				board[1][3] = 1;
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
				board[6][3] = 1;
				}
			if(board[0][4]==2&&board[0][5]==1){
				board[0][4] = 1;
			}
			if(board[0][2]==2&&board[0][1]==1){
				board[0][2] = 1;
			}
			if(board[0][4]==2&&board[0][5]==2&&board[0][6]==1){
				board[0][4] = 1;
				board[0][5] = 1;
			}
			if(board[0][2]==2&&board[0][1]==2&&board[0][0]==1){
				board[0][2] = 1;
				board[0][1] = 1;
			}
			if(board[0][4]==2&&board[0][5]==2&&board[0][6]==2&&board[0][7]==1){
				board[0][4] = 1;
				board[0][5] = 1;
				board[0][6] = 1;
			}
			if(board[1][4]==2&&board[2][5]==1){
				board[1][4] = 1;
			}
			if(board[1][2]==2&&board[2][1]==1){
				board[1][2] = 1;
			}
			if(board[1][4]==2&&board[2][5]==2&&board[3][6]==1){
				board[1][3] = 1;
				board[2][4] = 1;
			}
			if(board[1][2]==2&&board[2][1]==2&&board[3][0]==1){
				board[1][2] = 1;
				board[2][1] = 1;
			}
			if(board[1][4]==2&&board[2][5]==2&&board[3][6]==2&&board[4][7]==1){
				board[1][4] = 1;
				board[2][5] = 1;
				board[3][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==3){//0,3白
			if((board[1][3]==1)&&(board[2][3]==2)){
				board[1][3] = 2;
			}
			if(board[1][3]==1&&board[2][3]==1&&board[3][3]==2){
				board[1][3] = 2;
				board[2][3] = 2;
			}
			if(board[1][3]==1&&board[2][3]==1&&board[3][3]==1&&board[4][3]==2){
				board[1][3] = 2;
				board[2][3] = 2;
				board[3][3] = 2;
			}
			if(board[1][3]==1&&board[2][3]==1&&board[3][3]==1&&board[4][3]==1&&board[5][3]==2){
				board[1][3] = 2;
				board[2][3] = 2;
				board[3][3] = 2;
				board[4][3] = 2;
			}
			if(board[1][3]==1&&board[2][3]==1&&board[3][3]==1&&board[4][3]==1&&board[5][3]==1&&board[6][3]==2){
				board[1][3] = 2;
				board[2][3] = 2;
				board[3][3] = 2;
				board[4][3] = 2;
				board[5][3] = 2;
			}
			if(board[1][3]==1&&board[2][3]==1&&board[3][3]==1&&board[4][3]==1&&board[5][3]==1&&board[6][3]==1&&board[7][3]==2){
				board[1][3] = 2;
				board[2][3] = 2;
				board[3][3] = 2;
				board[4][3] = 2;
				board[5][3] = 2;
				board[6][3] = 2;
			}
			if(board[0][4]==1&&board[0][5]==2){
				board[0][4] = 2;
			}
			if(board[0][2]==1&&board[0][1]==2){
				board[0][2] = 2;
			}
			if(board[0][4]==1&&board[0][5]==1&&board[0][6]==2){
				board[0][4] = 2;
				board[0][5] = 2;
			}
			if(board[0][2]==1&&board[0][1]==1&&board[0][0]==2){
				board[0][2] = 2;
				board[0][1] = 2;
			}
			if(board[0][4]==1&&board[0][5]==1&&board[0][6]==1&&board[0][7]==2){
				board[0][4] = 2;
				board[0][5] = 2;
				board[0][6] = 2;
			}
			if(board[1][4]==1&&board[2][5]==2){
				board[1][4] = 2;
			}
			if(board[1][2]==1&&board[2][1]==2){
				board[1][2] = 2;
			}
			if(board[1][4]==1&&board[2][5]==1&&board[3][6]==2){
				board[1][4] = 2;
				board[2][5] = 2;
			}
			if(board[1][2]==1&&board[2][1]==1&&board[3][0]==2){
				board[1][2] = 2;
				board[2][1] = 2;
			}
			if(board[1][4]==1&&board[2][5]==1&&board[3][6]==1&&board[4][7]==2){
				board[1][4] = 2;
				board[2][5] = 2;
				board[3][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==3){//1,3黒
			if(board[2][3]==2&&board[3][3]==1){
				board[2][3] = 1;
			}
			if(board[2][3]==2&&board[3][3]==2&&board[4][3]==1){
				board[2][3] = 1;
				board[3][3] = 1;
			}
			if(board[2][3]==2&&board[3][3]==2&&board[4][3]==2&&board[5][3]==1){
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
			}
			if(board[2][3]==2&&board[3][3]==2&&board[4][3]==2&&board[5][3]==2&&board[6][3]==1){
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
			}
			if(board[2][3]==2&&board[3][3]==2&&board[4][3]==2&&board[5][3]==2&&board[6][3]==2&&board[7][3]==1){
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
				board[6][3] = 1;
			}
			if(board[1][4]==2&&board[1][5]==1){
				board[1][4] = 1;
			}
			if(board[1][2]==2&&board[1][1]==1){
				board[1][2] = 1;
			}
			if(board[1][4]==2&&board[1][5]==2&&board[1][6]==1){
				board[1][4] = 1;
				board[1][5] = 1;
			}
			if(board[1][2]==2&&board[1][1]==2&&board[1][0]==1){
				board[1][2] = 1;
				board[1][1] = 1;
			}
			if(board[1][4]==2&&board[1][5]==2&&board[1][6]==2&&board[1][7]==1){
				board[1][4] = 1;
				board[1][5] = 1;
				board[1][6] = 1;
			}
			if(board[2][4]==2&&board[3][5]==1){
				board[2][3] = 1;
			}
			if(board[2][2]==2&&board[3][1]==1){
				board[2][2] = 1;
			}
			if(board[2][4]==2&&board[3][5]==2&&board[4][6]==1){
				board[2][4] = 1;
				board[3][5] = 1;
			}
			if(board[2][2]==2&&board[3][1]==2&&board[4][0]==1){
				board[2][2] = 1;
				board[3][1] = 1;
			}
			if(board[2][4]==2&&board[3][5]==2&&board[4][6]==2&&board[5][7]==1){
				board[2][4] = 1;
				board[3][5] = 1;
				board[4][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==3){//1,3白
			if(board[2][3]==1&&board[3][3]==2){
				board[2][3] = 2;
			}
			if(board[2][3]==1&&board[3][3]==1&&board[4][3]==2){
				board[2][3] = 2;
				board[3][3] = 2;
			}
			if(board[2][3]==1&&board[3][3]==1&&board[4][3]==1&&board[5][3]==2){
				board[2][3] = 2;
				board[3][3] = 2;
				board[4][3] = 2;
			}
			if(board[2][3]==1&&board[3][3]==1&&board[4][3]==1&&board[5][3]==1&&board[6][3]==2){
				board[2][3] = 2;
				board[3][3] = 2;
				board[4][3] = 2;
				board[5][3] = 2;
			}
			if(board[2][3]==1&&board[3][3]==1&&board[4][3]==1&&board[5][3]==1&&board[6][3]==1&&board[7][3]==2){
				board[2][3] = 2;
				board[3][3] = 2;
				board[4][3] = 2;
				board[5][3] = 2;
				board[6][3] = 2;
			}
			if(board[1][4]==1&&board[1][5]==2){
				board[1][4] = 2;
			}
			if(board[1][2]==1&&board[1][1]==2){
				board[1][2] = 2;
			}
			if(board[1][4]==1&&board[1][5]==1&&board[1][6]==2){
				board[1][4] = 2;
				board[1][5] = 2;
			}
			if(board[1][2]==1&&board[1][1]==1&&board[1][0]==2){
				board[1][4] = 2;
				board[1][5] = 2;
			}
			if(board[1][4]==1&&board[1][5]==1&&board[1][6]==1&&board[1][7]==2){
				board[1][4] = 2;
				board[1][5] = 2;
				board[1][6] = 2;
			}
			if(board[2][4]==1&&board[3][5]==2){
				board[2][3] = 2;
			}
			if(board[2][2]==1&&board[3][1]==2){
				board[2][1] = 2;
			}
			if(board[2][4]==1&&board[3][5]==1&&board[4][6]==2){
				board[2][4] = 2;
				board[3][5] = 2;
			}
			if(board[2][2]==1&&board[3][1]==1&&board[4][0]==2){
				board[2][2] = 2;
				board[3][1] = 2;
			}
			if(board[2][4]==1&&board[3][5]==1&&board[4][6]==1&&board[5][7]==2){
				board[2][3] = 2;
				board[3][4] = 2;
				board[4][5] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==3){//2,3黒
			if(board[3][3]==2&&board[4][3]==1){
				board[3][3] = 1;
			}
			if(board[1][3]==2&&board[0][3]==1){
				board[1][3] = 1;
			}
			if(board[3][3]==2&&board[4][3]==2&&board[5][3]==1){
				board[3][3] = 1;
				board[4][3] = 1;
			}
			if(board[3][3]==2&&board[4][3]==2&&board[5][3]==2&&board[6][3]==1){
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
			}
			if(board[3][3]==2&&board[4][3]==2&&board[5][3]==2&&board[6][3]==2&&board[7][3]==1){
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
				board[6][3] = 1;
			}
			if(board[2][4]==2&&board[2][5]==1){
				board[2][4] = 1;
			}
			if(board[2][2]==2&&board[2][1]==1){
				board[2][2] = 1;
			}
			if(board[2][4]==2&&board[2][5]==2&&board[2][6]==1){
				board[2][4] = 1;
				board[2][5] = 1;
			}
			if(board[2][2]==2&&board[2][1]==2&&board[2][0]==1){
				board[2][2] = 1;
				board[2][1] = 1;
			}
			if(board[2][4]==2&&board[2][5]==2&&board[2][6]==2&&board[2][7]==1){
				board[2][4] = 1;
				board[2][5] = 1;
				board[2][6] = 1;
			}
			if(board[3][4]==2&&board[4][5]==1){
				board[3][4] = 1;
			}
			if(board[3][2]==2&&board[4][1]==1){
				board[3][2] = 1;
			}
			if(board[1][4]==2&&board[0][5]==1){
				board[1][3] = 1;
			}
			if(board[1][2]==2&&board[0][1]==1){
				board[1][2] = 1;
			}
			if(board[3][4]==2&&board[4][5]==2&&board[5][6]==1){
				board[3][4] = 1;
				board[4][5] = 1;
			}
			if(board[3][2]==2&&board[4][1]==2&&board[5][0]==1){
				board[3][2] = 1;
				board[4][1] = 1;
			}
			if(board[3][4]==2&&board[4][5]==2&&board[5][6]==2&&board[6][7]==1){
				board[3][4] = 1;
				board[4][5] = 1;
				board[5][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==3){//2,3白
			if(board[3][3]==1&&board[4][3]==2){
				board[3][3] = 2;
			}
			if(board[1][3]==1&&board[0][3]==2){
				board[1][3] = 2;
			}
			if(board[3][3]==1&&board[4][3]==1&&board[5][3]==2){
				board[3][3] = 2;
				board[4][3] = 2;
			}
			if(board[3][3]==1&&board[4][3]==1&&board[5][3]==1&&board[6][3]==2){
				board[3][3] = 2;
				board[4][3] = 2;
				board[5][3] = 2;
			}
			if(board[3][3]==1&&board[4][3]==1&&board[5][3]==1&&board[6][3]==1&&board[7][3]==2){
				board[3][3] = 2;
				board[4][3] = 2;
				board[5][3] = 2;
				board[6][3] = 2;
			}
			if(board[2][4]==1&&board[2][5]==2){
				board[2][4] = 2;
			}
			if(board[2][2]==1&&board[2][1]==2){
				board[2][2] = 2;
			}
			if(board[2][4]==1&&board[2][5]==1&&board[2][6]==2){
				board[2][4] = 2;
				board[2][5] = 2;
			}
			if(board[2][2]==1&&board[2][1]==1&&board[2][0]==2){
				board[2][2] = 2;
				board[2][1] = 2;
			}
			if(board[2][4]==1&&board[2][5]==1&&board[2][6]==1&&board[2][7]==2){
				board[2][4] = 2;
				board[2][5] = 2;
				board[2][6] = 2;
			}
			if(board[3][4]==1&&board[4][5]==2){
				board[3][4] = 2;
			}
			if(board[3][2]==1&&board[4][1]==2){
				board[3][2] = 2;
			}
			if(board[1][4]==1&&board[0][5]==2){
				board[1][4] = 2;
			}
			if(board[1][2]==1&&board[0][1]==2){
				board[1][2] = 2;
			}
			if(board[3][4]==1&&board[4][5]==1&&board[5][6]==2){
				board[3][4] = 2;
				board[4][5] = 2;
			}
			if(board[3][2]==1&&board[4][1]==1&&board[5][0]==2){
				board[3][2] = 2;
				board[4][1] = 2;
			}
			if(board[3][4]==1&&board[4][5]==1&&board[5][6]==1&&board[6][7]==2){
				board[3][4] = 2;
				board[4][5] = 2;
				board[5][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==3){//5,3黒
			if(board[6][3]==2&&board[7][3]==1){
				board[6][3] = 1;
			}
			if(board[4][3]==2&&board[3][3]==1){
				board[4][3] = 1;
			}
			if(board[4][3]==2&&board[3][3]==2&&board[2][3]==1){
				board[4][3] = 1;
				board[3][3] = 1;
			}
			if(board[4][3]==2&&board[3][3]==2&&board[2][3]==2&&board[1][3]==1){
				board[4][3] = 1;
				board[3][3] = 1;
				board[2][3] = 1;
			}
			if(board[4][3]==2&&board[3][3]==2&&board[2][3]==2&&board[1][3]==2&&board[0][3]==1){
				board[4][3] = 1;
				board[3][3] = 1;
				board[2][3] = 1;
				board[1][3] = 1;
			}
			if(board[5][4]==2&&board[5][5]==1){
				board[5][4] = 1;
			}
			if(board[5][2]==2&&board[5][1]==1){
				board[5][2] = 1;
			}
			if(board[5][4]==2&&board[5][5]==2&&board[5][6]==1){
				board[5][4] = 1;
				board[5][5] = 1;
			}
			if(board[5][2]==2&&board[5][1]==2&&board[5][0]==1){
				board[5][2] = 1;
				board[5][1] = 1;
			}
			if(board[5][4]==2&&board[5][5]==2&&board[5][6]==2&&board[5][7]==1){
				board[5][4] = 1;
				board[5][5] = 1;
				board[5][6] = 1;
			}
			if(board[6][4]==2&&board[7][5]==1){
				board[6][4] = 1;
			}
			if(board[4][4]==2&&board[3][5]==1){
				board[4][4] = 1;
			}
			if(board[6][2]==2&&board[7][1]==1){
				board[6][2] = 1;
			}
			if(board[4][2]==2&&board[3][1]==1){
				board[4][2] = 1;
			}
			if(board[4][4]==2&&board[3][5]==2&&board[2][6]==1){
				board[4][4] = 1;
				board[3][5] = 1;
			}
			if(board[4][2]==2&&board[3][1]==2&&board[2][0]==1){
				board[4][2] = 1;
				board[3][1] = 1;
			}
			if(board[4][4]==2&&board[3][5]==2&&board[2][6]==2&&board[1][7]==1){
				board[4][4] = 1;
				board[3][5] = 1;
				board[2][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==3){//5,3白
			if(board[6][3]==1&&board[7][3]==2){
				board[6][3] = 2;
			}
			if(board[4][3]==1&&board[3][3]==2){
				board[4][3] = 2;
			}
			if(board[4][3]==1&&board[3][3]==1&&board[2][3]==2){
				board[4][3] = 2;
				board[3][3] = 2;
			}
			if(board[4][3]==1&&board[3][3]==1&&board[2][3]==1&&board[1][3]==2){
				board[4][3] = 2;
				board[3][3] = 2;
				board[2][3] = 2;
			}
			if(board[4][3]==1&&board[3][3]==1&&board[2][3]==1&&board[1][3]==1&&board[0][3]==2){
				board[4][3] = 2;
				board[3][3] = 2;
				board[2][3] = 2;
				board[1][3] = 2;
			}
			if(board[5][4]==1&&board[5][5]==1){
				board[5][4] = 2;
			}
			if(board[5][2]==1&&board[5][1]==1){
				board[5][2] = 2;
			}
			if(board[5][4]==1&&board[5][5]==1&&board[5][6]==2){
				board[5][4] = 2;
				board[5][5] = 2;
			}
			if(board[5][2]==1&&board[5][1]==1&&board[5][0]==2){
				board[5][2] = 2;
				board[5][1] = 2;
			}
			if(board[5][4]==1&&board[5][5]==1&&board[5][6]==1&&board[5][7]==2){
				board[5][4] = 2;
				board[5][5] = 2;
				board[5][6] = 2;
			}
			if(board[6][4]==1&&board[7][5]==2){
				board[6][4] = 2;
			}
			if(board[4][4]==1&&board[3][5]==2){
				board[4][3] = 2;
			}
			if(board[6][2]==1&&board[7][1]==2){
				board[6][1] = 2;
			}
			if(board[4][2]==1&&board[3][1]==2){
				board[4][2] = 2;
			}
			if(board[4][4]==1&&board[3][5]==1&&board[2][6]==2){
				board[4][4] = 2;
				board[3][5] = 2;
			}
			if(board[4][2]==1&&board[3][1]==1&&board[2][0]==2){
				board[4][2] = 2;
				board[3][1] = 2;
			}
			if(board[4][4]==1&&board[3][5]==1&&board[2][6]==1&&board[1][7]==2){
				board[4][4] = 2;
				board[3][5] = 2;
				board[2][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==6&&retu==3){//6,3黒
			if(board[5][3]==2&&board[4][3]==1){
				board[5][3] = 1;
			}
			if(board[5][3]==2&&board[4][3]==2&&board[3][3]==1){
				board[5][3] = 1;
				board[4][3] = 1;
			}
			if(board[5][3]==2&&board[4][3]==2&&board[3][3]==2&&board[2][3]==1){
				board[5][3] = 1;
				board[4][3] = 1;
				board[3][3] = 1;
			}
			if(board[5][3]==2&&board[4][3]==2&&board[3][3]==2&&board[2][3]==2&&board[1][3]==1){
				board[5][3] = 1;
				board[4][3] = 1;
				board[3][3] = 1;
				board[2][3] = 1;
			}
			if(board[5][3]==2&&board[4][3]==2&&board[3][3]==2&&board[2][3]==2&&board[1][3]==2&&board[0][3]==1){
				board[5][3] = 1;
				board[4][3] = 1;
				board[3][3] = 1;
				board[2][3] = 1;
				board[1][3] = 1;
			}
			if(board[6][4]==2&&board[6][5]==1){
				board[6][4] = 1;
			}
			if(board[6][2]==2&&board[6][1]==1){
				board[6][2] = 1;
			}
			if(board[6][4]==2&&board[6][5]==2&&board[6][6]==1){
				board[6][4] = 1;
				board[6][5] = 1;
			}
			if(board[6][2]==2&&board[6][1]==2&&board[6][0]==1){
				board[6][2] = 1;
				board[6][1] = 1;
			}
			if(board[6][4]==2&&board[6][5]==2&&board[6][6]==2&&board[6][7]==1){
				board[6][4] = 1;
				board[6][5] = 1;
				board[6][6] = 1;
			}
			if(board[5][4]==2&&board[4][5]==1){
				board[5][4] = 1;
			}
			if(board[5][2]==2&&board[4][1]==1){
				board[5][2] = 1;
			}
			if(board[5][4]==2&&board[4][5]==2&&board[3][6]==1){
				board[5][4] = 1;
				board[4][5] = 1;
			}
			if(board[5][2]==2&&board[4][1]==2&&board[3][0]==1){
				board[5][2] = 1;
				board[4][1] = 1;
			}
			if(board[5][4]==2&&board[4][5]==2&&board[3][6]==2&&board[2][7]==1){
				board[5][4] = 1;
				board[4][5] = 1;
				board[3][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==3){//6,3白
			if(board[5][3]==1&&board[4][3]==2){
				board[5][3] = 2;
			}
			if(board[5][3]==1&&board[4][3]==1&&board[3][3]==2){
				board[5][3] = 2;
				board[4][3] = 2;
			}
			if(board[5][3]==1&&board[4][3]==1&&board[3][3]==1&&board[2][3]==2){
				board[5][3] = 2;
				board[4][3] = 2;
				board[3][3] = 2;
			}
			if(board[5][3]==1&&board[4][3]==1&&board[3][3]==1&&board[2][3]==1&&board[1][3]==2){
				board[5][3] = 2;
				board[4][3] = 2;
				board[3][3] = 2;
				board[2][3] = 2;
			}
			if(board[5][3]==1&&board[4][3]==1&&board[3][3]==1&&board[2][3]==1&&board[1][3]==1&&board[0][3]==2){
				board[5][3] = 2;
				board[4][3] = 2;
				board[3][3] = 2;
				board[2][3] = 2;
				board[1][3] = 2;
			}
			if(board[6][4]==1&&board[6][5]==2){
				board[6][4] = 2;
			}
			if(board[6][2]==1&&board[6][1]==2){
				board[6][2] = 2;
			}
			if(board[6][4]==1&&board[6][5]==1&&board[6][6]==2){
				board[6][4] = 2;
				board[6][5] = 2;
			}
			if(board[6][2]==1&&board[6][1]==1&&board[6][0]==2){
				board[6][2] = 2;
				board[6][1] = 2;
			}
			if(board[6][4]==1&&board[6][5]==1&&board[6][6]==1&&board[6][7]==2){
				board[6][4] = 2;
				board[6][5] = 2;
				board[6][6] = 2;
			}
			if(board[5][4]==1&&board[4][5]==2){
				board[5][4] = 2;
			}
			if(board[5][2]==1&&board[4][1]==2){
				board[5][2] = 2;
			}
			if(board[5][4]==1&&board[4][5]==1&&board[3][6]==2){
				board[5][4] = 2;
				board[4][5] = 2;
			}
			if(board[5][2]==1&&board[4][1]==1&&board[3][0]==2){
				board[5][2] = 2;
				board[4][1] = 2;
			}
			if(board[5][4]==1&&board[4][5]==1&&board[3][6]==1&&board[2][7]==2){
				board[5][4] = 2;
				board[4][5] = 2;
				board[3][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==3){//7,3黒
			if(board[6][3]==2&&board[5][3]==1){
				board[6][3] = 1;
			}
			if(board[6][3]==2&&board[5][3]==2&&board[4][3]==1){
				board[6][3] = 1;
				board[5][3] = 1;
			}
			if(board[6][3]==2&&board[5][3]==2&&board[4][3]==2&&board[3][3]==1){
				board[6][3] = 1;
				board[5][3] = 1;
				board[4][3] = 1;
			}
			if(board[6][3]==2&&board[5][3]==2&&board[4][3]==2&&board[3][3]==2&&board[2][3]==1){
				board[6][3] = 1;
				board[5][3] = 1;
				board[4][3] = 1;
				board[3][3] = 1;
			}
			if(board[6][3]==2&&board[5][3]==2&&board[4][3]==2&&board[3][3]==2&&board[2][3]==2&&board[1][3]==1){
				board[1][3] = 1;
				board[2][3] = 1;
				board[3][3] = 1;
				board[4][3] = 1;
				board[5][3] = 1;
			}
			if(board[6][3]==2&&board[5][3]==2&&board[4][3]==2&&board[3][3]==2&&board[2][3]==2&&board[1][3]==2&&board[0][3]==1){
				board[6][3] = 1;
				board[5][3] = 1;
				board[4][3] = 1;
				board[3][3] = 1;
				board[2][3] = 1;
				board[1][3] = 1;
			}
			if(board[7][4]==2&&board[7][5]==1){
				board[7][4] = 1;
			}
			if(board[7][2]==2&&board[7][1]==1){
				board[7][2] = 1;
			}
			if(board[7][4]==2&&board[7][5]==2&&board[7][6]==1){
				board[7][4] = 1;
				board[7][5] = 1;
			}
			if(board[7][2]==2&&board[7][1]==2&&board[7][0]==1){
				board[7][2] = 1;
				board[7][1] = 1;
			}
			if(board[7][4]==2&&board[7][5]==2&&board[7][6]==2&&board[7][7]==1){
				board[7][4] = 1;
				board[7][5] = 1;
				board[7][6] = 1;
			}
			if(board[6][4]==2&&board[5][5]==1){
				board[6][4] = 1;
			}
			if(board[6][2]==2&&board[5][1]==1){
				board[6][2] = 1;
			}
			if(board[6][4]==2&&board[5][5]==2&&board[4][6]==1){
				board[6][4] = 1;
				board[5][5] = 1;
			}
			if(board[6][2]==2&&board[5][1]==2&&board[4][0]==1){
				board[6][2] = 1;
				board[5][1] = 1;
			}
			if(board[6][4]==2&&board[5][5]==2&&board[4][6]==2&&board[3][7]==1){
				board[6][4] = 1;
				board[5][5] = 1;
				board[4][6] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==3){//7,3白
			if(board[6][3]==1&&board[5][3]==2){
				board[6][3] = 2;
			}
			if(board[6][3]==1&&board[5][3]==1&&board[4][3]==2){
				board[6][3] = 2;
				board[5][3] = 2;
			}
			if(board[6][3]==1&&board[5][3]==1&&board[4][3]==1&&board[3][3]==2){
				board[6][3] = 2;
				board[5][3] = 2;
				board[4][3] = 2;
			}
			if(board[6][3]==1&&board[5][3]==1&&board[4][3]==1&&board[3][3]==1&&board[2][3]==2){
				board[6][3] = 2;
				board[5][3] = 2;
				board[4][3] = 2;
				board[3][3] = 2;
			}
			if(board[6][3]==1&&board[5][3]==1&&board[4][3]==1&&board[3][3]==1&&board[2][3]==1&&board[1][3]==2){
				board[6][3] = 2;
				board[5][3] = 2;
				board[4][3] = 2;
				board[3][3] = 2;
				board[2][3] = 2;
			}
			if(board[6][3]==1&&board[5][3]==1&&board[4][3]==1&&board[3][3]==1&&board[2][3]==1&&board[1][3]==1&&board[0][3]==2){
				board[6][3] = 2;
				board[5][3] = 2;
				board[4][3] = 2;
				board[3][3] = 2;
				board[2][3] = 2;
				board[1][3] = 2;
			}
			if(board[7][4]==1&&board[7][5]==2){
				board[7][4] = 2;
			}
			if(board[7][2]==1&&board[7][1]==2){
				board[7][2] = 2;
			}
			if(board[7][4]==1&&board[7][5]==1&&board[7][6]==2){
				board[7][4] = 2;
				board[7][5] = 2;
			}
			if(board[7][2]==1&&board[7][1]==1&&board[7][0]==2){
				board[7][2] = 2;
				board[7][1] = 2;
			}
			if(board[7][4]==1&&board[7][5]==1&&board[7][6]==1&&board[7][7]==2){
				board[7][4] = 2;
				board[7][5] = 2;
				board[7][6] = 2;
			}
			if(board[6][4]==1&&board[5][5]==2){
				board[6][4] = 2;
			}
			if(board[6][2]==1&&board[5][1]==2){
				board[6][2] = 2;
			}
			if(board[6][4]==1&&board[5][5]==1&&board[4][6]==2){
				board[6][4] = 2;
				board[5][3] = 2;
			}
			if(board[6][2]==1&&board[5][1]==1&&board[4][0]==2){
				board[6][2] = 2;
				board[5][1] = 2;
			}
			if(board[6][4]==1&&board[5][5]==1&&board[4][6]==1&&board[3][7]==2){
				board[6][4] = 2;
				board[5][5] = 2;
				board[4][6] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==4){//0,4黒
			if(board[1][4]==2&&board[2][4]==1){
				board[1][4] = 1;
			}
			if(board[1][4]==2&&board[2][4]==2&&board[3][4]==1){
				board[1][4] = 1;
				board[2][4] = 1;
			}
			if(board[1][4]==2&&board[2][4]==2&&board[3][4]==2&&board[4][4]==1){
				board[1][4] = 1;
				board[2][4] = 1;
				board[3][4] = 1;
			}
			if(board[1][4]==2&&board[2][4]==2&&board[3][4]==2&&board[4][4]==2&&board[5][4]==1){
				board[1][4] = 1;
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
			}
			if(board[1][4]==2&&board[2][4]==2&&board[3][4]==2&&board[4][4]==2&&board[5][4]==2&&board[6][4]==1){
				board[1][4] = 1;
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
			}
			if(board[1][4]==2&&board[2][4]==2&&board[3][4]==2&&board[4][4]==2&&board[5][4]==2&&board[6][4]==2&&board[7][4]==1){
				board[1][4] = 1;
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
				board[6][4] = 1;
				}
			if(board[0][5]==2&&board[0][6]==1){
				board[0][5] = 1;
			}
			if(board[0][3]==2&&board[0][2]==1){
				board[0][3] = 1;
			}
			if(board[0][5]==2&&board[0][6]==2&&board[0][7]==1){
				board[0][5] = 1;
				board[0][6] = 1;
			}
			if(board[0][3]==2&&board[0][2]==2&&board[0][1]==1){
				board[0][3] = 1;
				board[0][2] = 1;
			}
			if(board[0][3]==2&&board[0][2]==2&&board[0][1]==2&&board[0][0]==1){
				board[0][3] = 1;
				board[0][2] = 1;
				board[0][1] = 1;
			}
			if(board[1][5]==2&&board[2][6]==1){
				board[1][5] = 1;
			}
			if(board[1][3]==2&&board[2][2]==1){
				board[1][3] = 1;
			}
			if(board[1][5]==2&&board[2][6]==2&&board[3][7]==1){
				board[1][5] = 1;
				board[2][6] = 1;
			}
			if(board[1][3]==2&&board[2][2]==2&&board[3][1]==1){
				board[1][3] = 1;
				board[2][2] = 1;
			}
			if(board[1][3]==2&&board[2][2]==2&&board[3][1]==2&&board[4][0]==1){
				board[1][3] = 1;
				board[2][2] = 1;
				board[3][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==4){//0,4白
			if((board[1][4]==1)&&(board[2][4]==2)){
				board[1][4] = 2;
			}
			if(board[1][4]==1&&board[2][4]==1&&board[3][4]==2){
				board[1][4] = 2;
				board[2][4] = 2;
			}
			if(board[1][4]==1&&board[2][4]==1&&board[3][4]==1&&board[4][4]==2){
				board[1][4] = 2;
				board[2][4] = 2;
				board[3][4] = 2;
			}
			if(board[1][4]==1&&board[2][4]==1&&board[3][4]==1&&board[4][4]==1&&board[5][4]==2){
				board[1][4] = 2;
				board[2][4] = 2;
				board[3][4] = 2;
				board[4][4] = 2;
			}
			if(board[1][4]==1&&board[2][4]==1&&board[3][4]==1&&board[4][4]==1&&board[5][4]==1&&board[6][4]==2){
				board[1][4] = 2;
				board[2][4] = 2;
				board[3][4] = 2;
				board[4][4] = 2;
				board[5][4] = 2;
			}
			if(board[1][4]==1&&board[2][4]==1&&board[3][4]==1&&board[4][4]==1&&board[5][4]==1&&board[6][4]==1&&board[7][4]==2){
				board[1][4] = 2;
				board[2][4] = 2;
				board[3][4] = 2;
				board[4][4] = 2;
				board[5][4] = 2;
				board[6][4] = 2;
			}
			if(board[0][5]==1&&board[0][6]==2){
				board[0][5] = 2;
			}
			if(board[0][3]==1&&board[0][2]==2){
				board[0][3] = 2;
			}
			if(board[0][5]==1&&board[0][6]==1&&board[0][7]==2){
				board[0][5] = 2;
				board[0][6] = 2;
			}
			if(board[0][3]==1&&board[0][2]==1&&board[0][1]==2){
				board[0][3] = 2;
				board[0][2] = 2;
			}
			if(board[0][3]==1&&board[0][2]==1&&board[0][1]==1&&board[0][0]==2){
				board[0][3] = 2;
				board[0][2] = 2;
				board[0][1] = 2;
			}
			if(board[1][5]==1&&board[2][6]==2){
				board[1][5] = 2;
			}
			if(board[1][3]==1&&board[2][2]==2){
				board[1][3] = 2;
			}
			if(board[1][5]==1&&board[2][6]==1&&board[3][7]==2){
				board[1][5] = 2;
				board[2][6] = 2;
			}
			if(board[1][3]==1&&board[2][2]==1&&board[3][1]==2){
				board[1][3] = 2;
				board[2][2] = 2;
			}
			if(board[1][3]==1&&board[2][2]==1&&board[3][1]==1&&board[4][0]==2){
				board[1][3] = 2;
				board[2][2] = 2;
				board[3][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==4){//1,4黒
			if(board[2][4]==2&&board[3][4]==1){
				board[2][4] = 1;
			}
			if(board[2][4]==2&&board[3][4]==2&&board[4][4]==1){
				board[2][4] = 1;
				board[3][4] = 1;
			}
			if(board[2][4]==2&&board[3][4]==2&&board[4][4]==2&&board[5][4]==1){
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
			}
			if(board[2][4]==2&&board[3][4]==2&&board[4][4]==2&&board[5][4]==2&&board[6][4]==1){
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
			}
			if(board[2][4]==2&&board[3][4]==2&&board[4][4]==2&&board[5][4]==2&&board[6][4]==2&&board[7][4]==1){
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
				board[6][4] = 1;
			}
			if(board[1][5]==2&&board[1][6]==1){
				board[1][5] = 1;
			}
			if(board[1][3]==2&&board[1][2]==1){
				board[1][3] = 1;
			}
			if(board[1][5]==2&&board[1][6]==2&&board[1][7]==1){
				board[1][5] = 1;
				board[1][6] = 1;
			}
			if(board[1][3]==2&&board[1][2]==2&&board[1][1]==1){
				board[1][3] = 1;
				board[1][2] = 1;
			}
			if(board[1][3]==2&&board[1][2]==2&&board[1][1]==2&&board[1][0]==1){
				board[1][3] = 1;
				board[1][2] = 1;
				board[1][1] = 1;
			}
			if(board[2][5]==2&&board[3][6]==1){
				board[2][5] = 1;
			}
			if(board[2][3]==2&&board[3][2]==1){
				board[2][3] = 1;
			}
			if(board[2][5]==2&&board[3][6]==2&&board[4][7]==1){
				board[2][3] = 1;
				board[3][2] = 1;
			}
			if(board[2][3]==2&&board[3][2]==2&&board[4][1]==1){
				board[2][3] = 1;
				board[3][2] = 1;
			}
			if(board[2][3]==2&&board[3][2]==2&&board[4][1]==2&&board[5][0]==1){
				board[2][3] = 1;
				board[3][2] = 1;
				board[4][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==4){//1,4白
			if(board[2][4]==1&&board[3][4]==2){
				board[2][4] = 2;
			}
			if(board[2][4]==1&&board[3][4]==1&&board[4][4]==2){
				board[2][4] = 2;
				board[3][4] = 2;
			}
			if(board[2][4]==1&&board[3][4]==1&&board[4][4]==1&&board[5][4]==2){
				board[2][4] = 2;
				board[3][4] = 2;
				board[4][4] = 2;
			}
			if(board[2][4]==1&&board[3][4]==1&&board[4][4]==1&&board[5][4]==1&&board[6][4]==2){
				board[2][4] = 2;
				board[3][4] = 2;
				board[4][4] = 2;
				board[5][4] = 2;
			}
			if(board[2][4]==1&&board[3][4]==1&&board[4][4]==1&&board[5][4]==1&&board[6][4]==1&&board[7][4]==2){
				board[2][4] = 2;
				board[3][4] = 2;
				board[4][4] = 2;
				board[5][4] = 2;
				board[6][4] = 2;
			}
			if(board[1][5]==1&&board[1][6]==2){
				board[1][5] = 2;
			}
			if(board[1][3]==1&&board[1][2]==2){
				board[1][3] = 2;
			}
			if(board[1][5]==1&&board[1][6]==1&&board[1][7]==2){
				board[1][5] = 2;
				board[1][6] = 2;
			}
			if(board[1][3]==1&&board[1][2]==1&&board[1][1]==2){
				board[1][3] = 2;
				board[1][2] = 2;
			}
			if(board[1][3]==1&&board[1][2]==1&&board[1][1]==1&&board[1][0]==2){
				board[1][3] = 2;
				board[1][2] = 2;
				board[1][1] = 2;
			}
			if(board[2][5]==1&&board[3][6]==2){
				board[2][5] = 2;
			}
			if(board[2][3]==1&&board[3][2]==2){
				board[2][3] = 2;
			}
			if(board[2][5]==1&&board[3][6]==1&&board[4][7]==2){
				board[2][5] = 2;
				board[3][6] = 2;
			}
			if(board[2][3]==1&&board[3][2]==1&&board[4][1]==2){
				board[2][3] = 2;
				board[3][2] = 2;
			}
			if(board[2][3]==1&&board[3][2]==1&&board[4][1]==1&&board[5][0]==2){
				board[2][3] = 2;
				board[3][2] = 2;
				board[4][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==4){//2,4黒
			if(board[3][4]==2&&board[4][4]==1){
				board[3][4] = 1;
			}
			if(board[1][4]==2&&board[0][4]==1){
				board[1][4] = 1;
			}
			if(board[3][4]==2&&board[4][4]==2&&board[5][4]==1){
				board[3][4] = 1;
				board[4][4] = 1;
			}
			if(board[3][4]==2&&board[4][4]==2&&board[5][4]==2&&board[6][4]==1){
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
			}
			if(board[3][4]==2&&board[4][4]==2&&board[5][4]==2&&board[6][4]==2&&board[7][4]==1){
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
				board[6][4] = 1;
			}
			if(board[2][5]==2&&board[2][6]==1){
				board[2][5] = 1;
			}
			if(board[2][3]==2&&board[2][2]==1){
				board[2][3] = 1;
			}
			if(board[2][5]==2&&board[2][6]==2&&board[2][7]==1){
				board[2][5] = 1;
				board[2][6] = 1;
			}
			if(board[2][3]==2&&board[2][2]==2&&board[2][1]==1){
				board[2][3] = 1;
				board[2][2] = 1;
			}
			if(board[2][3]==2&&board[2][2]==2&&board[2][1]==2&&board[2][0]==1){
				board[2][3] = 1;
				board[2][2] = 1;
				board[2][1] = 1;
			}
			if(board[3][5]==2&&board[4][6]==1){
				board[3][5] = 1;
			}
			if(board[3][3]==2&&board[4][2]==1){
				board[3][3] = 1;
			}
			if(board[1][5]==2&&board[0][6]==1){
				board[1][5] = 1;
			}
			if(board[1][3]==2&&board[0][2]==1){
				board[1][3] = 1;
			}
			if(board[3][5]==2&&board[4][6]==2&&board[5][7]==1){
				board[3][5] = 1;
				board[4][6] = 1;
			}
			if(board[3][3]==2&&board[4][2]==2&&board[5][1]==1){
				board[3][3] = 1;
				board[4][2] = 1;
			}
			if(board[3][3]==2&&board[4][2]==2&&board[5][1]==2&&board[6][0]==1){
				board[3][3] = 1;
				board[4][2] = 1;
				board[5][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==4){//2,4白
			if(board[3][4]==1&&board[4][4]==2){
				board[3][4] = 2;
			}
			if(board[1][4]==1&&board[0][4]==2){
				board[1][4] = 2;
			}
			if(board[3][4]==1&&board[4][4]==1&&board[5][4]==2){
				board[3][4] = 2;
				board[4][4] = 2;
			}
			if(board[3][4]==1&&board[4][4]==1&&board[5][4]==1&&board[6][4]==2){
				board[3][4] = 2;
				board[4][4] = 2;
				board[5][4] = 2;
			}
			if(board[3][4]==1&&board[4][4]==1&&board[5][4]==1&&board[6][4]==1&&board[7][4]==2){
				board[3][4] = 2;
				board[4][4] = 2;
				board[5][4] = 2;
				board[6][4] = 2;
			}
			if(board[2][5]==1&&board[2][6]==2){
				board[2][5] = 2;
			}
			if(board[2][3]==1&&board[2][2]==2){
				board[2][3] = 2;
			}
			if(board[2][5]==1&&board[2][6]==1&&board[2][7]==2){
				board[2][5] = 2;
				board[2][6] = 2;
			}
			if(board[2][3]==1&&board[2][2]==1&&board[2][1]==2){
				board[2][3] = 2;
				board[2][2] = 2;
			}
			if(board[2][3]==1&&board[2][2]==1&&board[2][1]==1&&board[2][0]==2){
				board[2][3] = 2;
				board[2][2] = 2;
				board[2][1] = 2;
			}
			if(board[3][5]==1&&board[4][6]==2){
				board[3][5] = 2;
			}
			if(board[3][3]==1&&board[4][2]==2){
				board[3][3] = 2;
			}
			if(board[1][5]==1&&board[0][6]==2){
				board[1][5] = 2;
			}
			if(board[1][3]==1&&board[0][2]==2){
				board[1][3] = 2;
			}
			if(board[3][5]==1&&board[4][6]==1&&board[5][7]==2){
				board[3][5] = 2;
				board[4][6] = 2;
			}
			if(board[3][3]==1&&board[4][2]==1&&board[5][1]==2){
				board[3][3] = 2;
				board[4][2] = 2;
			}
			if(board[3][3]==1&&board[4][2]==1&&board[5][1]==1&&board[6][0]==2){
				board[3][3] = 2;
				board[4][2] = 2;
				board[5][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==4){//5,4黒
			if(board[6][4]==2&&board[7][4]==1){
				board[6][4] = 1;
			}
			if(board[4][4]==2&&board[3][4]==1){
				board[4][4] = 1;
			}
			if(board[4][4]==2&&board[3][4]==2&&board[2][4]==1){
				board[4][4] = 1;
				board[3][4] = 1;
			}
			if(board[4][4]==2&&board[3][4]==2&&board[2][4]==2&&board[1][4]==1){
				board[4][4] = 1;
				board[3][4] = 1;
				board[2][4] = 1;
			}
			if(board[4][4]==2&&board[3][4]==2&&board[2][4]==2&&board[1][4]==2&&board[0][4]==1){
				board[4][4] = 1;
				board[3][4] = 1;
				board[2][4] = 1;
				board[1][4] = 1;
			}
			if(board[5][5]==2&&board[5][6]==1){
				board[5][4] = 1;
			}
			if(board[5][3]==2&&board[5][2]==1){
				board[5][3] = 1;
			}
			if(board[5][5]==2&&board[5][6]==2&&board[5][7]==1){
				board[5][5] = 1;
				board[5][6] = 1;
			}
			if(board[5][3]==2&&board[5][2]==2&&board[5][1]==1){
				board[5][3] = 1;
				board[5][2] = 1;
			}
			if(board[5][3]==2&&board[5][2]==2&&board[5][1]==2&&board[5][0]==1){
				board[5][3] = 1;
				board[5][2] = 1;
				board[5][1] = 1;
			}
			if(board[6][5]==2&&board[7][6]==1){
				board[6][5] = 1;
			}
			if(board[4][5]==2&&board[3][6]==1){
				board[4][5] = 1;
			}
			if(board[6][3]==2&&board[7][2]==1){
				board[6][3] = 1;
			}
			if(board[4][3]==2&&board[3][2]==1){
				board[4][3] = 1;
			}
			if(board[4][5]==2&&board[3][6]==2&&board[2][7]==1){
				board[4][5] = 1;
				board[3][6] = 1;
			}
			if(board[4][3]==2&&board[3][2]==2&&board[2][1]==1){
				board[4][3] = 1;
				board[3][2] = 1;
			}
			if(board[4][3]==2&&board[3][2]==2&&board[2][1]==2&&board[1][0]==1){
				board[4][3] = 1;
				board[3][2] = 1;
				board[2][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==4){//5,4白
			if(board[6][4]==1&&board[7][4]==2){
				board[6][4] = 2;
			}
			if(board[4][4]==1&&board[3][4]==2){
				board[4][4] = 2;
			}
			if(board[4][4]==1&&board[3][4]==1&&board[2][4]==2){
				board[4][4] = 2;
				board[3][4] = 2;
			}
			if(board[4][4]==1&&board[3][4]==1&&board[2][4]==1&&board[1][4]==2){
				board[4][4] = 2;
				board[3][4] = 2;
				board[2][4] = 2;
			}
			if(board[4][4]==1&&board[3][4]==1&&board[2][4]==1&&board[1][4]==1&&board[0][4]==2){
				board[4][4] = 2;
				board[3][4] = 2;
				board[2][4] = 2;
				board[1][4] = 2;
			}
			if(board[5][5]==1&&board[5][6]==1){
				board[5][5] = 2;
			}
			if(board[5][3]==1&&board[5][2]==1){
				board[5][3] = 2;
			}
			if(board[5][5]==1&&board[5][6]==1&&board[5][7]==2){
				board[5][5] = 2;
				board[5][6] = 2;
			}
			if(board[5][3]==1&&board[5][2]==1&&board[5][1]==2){
				board[5][3] = 2;
				board[5][2] = 2;
			}
			if(board[5][3]==1&&board[5][2]==1&&board[5][1]==1&&board[5][0]==2){
				board[5][3] = 2;
				board[5][2] = 2;
				board[5][1] = 2;
			}
			if(board[6][5]==1&&board[7][6]==2){
				board[6][5] = 2;
			}
			if(board[4][5]==1&&board[3][6]==2){
				board[4][5] = 2;
			}
			if(board[6][3]==1&&board[7][2]==2){
				board[6][3] = 2;
			}
			if(board[4][3]==1&&board[3][2]==2){
				board[4][3] = 2;
			}
			if(board[4][5]==1&&board[3][6]==1&&board[2][7]==2){
				board[4][5] = 2;
				board[3][6] = 2;
			}
			if(board[4][3]==1&&board[3][2]==1&&board[2][1]==2){
				board[4][3] = 2;
				board[3][2] = 2;
			}
			if(board[4][3]==1&&board[3][2]==1&&board[2][1]==1&&board[1][0]==2){
				board[4][3] = 2;
				board[3][2] = 2;
				board[2][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==6&&retu==4){//6,4黒
			if(board[5][4]==2&&board[4][4]==1){
				board[5][4] = 1;
			}
			if(board[5][4]==2&&board[4][4]==2&&board[3][4]==1){
				board[5][4] = 1;
				board[4][4] = 1;
			}
			if(board[5][4]==2&&board[4][4]==2&&board[3][4]==2&&board[2][4]==1){
				board[5][4] = 1;
				board[4][4] = 1;
				board[3][4] = 1;
			}
			if(board[5][4]==2&&board[4][4]==2&&board[3][4]==2&&board[2][4]==2&&board[1][4]==1){
				board[5][4] = 1;
				board[4][4] = 1;
				board[3][4] = 1;
				board[2][4] = 1;
			}
			if(board[5][4]==2&&board[4][4]==2&&board[3][4]==2&&board[2][4]==2&&board[1][4]==2&&board[0][4]==1){
				board[5][4] = 1;
				board[4][4] = 1;
				board[3][4] = 1;
				board[2][4] = 1;
				board[1][4] = 1;
			}
			if(board[6][5]==2&&board[6][6]==1){
				board[6][5] = 1;
			}
			if(board[6][3]==2&&board[6][2]==1){
				board[6][3] = 1;
			}
			if(board[6][5]==2&&board[6][6]==2&&board[6][7]==1){
				board[6][5] = 1;
				board[6][6] = 1;
			}
			if(board[6][3]==2&&board[6][2]==2&&board[6][1]==1){
				board[6][3] = 1;
				board[6][2] = 1;
			}
			if(board[6][3]==2&&board[6][2]==2&&board[6][1]==2&&board[6][0]==1){
				board[6][3] = 1;
				board[6][2] = 1;
				board[6][1] = 1;
			}
			if(board[5][5]==2&&board[4][6]==1){
				board[5][5] = 1;
			}
			if(board[5][3]==2&&board[4][2]==1){
				board[5][3] = 1;
			}
			if(board[5][5]==2&&board[4][6]==2&&board[3][7]==1){
				board[5][5] = 1;
				board[4][6] = 1;
			}
			if(board[5][3]==2&&board[4][2]==2&&board[3][1]==1){
				board[5][3] = 1;
				board[4][2] = 1;
			}
			if(board[5][3]==2&&board[4][2]==2&&board[3][1]==2&&board[2][0]==1){
				board[5][3] = 1;
				board[4][2] = 1;
				board[3][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==4){//6,4白
			if(board[5][4]==1&&board[4][4]==2){
				board[5][4] = 2;
			}
			if(board[5][4]==1&&board[4][4]==1&&board[3][4]==2){
				board[5][4] = 2;
				board[4][4] = 2;
			}
			if(board[5][4]==1&&board[4][4]==1&&board[3][4]==1&&board[2][4]==2){
				board[5][4] = 2;
				board[4][4] = 2;
				board[3][4] = 2;
			}
			if(board[5][4]==1&&board[4][4]==1&&board[3][4]==1&&board[2][4]==1&&board[1][4]==2){
				board[5][4] = 2;
				board[4][4] = 2;
				board[3][4] = 2;
				board[2][4] = 2;
			}
			if(board[5][4]==1&&board[4][4]==1&&board[3][4]==1&&board[2][4]==1&&board[1][4]==1&&board[0][4]==2){
				board[5][4] = 2;
				board[4][4] = 2;
				board[3][4] = 2;
				board[2][4] = 2;
				board[1][4] = 2;
			}
			if(board[6][5]==1&&board[6][6]==2){
				board[6][5] = 2;
			}
			if(board[6][3]==1&&board[6][2]==2){
				board[6][3] = 2;
			}
			if(board[6][5]==1&&board[6][6]==1&&board[6][7]==2){
				board[6][5] = 2;
				board[6][6] = 2;
			}
			if(board[6][3]==1&&board[6][2]==1&&board[6][1]==2){
				board[6][3] = 2;
				board[6][2] = 2;
			}
			if(board[6][3]==1&&board[6][2]==1&&board[6][1]==1&&board[6][0]==2){
				board[6][3] = 2;
				board[6][2] = 2;
				board[6][1] = 2;
			}
			if(board[5][5]==1&&board[4][6]==2){
				board[5][5] = 2;
			}
			if(board[5][3]==1&&board[4][2]==2){
				board[5][3] = 2;
			}
			if(board[5][5]==1&&board[4][6]==1&&board[3][7]==2){
				board[5][5] = 2;
				board[4][6] = 2;
			}
			if(board[5][3]==1&&board[4][2]==1&&board[3][1]==2){
				board[5][3] = 2;
				board[4][2] = 2;
			}
			if(board[5][3]==1&&board[4][2]==1&&board[3][1]==1&&board[2][0]==2){
				board[5][3] = 2;
				board[4][2] = 2;
				board[3][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==4){//7,4黒
			if(board[6][4]==2&&board[5][4]==1){
				board[6][4] = 1;
			}
			if(board[6][4]==2&&board[5][4]==2&&board[4][4]==1){
				board[6][4] = 1;
				board[5][4] = 1;
			}
			if(board[6][4]==2&&board[5][4]==2&&board[4][4]==2&&board[3][4]==1){
				board[6][4] = 1;
				board[5][4] = 1;
				board[4][4] = 1;
			}
			if(board[6][4]==2&&board[5][4]==2&&board[4][4]==2&&board[3][4]==2&&board[2][4]==1){
				board[6][4] = 1;
				board[5][4] = 1;
				board[4][4] = 1;
				board[3][4] = 1;
			}
			if(board[6][4]==2&&board[5][4]==2&&board[4][4]==2&&board[3][4]==2&&board[2][4]==2&&board[1][4]==1){
				board[1][4] = 1;
				board[2][4] = 1;
				board[3][4] = 1;
				board[4][4] = 1;
				board[5][4] = 1;
			}
			if(board[6][4]==2&&board[5][4]==2&&board[4][4]==2&&board[3][4]==2&&board[2][4]==2&&board[1][4]==2&&board[0][4]==1){
				board[6][4] = 1;
				board[5][4] = 1;
				board[4][4] = 1;
				board[3][4] = 1;
				board[2][4] = 1;
				board[1][4] = 1;
			}
			if(board[7][5]==2&&board[7][6]==1){
				board[7][5] = 1;
			}
			if(board[7][3]==2&&board[7][2]==1){
				board[7][3] = 1;
			}
			if(board[7][5]==2&&board[7][6]==2&&board[7][7]==1){
				board[7][5] = 1;
				board[7][6] = 1;
			}
			if(board[7][3]==2&&board[7][2]==2&&board[7][1]==1){
				board[7][3] = 1;
				board[7][2] = 1;
			}
			if(board[7][3]==2&&board[7][2]==2&&board[7][1]==2&&board[7][0]==1){
				board[7][3] = 1;
				board[7][2] = 1;
				board[7][1] = 1;
			}
			if(board[6][5]==2&&board[5][6]==1){
				board[6][5] = 1;
			}
			if(board[6][3]==2&&board[5][2]==1){
				board[6][3] = 1;
			}
			if(board[6][5]==2&&board[5][6]==2&&board[4][7]==1){
				board[6][5] = 1;
				board[5][6] = 1;
			}
			if(board[6][3]==2&&board[5][2]==2&&board[4][1]==1){
				board[6][3] = 1;
				board[5][2] = 1;
			}
			if(board[6][3]==2&&board[5][2]==2&&board[4][1]==2&&board[3][0]==1){
				board[6][3] = 1;
				board[5][2] = 1;
				board[4][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==4){//7,4白
			if(board[6][4]==1&&board[5][4]==2){
				board[6][4] = 2;
			}
			if(board[6][4]==1&&board[5][4]==1&&board[4][4]==2){
				board[6][4] = 2;
				board[5][4] = 2;
			}
			if(board[6][4]==1&&board[5][4]==1&&board[4][4]==1&&board[3][4]==2){
				board[6][4] = 2;
				board[5][4] = 2;
				board[4][4] = 2;
			}
			if(board[6][4]==1&&board[5][4]==1&&board[4][4]==1&&board[3][4]==1&&board[2][4]==2){
				board[6][4] = 2;
				board[5][4] = 2;
				board[4][4] = 2;
				board[3][4] = 2;
			}
			if(board[6][4]==1&&board[5][4]==1&&board[4][4]==1&&board[3][4]==1&&board[2][4]==1&&board[1][4]==2){
				board[6][4] = 2;
				board[5][4] = 2;
				board[4][4] = 2;
				board[3][4] = 2;
				board[2][4] = 2;
			}
			if(board[6][4]==1&&board[5][4]==1&&board[4][4]==1&&board[3][4]==1&&board[2][4]==1&&board[1][4]==1&&board[0][4]==2){
				board[6][4] = 2;
				board[5][4] = 2;
				board[4][4] = 2;
				board[3][4] = 2;
				board[2][4] = 2;
				board[1][4] = 2;
			}
			if(board[7][5]==1&&board[7][6]==2){
				board[7][5] = 2;
			}
			if(board[7][3]==1&&board[7][2]==2){
				board[7][3] = 2;
			}
			if(board[7][5]==1&&board[7][6]==1&&board[7][7]==2){
				board[7][5] = 2;
				board[7][6] = 2;
			}
			if(board[7][3]==1&&board[7][2]==1&&board[7][1]==2){
				board[7][3] = 2;
				board[7][2] = 2;
			}
			if(board[7][3]==1&&board[7][2]==1&&board[7][1]==1&&board[7][0]==2){
				board[7][3] = 2;
				board[7][2] = 2;
				board[7][1] = 2;
			}
			if(board[6][5]==1&&board[5][6]==2){
				board[6][5] = 2;
			}
			if(board[6][3]==1&&board[5][2]==2){
				board[6][1] = 2;
			}
			if(board[6][5]==1&&board[5][6]==1&&board[4][7]==2){
				board[6][5] = 2;
				board[5][6] = 2;
			}
			if(board[6][3]==1&&board[5][2]==1&&board[4][1]==2){
				board[6][3] = 2;
				board[5][2] = 2;
			}
			if(board[6][3]==1&&board[5][2]==1&&board[4][1]==1&&board[3][0]==2){
				board[6][3] = 2;
				board[5][2] = 2;
				board[4][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==5){//0,5黒
			if(board[1][5]==2&&board[2][5]==1){
				board[1][5] = 1;
			}
			if(board[1][5]==2&&board[2][5]==2&&board[3][5]==1){
				board[1][5] = 1;
				board[2][5] = 1;
			}
			if(board[1][5]==2&&board[2][5]==2&&board[3][5]==2&&board[4][5]==1){
				board[1][5] = 1;
				board[2][5] = 1;
				board[3][5] = 1;
			}
			if(board[1][5]==2&&board[2][5]==2&&board[3][5]==2&&board[4][5]==2&&board[5][5]==1){
				board[1][5] = 1;
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
			}
			if(board[1][5]==2&&board[2][5]==2&&board[3][5]==2&&board[4][5]==2&&board[5][5]==2&&board[6][5]==1){
				board[1][5] = 1;
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
			}
			if(board[1][5]==2&&board[2][5]==2&&board[3][5]==2&&board[4][5]==2&&board[5][5]==2&&board[6][5]==2&&board[7][5]==1){
				board[1][5] = 1;
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
				board[6][5] = 1;
				}
			if(board[0][6]==2&&board[0][7]==1){
				board[0][3] = 1;
			}
			if(board[0][4]==2&&board[0][3]==1){
				board[0][4] = 1;
			}
			if(board[0][4]==2&&board[0][3]==2&&board[0][2]==1){
				board[0][4] = 1;
				board[0][3] = 1;
			}
			if(board[0][4]==2&&board[0][3]==2&&board[0][2]==2&&board[0][1]==1){
				board[0][4] = 1;
				board[0][3] = 1;
				board[0][2] = 1;
			}
			if(board[0][4]==2&&board[0][3]==2&&board[0][2]==2&&board[0][1]==2&&board[0][0]==1){
				board[0][4] = 1;
				board[0][3] = 1;
				board[0][2] = 1;
				board[0][1] = 1;
			}
			if(board[1][6]==2&&board[2][7]==1){
				board[1][6] = 1;
			}
			if(board[1][4]==2&&board[2][3]==1){
				board[1][4] = 1;
			}
			if(board[1][4]==2&&board[2][3]==2&&board[3][2]==1){
				board[1][4] = 1;
				board[2][3] = 1;
			}
			if(board[1][4]==2&&board[2][3]==2&&board[3][2]==2&&board[4][1]==1){
				board[1][4] = 1;
				board[2][3] = 1;
				board[3][2] = 1;
			}
			if(board[1][4]==2&&board[2][3]==2&&board[3][2]==2&&board[4][1]==2&&board[5][0]==1){
				board[1][4] = 1;
				board[2][3] = 1;
				board[3][2] = 1;
				board[4][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==5){//0,5白
			if(board[1][5]==1&&board[2][5]==2){
				board[1][5] = 2;
			}
			if(board[1][5]==1&&board[2][5]==1&&board[3][5]==2){
				board[1][5] = 2;
				board[2][5] = 2;
			}
			if(board[1][5]==1&&board[2][5]==1&&board[3][5]==1&&board[4][5]==2){
				board[1][5] = 2;
				board[2][5] = 2;
				board[3][5] = 2;
			}
			if(board[1][5]==1&&board[2][5]==1&&board[3][5]==1&&board[4][5]==1&&board[5][5]==2){
				board[1][5] = 2;
				board[2][5] = 2;
				board[3][5] = 2;
				board[4][5] = 2;
			}
			if(board[1][5]==1&&board[2][5]==1&&board[3][5]==1&&board[4][5]==1&&board[5][5]==1&&board[6][5]==2){
				board[1][5] = 2;
				board[2][5] = 2;
				board[3][5] = 2;
				board[4][5] = 2;
				board[5][5] = 2;
			}
			if(board[1][5]==1&&board[2][5]==1&&board[3][5]==1&&board[4][5]==1&&board[5][5]==1&&board[6][5]==1&&board[7][5]==2){
				board[1][5] = 2;
				board[2][5] = 2;
				board[3][5] = 2;
				board[4][5] = 2;
				board[5][5] = 2;
				board[6][5] = 2;
			}
			if(board[0][6]==1&&board[0][7]==2){
				board[0][6] = 2;
			}
			if(board[0][4]==1&&board[0][3]==2){
				board[0][4] = 2;
			}
			if(board[0][4]==1&&board[0][3]==1&&board[0][2]==2){
				board[0][4] = 2;
				board[0][3] = 2;
			}
			if(board[0][4]==1&&board[0][3]==1&&board[0][2]==1&&board[0][1]==2){
				board[0][4] = 2;
				board[0][3] = 2;
				board[0][2] = 2;
			}
			if(board[0][4]==1&&board[0][3]==1&&board[0][2]==1&&board[0][1]==1&&board[0][0]==2){
				board[0][4] = 2;
				board[0][3] = 2;
				board[0][2] = 2;
				board[0][1] = 2;
			}
			if(board[1][6]==1&&board[2][7]==2){
				board[1][6] = 2;
			}
			if(board[1][4]==1&&board[2][3]==2){
				board[1][4] = 2;
			}
			if(board[1][4]==1&&board[2][3]==1&&board[3][2]==2){
				board[1][4] = 2;
				board[2][3] = 2;
			}
			if(board[1][4]==1&&board[2][3]==1&&board[3][2]==1&&board[4][1]==2){
				board[1][4] = 2;
				board[2][3] = 2;
				board[3][2] = 2;
			}
			if(board[1][4]==1&&board[2][3]==1&&board[3][2]==2&&board[4][1]==1&&board[5][0]==2){
				board[1][4] = 2;
				board[2][3] = 2;
				board[3][2] = 2;
				board[4][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==5){//1,5黒
			if(board[2][5]==2&&board[3][5]==1){
				board[2][5] = 1;
			}
			if(board[2][5]==2&&board[3][5]==2&&board[4][5]==1){
				board[2][5] = 1;
				board[3][5] = 1;
			}
			if(board[2][5]==2&&board[3][5]==2&&board[4][5]==2&&board[5][5]==1){
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
			}
			if(board[2][5]==2&&board[3][5]==2&&board[4][5]==2&&board[5][5]==2&&board[6][5]==1){
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
			}
			if(board[2][5]==2&&board[3][5]==2&&board[4][5]==2&&board[5][5]==2&&board[6][5]==2&&board[7][5]==1){
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
				board[6][5] = 1;
			}
			if(board[1][6]==2&&board[1][7]==1){
				board[1][6] = 1;
			}
			if(board[1][4]==2&&board[1][3]==1){
				board[1][4] = 1;
			}
			if(board[1][4]==2&&board[1][3]==2&&board[1][2]==1){
				board[1][4] = 1;
				board[1][3] = 1;
			}
			if(board[1][4]==2&&board[1][3]==2&&board[1][2]==2&&board[1][1]==1){
				board[1][4] = 1;
				board[1][3] = 1;
				board[1][2] = 1;
			}
			if(board[1][4]==2&&board[1][3]==2&&board[1][2]==2&&board[1][1]==2&&board[1][0]==1){
				board[1][4] = 1;
				board[1][3] = 1;
				board[1][2] = 1;
				board[1][1] = 1;
			}
			if(board[2][6]==2&&board[3][7]==1){
				board[2][6] = 1;
			}
			if(board[2][4]==2&&board[3][3]==1){
				board[2][4] = 1;
			}
			if(board[2][4]==2&&board[3][3]==2&&board[4][2]==1){
				board[2][4] = 1;
				board[3][3] = 1;
			}
			if(board[2][4]==2&&board[3][3]==2&&board[4][2]==2&&board[5][1]==1){
				board[2][4] = 1;
				board[3][3] = 1;
				board[4][2] = 1;
			}
			if(board[2][4]==2&&board[3][3]==2&&board[4][2]==2&&board[5][1]==2&&board[6][0]==1){
				board[2][4] = 1;
				board[3][3] = 1;
				board[4][2] = 1;
				board[5][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==5){//1,5白
			if(board[2][5]==1&&board[3][5]==2){
				board[2][5] = 2;
			}
			if(board[2][5]==1&&board[3][5]==1&&board[4][5]==2){
				board[2][5] = 2;
				board[3][5] = 2;
			}
			if(board[2][5]==1&&board[3][5]==1&&board[4][5]==1&&board[5][5]==2){
				board[2][5] = 2;
				board[3][5] = 2;
				board[4][5] = 2;
			}
			if(board[2][5]==1&&board[3][5]==1&&board[4][5]==1&&board[5][5]==1&&board[6][5]==2){
				board[2][5] = 2;
				board[3][5] = 2;
				board[4][5] = 2;
				board[5][5] = 2;
			}
			if(board[2][5]==1&&board[3][5]==1&&board[4][5]==1&&board[5][5]==1&&board[6][5]==1&&board[7][5]==2){
				board[2][5] = 2;
				board[3][5] = 2;
				board[4][5] = 2;
				board[5][5] = 2;
				board[6][5] = 2;
			}
			if(board[1][6]==1&&board[1][7]==2){
				board[1][6] = 2;
			}
			if(board[1][4]==1&&board[1][3]==2){
				board[1][4] = 2;
			}
			if(board[1][4]==1&&board[1][3]==1&&board[1][2]==2){
				board[1][4] = 2;
				board[1][3] = 2;
			}
			if(board[1][4]==1&&board[1][3]==1&&board[1][2]==1&&board[1][1]==2){
				board[1][4] = 2;
				board[1][3] = 2;
				board[1][2] = 2;
			}
			if(board[1][4]==1&&board[1][3]==1&&board[1][2]==1&&board[1][1]==1&&board[1][0]==2){
				board[1][4] = 2;
				board[1][3] = 2;
				board[1][2] = 2;
				board[1][1] = 2;
			}
			if(board[2][6]==1&&board[3][7]==2){
				board[2][6] = 2;
			}
			if(board[2][4]==1&&board[3][3]==2){
				board[2][4] = 2;
			}
			if(board[2][4]==1&&board[3][3]==1&&board[4][2]==2){
				board[2][4] = 2;
				board[3][3] = 2;
			}
			if(board[2][4]==1&&board[3][3]==1&&board[4][2]==1&&board[5][1]==2){
				board[2][4] = 2;
				board[3][3] = 2;
				board[4][2] = 2;
			}
			if(board[2][4]==1&&board[3][3]==1&&board[4][2]==1&&board[5][1]==1&&board[6][0]==2){
				board[2][4] = 2;
				board[3][3] = 2;
				board[4][2] = 2;
				board[5][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==5){//2,5黒
			if(board[3][5]==2&&board[4][5]==1){
				board[3][5] = 1;
			}
			if(board[1][5]==2&&board[0][5]==1){
				board[1][5] = 1;
			}
			if(board[3][5]==2&&board[4][5]==2&&board[5][5]==1){
				board[3][5] = 1;
				board[4][5] = 1;
			}
			if(board[3][5]==2&&board[4][5]==2&&board[5][5]==2&&board[6][5]==1){
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
			}
			if(board[3][5]==2&&board[4][5]==2&&board[5][5]==2&&board[6][5]==2&&board[7][5]==1){
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
				board[6][5] = 1;
			}
			if(board[2][6]==2&&board[2][7]==1){
				board[2][6] = 1;
			}
			if(board[2][4]==2&&board[2][3]==1){
				board[2][4] = 1;
			}
			if(board[2][4]==2&&board[2][3]==2&&board[2][2]==1){
				board[2][4] = 1;
				board[2][3] = 1;
			}
			if(board[2][4]==2&&board[2][3]==2&&board[2][2]==2&&board[2][1]==1){
				board[2][4] = 1;
				board[2][3] = 1;
				board[2][2] = 1;
			}
			if(board[2][4]==2&&board[2][3]==2&&board[2][2]==2&&board[2][1]==2&&board[2][0]==1){
				board[2][4] = 1;
				board[2][3] = 1;
				board[2][2] = 1;
				board[2][1] = 1;
			}
			if(board[3][6]==2&&board[4][7]==1){
				board[3][6] = 1;
			}
			if(board[1][6]==2&&board[0][7]==1){
				board[1][6] = 1;
			}
			if(board[1][4]==2&&board[0][3]==1){
				board[1][1] = 1;
			}
			if(board[3][4]==2&&board[4][3]==1){
				board[3][1] = 1;
			}
			if(board[3][4]==2&&board[4][3]==2&&board[5][2]==1){
				board[3][4] = 1;
				board[4][3] = 1;
			}
			if(board[3][4]==2&&board[4][3]==2&&board[5][2]==2&&board[6][1]==1){
				board[3][4] = 1;
				board[4][3] = 1;
				board[5][2] = 1;
			}
			if(board[3][4]==2&&board[4][3]==2&&board[5][2]==2&&board[6][1]==2&&board[7][0]==1){
				board[3][4] = 1;
				board[4][3] = 1;
				board[5][2] = 1;
				board[6][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==5){//2,5白
			if(board[3][5]==1&&board[4][5]==2){
				board[3][5] = 2;
			}
			if(board[1][5]==1&&board[0][5]==2){
				board[1][5] = 2;
			}
			if(board[3][5]==1&&board[4][5]==1&&board[5][5]==2){
				board[3][5] = 2;
				board[4][5] = 2;
			}
			if(board[3][5]==1&&board[4][5]==1&&board[5][5]==1&&board[6][5]==2){
				board[3][5] = 2;
				board[4][5] = 2;
				board[5][5] = 2;
			}
			if(board[3][5]==1&&board[4][5]==1&&board[5][5]==1&&board[6][5]==1&&board[7][5]==2){
				board[3][5] = 2;
				board[4][5] = 2;
				board[5][5] = 2;
				board[6][5] = 2;
			}
			if(board[2][6]==1&&board[2][7]==2){
				board[2][6] = 2;
			}
			if(board[2][4]==1&&board[2][3]==2){
				board[2][4] = 2;
			}
			if(board[2][4]==1&&board[2][3]==1&&board[2][2]==2){
				board[2][4] = 2;
				board[2][3] = 2;
			}
			if(board[2][4]==1&&board[2][3]==1&&board[2][2]==1&&board[2][1]==2){
				board[2][4] = 2;
				board[2][3] = 2;
				board[2][2] = 2;
			}
			if(board[2][4]==1&&board[2][3]==1&&board[2][2]==1&&board[2][1]==1&&board[2][0]==2){
				board[2][4] = 2;
				board[2][3] = 2;
				board[2][2] = 2;
				board[2][1] = 2;
			}
			if(board[3][6]==1&&board[4][7]==2){
				board[3][6] = 2;
			}
			if(board[1][4]==1&&board[0][3]==2){
				board[1][4] = 2;
			}
			if(board[1][6]==1&&board[0][7]==2){
				board[1][6] = 2;
			}
			if(board[3][4]==1&&board[4][3]==2){
				board[3][4] = 2;
			}
			if(board[3][4]==1&&board[4][3]==1&&board[5][2]==2){
				board[3][4] = 2;
				board[4][3] = 2;
			}
			if(board[3][4]==1&&board[4][3]==1&&board[5][2]==1&&board[6][1]==2){
				board[3][4] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
			}
			if(board[3][4]==1&&board[4][3]==1&&board[5][2]==1&&board[6][1]==1&&board[7][0]==2){
				board[3][4] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
				board[6][1] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==3&&retu==5){//3,5黒
			if(board[4][5]==2&&board[5][5]==1){
				board[4][5] = 1;
			}
			if(board[2][5]==2&&board[1][5]==1){
				board[2][5] = 1;
			}
			if(board[4][5]==2&&board[5][5]==2&&board[6][5]==1){
				board[4][5] = 1;
				board[5][5] = 1;
			}
			if(board[2][5]==2&&board[1][5]==2&&board[0][5]==1){
				board[2][5] = 1;
				board[1][5] = 1;
			}
			if(board[4][5]==2&&board[5][5]==2&&board[6][5]==2&&board[7][5]==1){
				board[4][5] = 1;
				board[5][5] = 1;
				board[6][5] = 1;
			}
			if(board[3][6]==2&&board[3][7]==1){
				board[3][6] = 1;
			}
			if(board[3][4]==2&&board[3][3]==1){
				board[3][4] = 1;
			}
			if(board[3][4]==2&&board[3][3]==2&&board[3][2]==1){
				board[3][4] = 1;
				board[3][3] = 1;
			}
			if(board[3][4]==2&&board[3][3]==2&&board[3][2]==2&&board[3][1]==1){
				board[3][4] = 1;
				board[3][3] = 1;
				board[3][2] = 1;
			}
			if(board[3][4]==2&&board[3][3]==2&&board[3][2]==2&&board[3][1]==2&&board[3][0]==1){
				board[3][4] = 1;
				board[3][3] = 1;
				board[3][2] = 1;
				board[3][1] = 1;
			}
			if(board[4][6]==2&&board[5][7]==1){
				board[4][6] = 1;
			}
			if(board[2][4]==2&&board[1][3]==1){
				board[2][4] = 1;
			}
			if(board[4][4]==2&&board[5][3]==1){
				board[4][1] = 1;
			}
			if(board[2][6]==2&&board[1][7]==1){
				board[2][6] = 1;
			}
			if(board[4][4]==2&&board[5][3]==2&&board[6][2]==1){
				board[4][4] = 1;
				board[5][3] = 1;
			}
			if(board[2][4]==2&&board[1][3]==2&&board[0][2]==1){
				board[2][4] = 1;
				board[1][3] = 1;
			}
			if(board[4][4]==2&&board[5][3]==2&&board[6][2]==2&&board[7][1]==1){
				board[4][4] = 1;
				board[5][3] = 1;
				board[6][2] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==3&&retu==5){//3,5白
			if(board[4][5]==1&&board[5][5]==2){
				board[4][5] = 2;
			}
			if(board[2][5]==1&&board[1][5]==2){
				board[2][5] = 2;
			}
			if(board[4][5]==1&&board[5][5]==1&&board[6][5]==2){
				board[4][5] = 2;
				board[5][5] = 2;
			}
			if(board[2][5]==1&&board[1][5]==1&&board[0][5]==2){
				board[2][5] = 2;
				board[1][5] = 2;
			}
			if(board[4][5]==1&&board[5][5]==1&&board[6][5]==1&&board[7][5]==2){
				board[4][5] = 2;
				board[5][5] = 2;
				board[6][5] = 2;
			}
			if(board[3][6]==1&&board[3][7]==2){
				board[3][6] = 2;
			}
			if(board[3][4]==1&&board[3][3]==2){
				board[3][4] = 2;
			}
			if(board[3][4]==1&&board[3][3]==1&&board[3][2]==2){
				board[3][4] = 2;
				board[3][3] = 2;
			}
			if(board[3][4]==1&&board[3][3]==1&&board[3][2]==1&&board[3][1]==2){
				board[3][4] = 2;
				board[3][3] = 2;
				board[3][2] = 2;
			}
			if(board[3][4]==1&&board[3][3]==1&&board[3][2]==1&&board[3][1]==1&&board[3][0]==2){
				board[3][4] = 2;
				board[3][3] = 2;
				board[3][2] = 2;
				board[3][1] = 2;
			}
			if(board[4][6]==1&&board[5][7]==2){
				board[4][6] = 2;
			}
			if(board[2][4]==1&&board[1][3]==2){
				board[2][4] = 2;
			}
			if(board[4][4]==1&&board[5][3]==2){
				board[4][4] = 2;
			}
			if(board[2][6]==1&&board[1][7]==2){
				board[2][6] = 2;
			}
			if(board[4][4]==1&&board[5][3]==1&&board[6][2]==2){
				board[4][4] = 2;
				board[5][3] = 2;
			}
			if(board[2][4]==1&&board[1][3]==1&&board[0][2]==2){
				board[2][4] = 2;
				board[1][3] = 2;
			}
			if(board[4][4]==1&&board[5][3]==1&&board[6][2]==1&&board[7][1]==2){
				board[4][4] = 2;
				board[5][3] = 2;
				board[6][2] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==4&&retu==5){//4,2黒
			if(board[5][5]==2&&board[6][5]==1){
				board[5][5] = 1;
			}
			if(board[3][5]==2&&board[2][5]==1){
				board[3][5] = 1;
			}
			if(board[5][5]==2&&board[6][5]==2&&board[7][5]==1){
				board[5][5] = 1;
				board[6][5] = 1;
			}
			if(board[3][5]==2&&board[2][5]==2&&board[1][5]==1){
				board[3][5] = 1;
				board[2][5] = 1;
			}
			if(board[3][5]==2&&board[2][5]==2&&board[1][5]==1&&board[0][2]==1){
				board[3][5] = 1;
				board[2][5] = 1;
				board[1][5] = 1;
			}
			if(board[4][6]==2&&board[4][7]==1){
				board[4][4] = 1;
			}
			if(board[4][4]==2&&board[4][3]==1){
				board[4][4] = 1;
			}
			if(board[4][4]==2&&board[4][3]==2&&board[4][2]==1){
				board[4][4] = 1;
				board[4][3] = 1;
			}
			if(board[4][4]==2&&board[4][3]==2&&board[4][2]==2&&board[4][1]==1){
				board[4][4] = 1;
				board[4][3] = 1;
				board[4][2] = 1;
			}
			if(board[4][4]==2&&board[4][3]==2&&board[4][2]==2&&board[4][1]==2&&board[4][0]==1){
				board[4][4] = 1;
				board[4][3] = 1;
				board[4][2] = 1;
				board[4][1] = 1;
			}
			if(board[5][6]==2&&board[6][7]==1){
				board[5][6] = 1;
			}
			if(board[3][6]==2&&board[2][7]==1){
				board[3][6] = 1;
			}
			if(board[5][4]==2&&board[6][3]==1){
				board[5][4] = 1;
			}
			if(board[3][4]==2&&board[2][3]==1){
				board[3][4] = 1;
			}
			if(board[5][4]==2&&board[6][3]==2&&board[7][2]==1){
				board[5][4] = 1;
				board[6][3] = 1;
			}
			if(board[3][4]==2&&board[2][3]==2&&board[1][2]==1){
				board[3][4] = 1;
				board[2][3] = 1;
			}
			if(board[3][4]==2&&board[2][3]==2&&board[1][2]==2&&board[0][1]==1){
				board[3][4] = 1;
				board[2][3] = 1;
				board[1][2] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==4&&retu==5){//4,5白
			if(board[5][5]==1&&board[6][5]==2){
				board[5][5] = 2;
			}
			if(board[3][5]==1&&board[2][5]==2){
				board[3][5] = 2;
			}
			if(board[5][5]==1&&board[6][5]==1&&board[7][5]==2){
				board[5][5] = 2;
				board[6][5] = 2;
			}
			if(board[3][5]==1&&board[2][5]==1&&board[1][5]==2){
				board[3][5] = 2;
				board[2][5] = 2;
			}
			if(board[3][5]==1&&board[2][5]==1&&board[1][5]==1&&board[0][5]==2){
				board[3][5] = 2;
				board[2][5] = 2;
				board[1][5] = 2;
			}
			if(board[4][6]==1&&board[4][7]==2){
				board[4][6] = 2;
			}
			if(board[4][4]==1&&board[4][3]==2){
				board[4][4] = 2;
			}
			if(board[4][4]==1&&board[4][3]==1&&board[4][2]==2){
				board[4][4] = 2;
				board[4][3] = 2;
			}
			if(board[4][4]==1&&board[4][3]==1&&board[4][2]==1&&board[4][1]==2){
				board[4][4] = 2;
				board[4][3] = 2;
				board[4][2] = 2;
			}
			if(board[4][4]==1&&board[4][3]==1&&board[4][2]==1&&board[4][1]==1&&board[4][0]==2){
				board[4][4] = 2;
				board[4][3] = 2;
				board[4][2] = 2;
				board[4][1] = 2;
			}
			if(board[5][6]==1&&board[6][7]==2){
				board[5][6] = 2;
			}
			if(board[3][6]==1&&board[2][7]==2){
				board[3][6] = 2;
			}
			if(board[5][4]==1&&board[6][3]==2){
				board[5][4] = 2;
			}
			if(board[3][4]==1&&board[2][3]==2){
				board[3][4] = 2;
			}
			if(board[5][4]==1&&board[6][3]==1&&board[7][2]==2){
				board[5][4] = 2;
				board[6][3] = 2;
			}
			if(board[3][4]==1&&board[2][3]==1&&board[1][2]==2){
				board[3][4] = 2;
				board[2][3] = 2;
			}
			if(board[3][4]==1&&board[2][3]==1&&board[1][2]==1&&board[0][1]==2){
				board[3][4] = 2;
				board[2][3] = 2;
				board[1][2] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==5){//5,5黒
			if(board[6][5]==2&&board[7][5]==1){
				board[6][5] = 1;
			}
			if(board[4][5]==2&&board[3][5]==1){
				board[4][5] = 1;
			}
			if(board[4][5]==2&&board[3][5]==2&&board[2][5]==1){
				board[4][5] = 1;
				board[3][5] = 1;
			}
			if(board[4][5]==2&&board[3][5]==2&&board[2][5]==2&&board[1][5]==1){
				board[4][5] = 1;
				board[3][5] = 1;
				board[2][5] = 1;
			}
			if(board[4][5]==2&&board[3][5]==2&&board[2][5]==2&&board[1][5]==2&&board[0][5]==1){
				board[4][5] = 1;
				board[3][5] = 1;
				board[2][5] = 1;
				board[1][5] = 1;
			}
			if(board[5][6]==2&&board[5][7]==1){
				board[5][6] = 1;
			}
			if(board[5][4]==2&&board[5][3]==1){
				board[5][4] = 1;
			}
			if(board[5][4]==2&&board[5][3]==2&&board[5][2]==1){
				board[5][4] = 1;
				board[5][3] = 1;
			}
			if(board[5][4]==2&&board[5][3]==2&&board[5][2]==2&&board[5][1]==1){
				board[5][4] = 1;
				board[5][3] = 1;
				board[5][2] = 1;
			}
			if(board[5][4]==2&&board[5][3]==2&&board[5][2]==2&&board[5][1]==2&&board[5][0]==1){
				board[5][4] = 1;
				board[5][3] = 1;
				board[5][2] = 1;
				board[5][1] = 1;
			}
			if(board[6][6]==2&&board[7][7]==1){
				board[6][6] = 1;
			}
			if(board[4][6]==2&&board[3][7]==1){
				board[4][6] = 1;
			}
			if(board[6][4]==2&&board[7][3]==1){
				board[6][4] = 1;
			}
			if(board[4][4]==2&&board[3][3]==1){
				board[4][4] = 1;
			}
			if(board[4][4]==2&&board[3][3]==2&&board[2][2]==1){
				board[4][4] = 1;
				board[3][3] = 1;
			}
			if(board[4][4]==2&&board[3][3]==2&&board[2][2]==2&&board[1][1]==1){
				board[4][4] = 1;
				board[3][3] = 1;
				board[2][2] = 1;
			}
			if(board[4][4]==2&&board[3][3]==2&&board[2][2]==2&&board[1][1]==2&&board[0][0]==1){
				board[4][4] = 1;
				board[3][3] = 1;
				board[2][2] = 1;
				board[1][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==5){//5,5白
			if(board[6][5]==1&&board[7][5]==2){
				board[6][5] = 2;
			}
			if(board[4][5]==1&&board[3][5]==2){
				board[4][5] = 2;
			}
			if(board[4][5]==1&&board[3][5]==1&&board[2][5]==2){
				board[4][5] = 2;
				board[3][5] = 2;
			}
			if(board[4][5]==1&&board[3][5]==1&&board[2][5]==1&&board[1][5]==2){
				board[4][5] = 2;
				board[3][5] = 2;
				board[2][5] = 2;
			}
			if(board[4][5]==1&&board[3][5]==1&&board[2][5]==1&&board[1][5]==1&&board[0][5]==2){
				board[4][5] = 2;
				board[3][5] = 2;
				board[2][5] = 2;
				board[1][5] = 2;
			}
			if(board[5][6]==1&&board[5][7]==1){
				board[5][6] = 2;
			}
			if(board[5][4]==1&&board[5][3]==1){
				board[5][4] = 2;
			}
			if(board[5][4]==1&&board[5][3]==1&&board[5][2]==2){
				board[5][4] = 2;
				board[5][3] = 2;
			}
			if(board[5][4]==1&&board[5][3]==1&&board[5][2]==1&&board[5][1]==2){
				board[5][4] = 2;
				board[5][3] = 2;
				board[5][2] = 2;
			}
			if(board[5][4]==1&&board[5][3]==1&&board[5][2]==1&&board[5][1]==1&&board[5][0]==2){
				board[5][4] = 2;
				board[5][3] = 2;
				board[5][2] = 2;
				board[5][1] = 2;
			}
			if(board[6][6]==1&&board[7][7]==2){
				board[6][6] = 2;
			}
			if(board[4][6]==1&&board[3][7]==2){
				board[4][6] = 2;
			}
			if(board[6][4]==1&&board[7][3]==2){
				board[6][4] = 2;
			}
			if(board[4][4]==1&&board[3][3]==2){
				board[4][4] = 2;
			}
			if(board[4][4]==1&&board[3][3]==1&&board[2][2]==2){
				board[4][4] = 2;
				board[3][3] = 2;
			}
			if(board[4][4]==1&&board[3][3]==1&&board[2][2]==1&&board[1][1]==2){
				board[4][4] = 2;
				board[3][3] = 2;
				board[2][2] = 2;
			}
			if(board[4][4]==1&&board[3][3]==1&&board[2][2]==1&&board[1][1]==1&&board[0][0]==2){
				board[4][4] = 2;
				board[3][3] = 2;
				board[2][2] = 2;
				board[1][1] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==6&&retu==5){//6,5黒
			if(board[5][5]==2&&board[4][5]==1){
				board[5][5] = 1;
			}
			if(board[5][5]==2&&board[4][5]==2&&board[3][5]==1){
				board[5][5] = 1;
				board[4][5] = 1;
			}
			if(board[5][5]==2&&board[4][5]==2&&board[3][5]==2&&board[2][5]==1){
				board[5][5] = 1;
				board[4][5] = 1;
				board[3][5] = 1;
			}
			if(board[5][5]==2&&board[4][5]==2&&board[3][5]==2&&board[2][5]==2&&board[1][5]==1){
				board[5][5] = 1;
				board[4][5] = 1;
				board[3][5] = 1;
				board[2][5] = 1;
			}
			if(board[5][5]==2&&board[4][5]==2&&board[3][5]==2&&board[2][5]==2&&board[1][5]==2&&board[0][5]==1){
				board[5][5] = 1;
				board[4][5] = 1;
				board[3][5] = 1;
				board[2][5] = 1;
				board[1][5] = 1;
			}
			if(board[6][6]==2&&board[6][7]==1){
				board[6][6] = 1;
			}
			if(board[6][4]==2&&board[6][3]==1){
				board[6][4] = 1;
			}
			if(board[6][4]==2&&board[6][3]==2&&board[6][2]==1){
				board[6][4] = 1;
				board[6][3] = 1;
			}
			if(board[6][4]==2&&board[6][3]==2&&board[6][2]==2&&board[6][1]==1){
				board[6][4] = 1;
				board[6][3] = 1;
				board[6][2] = 1;
			}
			if(board[6][4]==2&&board[6][3]==2&&board[6][2]==2&&board[6][1]==2&&board[6][0]==1){
				board[6][4] = 1;
				board[6][3] = 1;
				board[6][2] = 1;
				board[6][1] = 1;
			}
			if(board[5][6]==2&&board[4][7]==1){
				board[5][6] = 1;
			}
			if(board[5][4]==2&&board[4][3]==1){
				board[5][4] = 1;
			}
			if(board[5][4]==2&&board[4][3]==2&&board[3][2]==1){
				board[5][4] = 1;
				board[4][3] = 1;
			}
			if(board[5][4]==2&&board[4][3]==2&&board[3][2]==2&&board[2][1]==1){
				board[5][4] = 1;
				board[4][3] = 1;
				board[3][2] = 1;
			}
			if(board[5][4]==2&&board[4][3]==2&&board[3][2]==2&&board[2][1]==2&&board[1][0]==1){
				board[5][4] = 1;
				board[4][3] = 1;
				board[3][2] = 1;
				board[2][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==5){//6,5白
			if(board[5][5]==1&&board[4][5]==2){
				board[5][5] = 2;
			}
			if(board[5][5]==1&&board[4][5]==1&&board[3][5]==2){
				board[5][5] = 2;
				board[4][5] = 2;
			}
			if(board[5][5]==1&&board[4][5]==1&&board[3][5]==1&&board[2][5]==2){
				board[5][5] = 2;
				board[4][5] = 2;
				board[3][5] = 2;
			}
			if(board[5][5]==1&&board[4][5]==1&&board[3][5]==1&&board[2][5]==1&&board[1][5]==2){
				board[5][5] = 2;
				board[4][5] = 2;
				board[3][5] = 2;
				board[2][5] = 2;
			}
			if(board[5][5]==1&&board[4][5]==1&&board[3][5]==1&&board[2][5]==1&&board[1][5]==1&&board[0][5]==2){
				board[5][5] = 2;
				board[4][5] = 2;
				board[3][5] = 2;
				board[2][5] = 2;
				board[1][5] = 2;
			}
			if(board[6][6]==1&&board[6][7]==2){
				board[6][6] = 2;
			}
			if(board[6][4]==1&&board[6][3]==2){
				board[6][4] = 2;
			}
			if(board[6][4]==1&&board[6][3]==1&&board[6][2]==2){
				board[6][4] = 2;
				board[6][3] = 2;
			}
			if(board[6][4]==1&&board[6][3]==1&&board[6][2]==1&&board[6][1]==2){
				board[6][4] = 2;
				board[6][3] = 2;
				board[6][2] = 2;
			}
			if(board[6][4]==1&&board[6][3]==1&&board[6][2]==1&&board[6][1]==1&&board[6][0]==2){
				board[6][4] = 2;
				board[6][3] = 2;
				board[6][2] = 2;
				board[6][1] = 2;
			}
			if(board[5][6]==1&&board[4][7]==2){
				board[5][6] = 2;
			}
			if(board[5][4]==1&&board[4][3]==2){
				board[5][4] = 2;
			}
			if(board[5][4]==1&&board[4][3]==1&&board[3][2]==2){
				board[5][4] = 2;
				board[4][3] = 2;
			}
			if(board[5][4]==1&&board[4][3]==1&&board[3][2]==1&&board[2][1]==2){
				board[5][4] = 2;
				board[4][3] = 2;
				board[3][2] = 2;
			}
			if(board[5][4]==1&&board[4][3]==1&&board[3][2]==1&&board[2][1]==1&&board[1][0]==2){
				board[5][4] = 2;
				board[4][3] = 2;
				board[3][2] = 2;
				board[2][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==5){//7,5黒
			if(board[6][5]==2&&board[5][5]==1){
				board[6][5] = 1;
			}
			if(board[6][5]==2&&board[5][5]==2&&board[4][5]==1){
				board[6][5] = 1;
				board[5][5] = 1;
			}
			if(board[6][5]==2&&board[5][5]==2&&board[4][5]==2&&board[3][5]==1){
				board[6][5] = 1;
				board[5][5] = 1;
				board[4][5] = 1;
			}
			if(board[6][5]==2&&board[5][5]==2&&board[4][5]==2&&board[3][5]==2&&board[2][5]==1){
				board[6][5] = 1;
				board[5][5] = 1;
				board[4][5] = 1;
				board[3][5] = 1;
			}
			if(board[6][5]==2&&board[5][5]==2&&board[4][5]==2&&board[3][5]==2&&board[2][5]==2&&board[1][5]==1){
				board[1][5] = 1;
				board[2][5] = 1;
				board[3][5] = 1;
				board[4][5] = 1;
				board[5][5] = 1;
			}
			if(board[6][5]==2&&board[5][5]==2&&board[4][5]==2&&board[3][5]==2&&board[2][5]==2&&board[1][5]==2&&board[0][5]==1){
				board[6][5] = 1;
				board[5][5] = 1;
				board[4][5] = 1;
				board[3][5] = 1;
				board[2][5] = 1;
				board[1][5] = 1;
			}
			if(board[7][6]==2&&board[7][7]==1){
				board[7][6] = 1;
			}
			if(board[7][4]==2&&board[7][3]==1){
				board[7][4] = 1;
			}
			if(board[7][4]==2&&board[7][3]==2&&board[7][2]==1){
				board[7][4] = 1;
				board[7][3] = 1;
			}
			if(board[7][4]==2&&board[7][3]==2&&board[7][2]==2&&board[7][1]==1){
				board[7][4] = 1;
				board[7][3] = 1;
				board[7][2] = 1;
			}
			if(board[7][4]==2&&board[7][3]==2&&board[7][2]==2&&board[7][1]==2&&board[7][0]==1){
				board[7][4] = 1;
				board[7][3] = 1;
				board[7][2] = 1;
				board[7][1] = 1;
			}
			if(board[6][6]==2&&board[5][7]==1){
				board[6][6] = 1;
			}
			if(board[6][4]==2&&board[5][3]==1){
				board[6][4] = 1;
			}
			if(board[6][4]==2&&board[5][3]==2&&board[4][2]==1){
				board[6][4] = 1;
				board[5][3] = 1;
			}
			if(board[6][4]==2&&board[5][3]==2&&board[4][2]==2&&board[3][1]==1){
				board[6][4] = 1;
				board[5][3] = 1;
				board[4][2] = 1;
			}
			if(board[6][4]==2&&board[5][3]==2&&board[4][2]==2&&board[3][1]==2&&board[5][0]==1){
				board[6][4] = 1;
				board[5][3] = 1;
				board[4][2] = 1;
				board[3][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==5){//7,5白
			if(board[6][5]==1&&board[5][5]==2){
				board[6][5] = 2;
			}
			if(board[6][5]==1&&board[5][5]==1&&board[4][5]==2){
				board[6][5] = 2;
				board[5][5] = 2;
			}
			if(board[6][5]==1&&board[5][5]==1&&board[4][5]==1&&board[3][5]==2){
				board[6][5] = 2;
				board[5][5] = 2;
				board[4][5] = 2;
			}
			if(board[6][5]==1&&board[5][5]==1&&board[4][5]==1&&board[3][5]==1&&board[2][5]==2){
				board[6][5] = 2;
				board[5][5] = 2;
				board[4][5] = 2;
				board[3][5] = 2;
			}
			if(board[6][5]==1&&board[5][5]==1&&board[4][5]==1&&board[3][5]==1&&board[2][5]==1&&board[1][5]==2){
				board[6][5] = 2;
				board[5][5] = 2;
				board[4][5] = 2;
				board[3][5] = 2;
				board[2][5] = 2;
			}
			if(board[6][5]==1&&board[5][5]==1&&board[4][5]==1&&board[3][5]==1&&board[2][5]==1&&board[1][5]==1&&board[0][5]==2){
				board[6][5] = 2;
				board[5][5] = 2;
				board[4][5] = 2;
				board[3][5] = 2;
				board[2][5] = 2;
				board[1][5] = 2;
			}
			if(board[7][6]==1&&board[7][7]==2){
				board[7][6] = 2;
			}
			if(board[7][4]==1&&board[7][3]==2){
				board[7][4] = 2;
			}
			if(board[7][4]==1&&board[7][3]==1&&board[7][2]==2){
				board[7][4] = 2;
				board[7][3] = 2;
			}
			if(board[7][4]==1&&board[7][3]==1&&board[7][2]==1&&board[7][1]==2){
				board[7][4] = 2;
				board[7][3] = 2;
				board[7][2] = 2;
			}
			if(board[7][4]==1&&board[7][3]==1&&board[7][2]==1&&board[7][1]==1&&board[7][0]==2){
				board[7][4] = 2;
				board[7][3] = 2;
				board[7][2] = 2;
				board[7][1] = 2;
			}
			if(board[6][6]==1&&board[5][7]==2){
				board[6][6] = 2;
			}
			if(board[6][4]==1&&board[5][3]==2){
				board[6][4] = 2;
			}
			if(board[6][4]==1&&board[5][3]==1&&board[4][2]==2){
				board[6][4] = 2;
				board[5][3] = 2;
			}
			if(board[6][4]==1&&board[5][3]==1&&board[4][2]==1&&board[3][1]==2){
				board[6][4] = 2;
				board[5][3] = 2;
				board[4][2] = 2;
			}
			if(board[6][4]==1&&board[5][3]==1&&board[4][2]==1&&board[3][1]==1&&board[2][0]==2){
				board[6][4] = 2;
				board[5][3] = 2;
				board[4][2] = 2;
				board[3][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==6){//0,6黒
			
			if(board[1][6]==2&&board[2][6]==1){
				board[1][6] = 1;
			}
			if(board[1][6]==2&&board[2][6]==2&&board[3][6]==1){
				board[1][6] = 1;
				board[2][6] = 1;
			}
			if(board[1][6]==2&&board[2][6]==2&&board[3][6]==2&&board[4][6]==1){
				board[1][6] = 1;
				board[2][6] = 1;
				board[3][6] = 1;
			}
			if(board[1][6]==2&&board[2][6]==2&&board[3][6]==2&&board[4][6]==2&&board[5][6]==1){
				board[1][6] = 1;
				board[2][6] = 1;
				board[3][6] = 1;
				board[4][6] = 1;
			}
			if(board[1][6]==2&&board[2][6]==2&&board[3][6]==2&&board[4][6]==2&&board[5][6]==2&&board[6][6]==1){
				board[1][6] = 1;
				board[2][6] = 1;
				board[3][6] = 1;
				board[4][6] = 1;
				board[5][6] = 1;
			}
			if(board[1][6]==2&&board[2][6]==2&&board[3][6]==2&&board[4][6]==2&&board[5][6]==2&&board[6][6]==2&&board[7][6]==1){
				board[1][6] = 1;
				board[2][6] = 1;
				board[3][6] = 1;
				board[4][6] = 1;
				board[5][6] = 1;
				board[6][6] = 1;
				}
			if(board[0][5]==2&&board[0][4]==1){
				board[0][5] = 1;
			}
			if(board[0][5]==2&&board[0][4]==2&&board[0][3]==1){
				board[0][5] = 1;
				board[0][4] = 1;
			}
			if(board[0][5]==2&&board[0][4]==2&&board[0][3]==2&&board[0][2]==1){
				board[0][5] = 1;
				board[0][4] = 1;
				board[0][3] = 1;
			}
			if(board[0][5]==2&&board[0][4]==2&&board[0][3]==2&&board[0][2]==2&&board[0][1]==1){
				board[0][5] = 1;
				board[0][4] = 1;
				board[0][3] = 1;
				board[0][2] = 1;
			}
			if(board[0][5]==2&&board[0][4]==2&&board[0][3]==2&&board[0][2]==2&&board[0][1]==2&&board[0][0]==1){
				board[0][5] = 1;
				board[0][4] = 1;
				board[0][3] = 1;
				board[0][2] = 1;
				board[0][1] = 1;
			}
			if(board[1][5]==2&&board[2][4]==1){
				board[1][5] = 1;
			}
			if(board[1][5]==2&&board[2][4]==2&&board[3][3]==1){
				board[1][5] = 1;
				board[2][4] = 1;
			}
			if(board[1][5]==2&&board[2][4]==2&&board[3][3]==2&&board[4][2]==1){
				board[1][5] = 1;
				board[2][4] = 1;
				board[3][3] = 1;
			}
			if(board[1][5]==2&&board[2][4]==2&&board[3][3]==2&&board[4][2]==2&&board[5][1]==1){
				board[1][5] = 1;
				board[2][4] = 1;
				board[3][3] = 1;
				board[4][2] = 1;
			}
			if(board[1][5]==2&&board[2][4]==2&&board[3][3]==2&&board[4][2]==2&&board[5][1]==2&&board[6][0]==1){
				board[1][5] = 1;
				board[2][4] = 1;
				board[3][3] = 1;
				board[4][2] = 1;
				board[5][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==6){//0,6白
			if(board[1][6]==1&&board[2][6]==2){
				board[1][6] = 2;
			}
			if(board[1][6]==1&&board[2][6]==1&&board[3][6]==2){
				board[1][6] = 2;
				board[2][6] = 2;
			}
			if(board[1][6]==1&&board[2][6]==1&&board[3][6]==1&&board[4][6]==2){
				board[1][6] = 2;
				board[2][6] = 2;
				board[3][6] = 2;
			}
			if(board[1][6]==1&&board[2][6]==1&&board[3][6]==1&&board[4][6]==1&&board[5][6]==2){
				board[1][6] = 2;
				board[2][6] = 2;
				board[3][6] = 2;
				board[4][6] = 2;
			}
			if(board[1][6]==1&&board[2][6]==1&&board[3][6]==1&&board[4][6]==1&&board[5][6]==1&&board[6][6]==2){
				board[1][6] = 2;
				board[2][6] = 2;
				board[3][6] = 2;
				board[4][6] = 2;
				board[5][6] = 2;
			}
			if(board[1][6]==1&&board[2][6]==1&&board[3][6]==1&&board[4][6]==1&&board[5][6]==1&&board[6][6]==1&&board[7][6]==2){
				board[1][6] = 2;
				board[2][6] = 2;
				board[3][6] = 2;
				board[4][6] = 2;
				board[5][6] = 2;
				board[6][6] = 2;
			}
			if(board[0][5]==1&&board[0][4]==2){
				board[0][5] = 2;
			}
			if(board[0][5]==1&&board[0][4]==1&&board[0][3]==2){
				board[0][5] = 2;
				board[0][4] = 2;
			}
			if(board[0][5]==1&&board[0][4]==1&&board[0][3]==1&&board[0][2]==2){
				board[0][5] = 2;
				board[0][4] = 2;
				board[0][3] = 2;
			}
			if(board[0][5]==1&&board[0][4]==1&&board[0][3]==1&&board[0][2]==1&&board[0][1]==2){
				board[0][5] = 2;
				board[0][4] = 2;
				board[0][3] = 2;
				board[0][2] = 2;
			}
			if(board[0][5]==1&&board[0][4]==1&&board[0][3]==1&&board[0][2]==1&&board[0][1]==1&&board[0][0]==2){
				board[0][5] = 2;
				board[0][4] = 2;
				board[0][3] = 2;
				board[0][2] = 2;
				board[0][1] = 2;
			}
			if(board[1][5]==1&&board[2][4]==2){
				board[1][5] = 2;
			}
			if(board[1][5]==1&&board[2][4]==1&&board[3][3]==2){
				board[1][5] = 2;
				board[2][4] = 2;
			}
			if(board[1][5]==1&&board[2][4]==1&&board[3][3]==1&&board[4][2]==2){
				board[1][5] = 2;
				board[2][4] = 2;
				board[3][3] = 2;
			}
			if(board[1][5]==1&&board[2][4]==1&&board[3][3]==2&&board[4][2]==1&&board[5][1]==2){
				board[1][5] = 2;
				board[2][4] = 2;
				board[3][3] = 2;
				board[4][2] = 2;
			}
			if(board[1][5]==1&&board[2][4]==1&&board[3][3]==1&&board[4][2]==1&&board[5][1]==1&&board[6][0]==2){
				board[1][5] = 2;
				board[2][4] = 2;
				board[3][3] = 2;
				board[4][2] = 2;
				board[5][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==6){//1,6黒
			if(board[2][6]==2&&board[3][6]==1){
				board[2][6] = 1;
			}
			if(board[2][6]==2&&board[3][6]==2&&board[4][6]==1){
				board[2][6] = 1;
				board[3][6] = 1;
			}
			if(board[2][6]==2&&board[3][6]==2&&board[4][6]==2&&board[5][6]==1){
				board[2][6] = 1;
				board[3][6] = 1;
				board[4][6] = 1;
			}
			if(board[2][6]==2&&board[3][6]==2&&board[4][6]==2&&board[5][6]==2&&board[6][6]==1){
				board[2][6] = 1;
				board[3][6] = 1;
				board[4][6] = 1;
				board[5][6] = 1;
			}
			if(board[2][6]==2&&board[3][6]==2&&board[4][6]==2&&board[5][6]==2&&board[6][6]==2&&board[7][6]==1){
				board[2][6] = 1;
				board[3][6] = 1;
				board[4][6] = 1;
				board[5][6] = 1;
				board[6][6] = 1;
			}
			if(board[1][5]==2&&board[1][4]==1){
				board[1][5] = 1;
			}
			if(board[1][5]==2&&board[1][4]==2&&board[1][3]==1){
				board[1][5] = 1;
				board[1][4] = 1;
			}
			if(board[1][5]==2&&board[1][4]==2&&board[1][3]==2&&board[1][2]==1){
				board[1][5] = 1;
				board[1][4] = 1;
				board[1][3] = 1;
			}
			if(board[1][5]==2&&board[1][4]==2&&board[1][3]==2&&board[1][2]==2&&board[1][1]==1){
				board[1][5] = 1;
				board[1][4] = 1;
				board[1][3] = 1;
				board[1][2] = 1;
			}
			if(board[1][5]==2&&board[1][4]==2&&board[1][3]==2&&board[1][2]==2&&board[1][1]==2&&board[1][0]==1){
				board[1][5] = 1;
				board[1][4] = 1;
				board[1][3] = 1;
				board[1][2] = 1;
				board[1][1] = 1;
			}
			if(board[2][5]==2&&board[3][4]==1){
				board[2][5] = 1;
			}
			if(board[2][5]==2&&board[3][4]==2&&board[4][3]==1){
				board[2][5] = 1;
				board[3][4] = 1;
			}
			if(board[2][5]==2&&board[3][4]==2&&board[4][3]==2&&board[5][2]==1){
				board[2][5] = 1;
				board[3][4] = 1;
				board[4][3] = 1;
			}
			if(board[2][5]==2&&board[3][4]==2&&board[4][3]==2&&board[5][2]==2&&board[6][1]==1){
				board[2][5] = 1;
				board[3][4] = 1;
				board[4][3] = 1;
				board[5][2] = 1;
			}
			if(board[2][5]==2&&board[3][4]==2&&board[4][3]==2&&board[5][2]==2&&board[6][1]==2&&board[7][0]==1){
				board[2][5] = 1;
				board[3][4] = 1;
				board[4][3] = 1;
				board[5][2] = 1;
				board[6][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==6){//1,6白
			if(board[2][6]==1&&board[3][6]==2){
				board[2][6] = 2;
			}
			if(board[2][6]==1&&board[3][6]==1&&board[4][6]==2){
				board[2][6] = 2;
				board[3][6] = 2;
			}
			if(board[2][6]==1&&board[3][6]==1&&board[4][6]==1&&board[5][6]==2){
				board[2][6] = 2;
				board[3][6] = 2;
				board[4][6] = 2;
			}
			if(board[2][6]==1&&board[3][6]==1&&board[4][6]==1&&board[5][6]==1&&board[6][6]==2){
				board[2][6] = 2;
				board[3][6] = 2;
				board[4][6] = 2;
				board[5][6] = 2;
			}
			if(board[2][6]==1&&board[3][6]==1&&board[4][6]==1&&board[5][6]==1&&board[6][6]==1&&board[7][6]==2){
				board[2][6] = 2;
				board[3][6] = 2;
				board[4][6] = 2;
				board[5][6] = 2;
				board[6][6] = 2;
			}
			if(board[1][5]==1&&board[1][4]==2){
				board[1][5] = 2;
			}
			if(board[1][5]==1&&board[1][4]==1&&board[1][3]==2){
				board[1][5] = 2;
				board[1][4] = 2;
			}
			if(board[1][5]==1&&board[1][4]==1&&board[1][3]==1&&board[1][2]==2){
				board[1][5] = 2;
				board[1][4] = 2;
				board[1][3] = 2;
			}
			if(board[1][5]==1&&board[1][4]==1&&board[1][3]==1&&board[1][2]==1&&board[1][1]==2){
				board[1][5] = 2;
				board[1][4] = 2;
				board[1][3] = 2;
				board[1][2] = 2;
			}
			if(board[1][5]==1&&board[1][4]==1&&board[1][3]==1&&board[1][2]==1&&board[1][1]==1&&board[1][0]==2){
				board[1][5] = 2;
				board[1][4] = 2;
				board[1][3] = 2;
				board[1][2] = 2;
				board[1][1] = 2;
			}
			if(board[2][5]==1&&board[3][4]==2){
				board[2][5] = 2;
			}
			if(board[2][5]==1&&board[3][4]==1&&board[4][3]==2){
				board[2][5] = 2;
				board[3][4] = 2;
			}
			if(board[2][5]==1&&board[3][4]==1&&board[4][3]==1&&board[5][2]==2){
				board[2][5] = 2;
				board[3][4] = 2;
				board[4][3] = 2;
			}
			if(board[2][5]==1&&board[3][4]==1&&board[4][3]==1&&board[5][2]==1&&board[6][1]==2){
				board[2][5] = 2;
				board[3][4] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
			}
			if(board[2][5]==1&&board[3][4]==1&&board[4][3]==1&&board[5][2]==1&&board[6][1]==1&&board[7][0]==2){
				board[2][5] = 2;
				board[3][4] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
				board[6][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==6){//2,6黒
			if(board[3][6]==2&&board[4][6]==1){
				board[3][6] = 1;
			}
			if(board[1][6]==2&&board[0][6]==1){
				board[1][6] = 1;
			}
			if(board[3][6]==2&&board[4][6]==2&&board[5][6]==1){
				board[3][6] = 1;
				board[4][6] = 1;
			}
			if(board[3][6]==2&&board[4][6]==2&&board[5][6]==2&&board[6][6]==1){
				board[3][6] = 1;
				board[4][6] = 1;
				board[5][6] = 1;
			}
			if(board[3][6]==2&&board[4][6]==2&&board[5][6]==2&&board[6][6]==2&&board[7][6]==1){
				board[3][6] = 1;
				board[4][6] = 1;
				board[5][6] = 1;
				board[6][6] = 1;
			}
			if(board[2][5]==2&&board[2][4]==1){
				board[2][5] = 1;
			}
			if(board[2][5]==2&&board[2][4]==2&&board[2][3]==1){
				board[2][5] = 1;
				board[2][4] = 1;
			}
			if(board[2][5]==2&&board[2][4]==2&&board[2][3]==2&&board[2][2]==1){
				board[2][5] = 1;
				board[2][4] = 1;
				board[2][3] = 1;
			}
			if(board[2][5]==2&&board[2][4]==2&&board[2][3]==2&&board[2][2]==2&&board[2][1]==1){
				board[2][5] = 1;
				board[2][4] = 1;
				board[2][3] = 1;
				board[2][2] = 1;
			}
			if(board[2][5]==2&&board[2][4]==2&&board[2][3]==2&&board[2][2]==2&&board[2][1]==2&&board[2][0]==1){
				board[2][5] = 1;
				board[2][4] = 1;
				board[2][3] = 1;
				board[2][2] = 1;
				board[2][1] = 1;
			}
			if(board[3][5]==2&&board[4][4]==1){
				board[3][5] = 1;
			}
			if(board[1][5]==2&&board[0][4]==1){
				board[3][5] = 1;
			}
			if(board[3][5]==2&&board[4][4]==2&&board[5][3]==1){
				board[3][5] = 1;
				board[4][4] = 1;
			}
			if(board[3][5]==2&&board[4][4]==2&&board[5][3]==2&&board[6][2]==1){
				board[3][5] = 1;
				board[4][4] = 1;
				board[5][3] = 1;
			}
			if(board[3][5]==2&&board[4][4]==2&&board[5][3]==2&&board[6][2]==2&&board[7][1]==1){
				board[3][5] = 1;
				board[4][4] = 1;
				board[5][3] = 1;
				board[6][2] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==6){//2,6白
			if(board[3][6]==1&&board[4][6]==2){
				board[3][6] = 2;
			}
			if(board[1][6]==1&&board[0][6]==2){
				board[1][6] = 2;
			}
			if(board[3][6]==1&&board[4][6]==1&&board[5][6]==2){
				board[3][6] = 2;
				board[4][6] = 2;
			}
			if(board[3][6]==1&&board[4][6]==1&&board[5][6]==1&&board[6][6]==2){
				board[3][6] = 2;
				board[4][6] = 2;
				board[5][6] = 2;
			}
			if(board[3][6]==1&&board[4][6]==1&&board[5][6]==1&&board[6][6]==1&&board[7][6]==2){
				board[3][6] = 2;
				board[4][6] = 2;
				board[5][6] = 2;
				board[6][6] = 2;
			}
			if(board[2][5]==1&&board[2][4]==2){
				board[2][5] = 2;
			}
			if(board[2][5]==1&&board[2][4]==1&&board[2][3]==2){
				board[2][5] = 2;
				board[2][4] = 2;
			}
			if(board[2][5]==1&&board[2][4]==1&&board[2][3]==1&&board[2][2]==2){
				board[2][5] = 2;
				board[2][4] = 2;
				board[2][3] = 2;
			}
			if(board[2][5]==1&&board[2][4]==1&&board[2][3]==1&&board[2][2]==1&&board[2][1]==2){
				board[2][5] = 2;
				board[2][4] = 2;
				board[2][3] = 2;
				board[2][2] = 2;
			}
			if(board[2][5]==1&&board[2][4]==1&&board[2][3]==1&&board[2][2]==1&&board[2][1]==1&&board[2][0]==2){
				board[2][5] = 2;
				board[2][4] = 2;
				board[2][3] = 2;
				board[2][2] = 2;
				board[2][1] = 2;
			}
			if(board[3][5]==1&&board[4][4]==2){
				board[3][5] = 2;
			}
			if(board[1][5]==1&&board[0][4]==2){
				board[3][5] = 2;
			}
			if(board[3][5]==1&&board[4][4]==1&&board[5][3]==2){
				board[3][5] = 2;
				board[4][4] = 2;
			}
			if(board[3][5]==1&&board[4][4]==1&&board[5][3]==1&&board[6][2]==2){
				board[3][5] = 2;
				board[4][4] = 2;
				board[5][3] = 2;
			}
			if(board[3][5]==1&&board[4][4]==1&&board[5][3]==1&&board[6][2]==1&&board[7][1]==2){
				board[3][5] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
				board[6][1] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==3&&retu==6){//3,6黒
			if(board[4][6]==2&&board[5][6]==1){
				board[4][6] = 1;
			}
			if(board[2][6]==2&&board[1][6]==1){
				board[2][6] = 1;
			}
			if(board[4][6]==2&&board[5][6]==2&&board[6][6]==1){
				board[4][6] = 1;
				board[5][6] = 1;
			}
			if(board[2][6]==2&&board[1][6]==2&&board[0][6]==1){
				board[2][6] = 1;
				board[1][6] = 1;
			}
			if(board[4][6]==2&&board[5][6]==2&&board[6][6]==2&&board[7][6]==1){
				board[4][6] = 1;
				board[5][6] = 1;
				board[6][6] = 1;
			}
			if(board[3][5]==2&&board[3][4]==1){
				board[3][5] = 1;
			}
			if(board[3][5]==2&&board[3][4]==2&&board[3][3]==1){
				board[3][5] = 1;
				board[3][4] = 1;
			}
			if(board[3][5]==2&&board[3][4]==2&&board[3][3]==2&&board[3][2]==1){
				board[3][5] = 1;
				board[3][4] = 1;
				board[3][3] = 1;
			}
			if(board[3][5]==2&&board[3][4]==2&&board[3][3]==2&&board[3][2]==2&&board[3][1]==1){
				board[3][5] = 1;
				board[3][4] = 1;
				board[3][3] = 1;
				board[3][2] = 1;
			}
			if(board[3][5]==2&&board[3][4]==2&&board[3][3]==2&&board[3][2]==2&&board[3][1]==2&&board[3][0]==1){
				board[3][5] = 1;
				board[3][4] = 1;
				board[3][3] = 1;
				board[3][2] = 1;
				board[3][1] = 1;
			}
			if(board[4][5]==2&&board[5][4]==1){
				board[4][5] = 1;
			}
			if(board[2][5]==2&&board[1][4]==1){
				board[2][5] = 1;
			}
			if(board[4][5]==2&&board[5][4]==2&&board[6][3]==1){
				board[4][5] = 1;
				board[5][4] = 1;
			}
			if(board[2][5]==2&&board[1][4]==2&&board[0][3]==1){
				board[2][5] = 1;
				board[1][4] = 1;
			}
			if(board[4][5]==2&&board[5][4]==2&&board[6][3]==2&&board[7][2]==1){
				board[3][5] = 1;
				board[4][4] = 1;
				board[5][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==3&&retu==6){//3,6白
			if(board[4][6]==1&&board[5][6]==2){
				board[4][6] = 2;
			}
			if(board[2][6]==1&&board[1][6]==2){
				board[2][6] = 2;
			}
			if(board[4][6]==1&&board[5][6]==1&&board[6][6]==2){
				board[4][6] = 2;
				board[5][6] = 2;
			}
			if(board[2][6]==1&&board[1][6]==1&&board[0][6]==2){
				board[2][6] = 2;
				board[1][6] = 2;
			}
			if(board[4][6]==1&&board[5][6]==1&&board[6][6]==1&&board[7][6]==2){
				board[4][6] = 2;
				board[5][6] = 2;
				board[6][6] = 2;
			}
			if(board[3][5]==1&&board[3][4]==1&&board[3][3]==2){
				board[3][5] = 2;
				board[3][4] = 2;
			}
			if(board[3][5]==1&&board[3][4]==1&&board[3][3]==1&&board[3][2]==2){
				board[3][5] = 2;
				board[3][4] = 2;
				board[3][3] = 2;
			}
			if(board[3][5]==1&&board[3][4]==1&&board[3][3]==1&&board[3][2]==1&&board[3][1]==2){
				board[3][5] = 2;
				board[3][4] = 2;
				board[3][3] = 2;
				board[3][2] = 2;
			}
			if(board[3][5]==1&&board[3][4]==1&&board[3][3]==1&&board[3][2]==1&&board[3][1]==1&&board[3][0]==2){
				board[3][5] = 2;
				board[3][4] = 2;
				board[3][3] = 2;
				board[3][2] = 2;
				board[3][1] = 2;
			}
			if(board[4][5]==1&&board[5][4]==2){
				board[4][5] = 2;
			}
			if(board[2][5]==1&&board[1][4]==2){
				board[2][5] = 2;
			}
			if(board[4][5]==1&&board[5][4]==1&&board[6][3]==2){
				board[4][5] = 2;
				board[5][4] = 2;
			}
			if(board[2][5]==1&&board[1][4]==1&&board[0][3]==2){
				board[2][5] = 2;
				board[1][4] = 2;
			}
			if(board[4][5]==1&&board[5][4]==1&&board[6][3]==1&&board[7][2]==2){
				board[4][5] = 2;
				board[5][4] = 2;
				board[6][3] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==4&&retu==6){//4,6黒
			if(board[5][6]==2&&board[6][6]==1){
				board[5][6] = 1;
			}
			if(board[3][6]==2&&board[2][6]==1){
				board[3][6] = 1;
			}
			if(board[5][6]==2&&board[6][6]==2&&board[7][6]==1){
				board[5][6] = 1;
				board[6][6] = 1;
			}
			if(board[3][6]==2&&board[2][6]==2&&board[1][6]==1){
				board[3][6] = 1;
				board[2][6] = 1;
			}
			if(board[3][6]==2&&board[2][6]==2&&board[1][6]==1&&board[0][6]==1){
				board[3][6] = 1;
				board[2][6] = 1;
				board[1][6] = 1;
			}
			if(board[4][5]==2&&board[4][4]==1){
				board[4][5] = 1;
			}
			if(board[4][5]==2&&board[4][4]==2&&board[4][3]==1){
				board[4][5] = 1;
				board[4][4] = 1;
			}
			if(board[4][5]==2&&board[4][4]==2&&board[4][3]==2&&board[4][2]==1){
				board[4][5] = 1;
				board[4][4] = 1;
				board[4][3] = 1;
			}
			if(board[4][5]==2&&board[4][4]==2&&board[4][3]==2&&board[4][2]==2&&board[4][1]==1){
				board[4][5] = 1;
				board[4][4] = 1;
				board[4][3] = 1;
				board[4][2] = 1;
			}
			if(board[4][5]==2&&board[4][4]==2&&board[4][3]==2&&board[4][2]==2&&board[4][1]==2&&board[4][0]==1){
				board[4][5] = 1;
				board[4][4] = 1;
				board[4][3] = 1;
				board[4][2] = 1;
				board[4][1] = 1;
			}
			if(board[5][5]==2&&board[6][4]==1){
				board[5][5] = 1;
			}
			if(board[3][5]==2&&board[2][4]==1){
				board[3][5] = 1;
			}
			if(board[5][5]==2&&board[6][4]==2&&board[7][3]==1){
				board[5][5] = 1;
				board[6][4] = 1;
			}
			if(board[3][5]==2&&board[2][4]==2&&board[1][3]==1){
				board[3][5] = 1;
				board[2][4] = 1;
			}
			if(board[3][5]==2&&board[2][4]==2&&board[1][3]==2&&board[0][2]==1){
				board[3][5] = 1;
				board[2][4] = 1;
				board[1][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==4&&retu==6){//4,6白
			if(board[5][6]==1&&board[6][6]==2){
				board[5][6] = 2;
			}
			if(board[3][6]==1&&board[2][6]==2){
				board[3][6] = 2;
			}
			if(board[5][6]==1&&board[6][6]==1&&board[7][6]==2){
				board[5][6] = 2;
				board[6][6] = 2;
			}
			if(board[3][6]==1&&board[2][6]==1&&board[1][6]==2){
				board[3][6] = 2;
				board[2][6] = 2;
			}
			if(board[3][6]==1&&board[2][6]==1&&board[1][6]==1&&board[0][6]==2){
				board[3][6] = 2;
				board[2][6] = 2;
				board[1][6] = 2;
			}
			if(board[4][5]==1&&board[4][4]==2){
				board[4][5] = 2;
			}
			if(board[4][5]==1&&board[4][4]==1&&board[4][3]==2){
				board[4][5] = 2;
				board[4][4] = 2;
			}
			if(board[4][5]==1&&board[4][4]==1&&board[4][3]==1&&board[4][2]==2){
				board[4][5] = 2;
				board[4][4] = 2;
				board[4][3] = 2;
			}
			if(board[4][5]==1&&board[4][4]==1&&board[4][3]==1&&board[4][2]==1&&board[4][1]==2){
				board[4][5] = 2;
				board[4][4] = 2;
				board[4][3] = 2;
				board[4][2] = 2;
			}
			if(board[4][5]==1&&board[4][4]==1&&board[4][3]==1&&board[4][2]==1&&board[4][1]==1&&board[4][0]==2){
				board[4][5] = 2;
				board[4][4] = 2;
				board[4][3] = 2;
				board[4][2] = 2;
				board[4][1] = 2;
			}
			if(board[5][5]==1&&board[6][4]==2){
				board[5][5] = 2;
			}
			if(board[3][5]==1&&board[2][4]==2){
				board[3][5] = 2;
			}
			if(board[5][5]==1&&board[6][4]==1&&board[7][3]==2){
				board[5][5] = 2;
				board[6][4] = 2;
			}
			if(board[3][5]==1&&board[2][4]==1&&board[1][3]==2){
				board[3][5] = 2;
				board[2][4] = 2;
			}
			if(board[3][5]==1&&board[2][4]==1&&board[1][3]==1&&board[0][2]==2){
				board[3][5] = 2;
				board[2][4] = 2;
				board[1][3] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==6){//5,6黒
			if(board[6][6]==2&&board[7][6]==1){
				board[6][6] = 1;
			}
			if(board[4][6]==2&&board[3][6]==1){
				board[4][6] = 1;
			}
			if(board[4][6]==2&&board[3][6]==2&&board[2][6]==1){
				board[4][6] = 1;
				board[3][6] = 1;
			}
			if(board[4][6]==2&&board[3][6]==2&&board[2][6]==2&&board[1][6]==1){
				board[4][6] = 1;
				board[3][6] = 1;
				board[2][6] = 1;
			}
			if(board[4][6]==2&&board[3][6]==2&&board[2][6]==2&&board[1][6]==2&&board[0][6]==1){
				board[4][6] = 1;
				board[3][6] = 1;
				board[2][6] = 1;
				board[1][6] = 1;
			}
			if(board[5][5]==2&&board[5][4]==1){
				board[5][5] = 1;
			}
			if(board[5][5]==2&&board[5][4]==2&&board[5][3]==1){
				board[5][5] = 1;
				board[5][4] = 1;
			}
			if(board[5][5]==2&&board[5][4]==2&&board[5][3]==2&&board[5][2]==1){
				board[5][5] = 1;
				board[5][4] = 1;
				board[5][3] = 1;
			}
			if(board[5][5]==2&&board[5][4]==2&&board[5][3]==2&&board[5][2]==2&&board[5][1]==1){
				board[5][5] = 1;
				board[5][4] = 1;
				board[5][3] = 1;
				board[5][2] = 1;
			}
			if(board[5][5]==2&&board[5][4]==2&&board[5][3]==2&&board[5][2]==2&&board[5][1]==2&&board[5][0]==1){
				board[5][5] = 1;
				board[5][4] = 1;
				board[5][3] = 1;
				board[5][2] = 1;
				board[5][1] = 1;
			}
			if(board[6][5]==2&&board[7][4]==1){
				board[6][5] = 1;
			}
			if(board[4][5]==2&&board[3][4]==1){
				board[4][5] = 1;
			}
			if(board[4][5]==2&&board[3][4]==2&&board[2][3]==1){
				board[4][5] = 1;
				board[3][4] = 1;
			}
			if(board[4][5]==2&&board[3][4]==2&&board[2][3]==2&&board[1][2]==1){
				board[4][5] = 1;
				board[3][4] = 1;
				board[2][3] = 1;
			}
			if(board[4][5]==2&&board[3][4]==2&&board[2][3]==2&&board[1][2]==2&&board[0][1]==1){
				board[4][5] = 1;
				board[3][4] = 1;
				board[2][3] = 1;
				board[1][2] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==6){//5,6白
			if(board[6][6]==1&&board[7][6]==2){
				board[6][6] = 2;
			}
			if(board[4][6]==1&&board[3][6]==2){
				board[4][6] = 2;
			}
			if(board[4][6]==1&&board[3][6]==1&&board[2][6]==2){
				board[4][6] = 2;
				board[3][6] = 2;
			}
			if(board[4][6]==1&&board[3][6]==1&&board[2][6]==1&&board[1][6]==2){
				board[4][6] = 2;
				board[3][6] = 2;
				board[2][6] = 2;
			}
			if(board[4][6]==1&&board[3][6]==1&&board[2][6]==1&&board[1][6]==1&&board[0][6]==2){
				board[4][6] = 2;
				board[3][6] = 2;
				board[2][6] = 2;
				board[1][6] = 2;
			}
			if(board[5][5]==1&&board[5][4]==1){
				board[5][5] = 2;
			}
			if(board[5][5]==1&&board[5][4]==1&&board[5][3]==2){
				board[5][5] = 2;
				board[5][4] = 2;
			}
			if(board[5][5]==1&&board[5][4]==1&&board[5][3]==1&&board[5][2]==2){
				board[5][5] = 2;
				board[5][4] = 2;
				board[5][3] = 2;
			}
			if(board[5][5]==1&&board[5][4]==1&&board[5][3]==1&&board[5][2]==1&&board[5][1]==2){
				board[5][5] = 2;
				board[5][4] = 2;
				board[5][3] = 2;
				board[5][2] = 2;
			}
			if(board[5][5]==1&&board[5][4]==1&&board[5][3]==1&&board[5][2]==1&&board[5][1]==1&&board[5][0]==2){
				board[5][5] = 2;
				board[5][4] = 2;
				board[5][3] = 2;
				board[5][2] = 2;
				board[5][1] = 2;
			}
			if(board[6][5]==1&&board[7][4]==2){
				board[6][5] = 2;
			}
			if(board[4][5]==1&&board[3][4]==2){
				board[4][5] = 2;
			}
			if(board[4][5]==1&&board[3][4]==1&&board[2][3]==2){
				board[4][5] = 2;
				board[3][4] = 2;
			}
			if(board[4][5]==1&&board[3][4]==1&&board[2][3]==1&&board[1][2]==2){
				board[4][5] = 2;
				board[3][4] = 2;
				board[2][3] = 2;
			}
			if(board[4][5]==1&&board[3][4]==1&&board[2][3]==1&&board[1][2]==1&&board[0][1]==2){
				board[4][5] = 2;
				board[3][4] = 2;
				board[2][3] = 2;
				board[1][2] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==6&&retu==6){//6,6黒
			if(board[5][6]==2&&board[4][6]==1){
				board[5][6] = 1;
			}
			if(board[5][6]==2&&board[4][6]==2&&board[3][6]==1){
				board[5][6] = 1;
				board[4][6] = 1;
			}
			if(board[5][6]==2&&board[4][6]==2&&board[3][6]==2&&board[2][6]==1){
				board[5][6] = 1;
				board[4][6] = 1;
				board[3][6] = 1;
			}
			if(board[5][6]==2&&board[4][6]==2&&board[3][6]==2&&board[2][6]==2&&board[1][6]==1){
				board[5][6] = 1;
				board[4][6] = 1;
				board[3][6] = 1;
				board[2][6] = 1;
			}
			if(board[5][6]==2&&board[4][6]==2&&board[3][6]==2&&board[2][6]==2&&board[1][6]==2&&board[0][6]==1){
				board[5][6] = 1;
				board[4][6] = 1;
				board[3][6] = 1;
				board[2][6] = 1;
				board[1][6] = 1;
			}
			if(board[6][5]==2&&board[6][4]==1){
				board[6][5] = 1;
			}
			if(board[6][5]==2&&board[6][4]==2&&board[6][3]==1){
				board[6][5] = 1;
				board[6][4] = 1;
			}
			if(board[6][5]==2&&board[6][4]==2&&board[6][3]==2&&board[6][2]==1){
				board[6][5] = 1;
				board[6][4] = 1;
				board[6][3] = 1;
			}
			if(board[6][5]==2&&board[6][4]==2&&board[6][3]==2&&board[6][2]==2&&board[6][1]==1){
				board[6][5] = 1;
				board[6][4] = 1;
				board[6][3] = 1;
				board[6][2] = 1;
			}
			if(board[6][5]==2&&board[6][4]==2&&board[6][3]==2&&board[6][2]==2&&board[6][1]==2&&board[6][0]==1){
				board[6][5] = 1;
				board[6][4] = 1;
				board[6][3] = 1;
				board[6][2] = 1;
				board[6][1] = 1;
			}
			if(board[5][5]==2&&board[4][4]==1){
				board[5][5] = 1;
			}
			if(board[5][5]==2&&board[4][4]==2&&board[3][3]==1){
				board[5][5] = 1;
				board[4][4] = 1;
			}
			if(board[5][5]==2&&board[4][4]==2&&board[3][3]==2&&board[2][2]==1){
				board[5][5] = 1;
				board[4][4] = 1;
				board[3][3] = 1;
			}
			if(board[5][5]==2&&board[4][4]==2&&board[3][3]==2&&board[2][2]==2&&board[1][1]==1){
				board[5][5] = 1;
				board[4][4] = 1;
				board[3][3] = 1;
				board[2][3] = 1;
			}
			if(board[5][5]==2&&board[4][4]==2&&board[3][3]==2&&board[2][2]==2&&board[1][1]==2&&board[0][0]==1){
				board[5][5] = 1;
				board[4][4] = 1;
				board[3][3] = 1;
				board[2][2] = 1;
				board[1][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==6){//6,6白
			if(board[5][6]==1&&board[4][6]==2){
				board[5][6] = 2;
			}
			if(board[5][6]==1&&board[4][6]==1&&board[3][6]==2){
				board[5][6] = 2;
				board[4][6] = 2;
			}
			if(board[5][6]==1&&board[4][6]==1&&board[3][6]==1&&board[2][6]==2){
				board[5][6] = 2;
				board[4][6] = 2;
				board[3][6] = 2;
			}
			if(board[5][6]==1&&board[4][6]==1&&board[3][6]==1&&board[2][6]==1&&board[1][6]==2){
				board[5][6] = 2;
				board[4][6] = 2;
				board[3][6] = 2;
				board[2][6] = 2;
			}
			if(board[5][6]==1&&board[4][6]==1&&board[3][6]==1&&board[2][6]==1&&board[1][6]==1&&board[0][6]==2){
				board[5][6] = 2;
				board[4][6] = 2;
				board[3][6] = 2;
				board[2][6] = 2;
				board[1][6] = 2;
			}
			if(board[6][5]==1&&board[6][4]==2){
				board[6][5] = 2;
			}
			if(board[6][5]==1&&board[6][4]==1&&board[6][3]==2){
				board[6][5] = 2;
				board[6][4] = 2;
			}
			if(board[6][5]==1&&board[6][4]==1&&board[6][3]==1&&board[6][2]==2){
				board[6][5] = 2;
				board[6][4] = 2;
				board[6][3] = 2;
			}
			if(board[6][5]==1&&board[6][4]==1&&board[6][3]==1&&board[6][2]==1&&board[6][1]==2){
				board[6][5] = 2;
				board[6][4] = 2;
				board[6][3] = 2;
				board[6][2] = 2;
			}
			if(board[6][5]==1&&board[6][4]==1&&board[6][3]==1&&board[6][2]==1&&board[6][1]==1&&board[6][0]==2){
				board[6][5] = 2;
				board[6][4] = 2;
				board[6][3] = 2;
				board[6][2] = 2;
				board[6][1] = 2;
			}
			if(board[5][5]==1&&board[4][4]==2){
				board[5][5] = 2;
			}
			if(board[5][5]==1&&board[4][4]==1&&board[3][3]==2){
				board[5][5] = 2;
				board[4][4] = 2;
			}
			if(board[5][5]==1&&board[4][4]==1&&board[3][3]==1&&board[2][2]==2){
				board[5][5] = 2;
				board[4][4] = 2;
				board[3][3] = 2;
			}
			if(board[5][5]==1&&board[4][4]==1&&board[3][3]==1&&board[2][2]==1&&board[1][1]==2){
				board[5][5] = 2;
				board[4][4] = 2;
				board[3][3] = 2;
				board[2][2] = 2;
			}
			if(board[5][5]==1&&board[4][4]==1&&board[3][3]==1&&board[2][2]==1&&board[1][1]==1&&board[0][0]==2){
				board[5][5] = 2;
				board[4][4] = 2;
				board[3][3] = 2;
				board[2][2] = 2;
				board[1][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==6){//7,6黒
			if(board[6][6]==2&&board[5][6]==1){
				board[6][6] = 1;
			}
			if(board[6][6]==2&&board[5][6]==2&&board[4][6]==1){
				board[6][6] = 1;
				board[5][6] = 1;
			}
			if(board[6][6]==2&&board[5][6]==2&&board[4][6]==2&&board[3][6]==1){
				board[6][6] = 1;
				board[5][6] = 1;
				board[4][6] = 1;
			}
			if(board[6][6]==2&&board[5][6]==2&&board[4][6]==2&&board[3][6]==2&&board[2][6]==1){
				board[6][6] = 1;
				board[5][6] = 1;
				board[4][6] = 1;
				board[3][6] = 1;
			}
			if(board[6][6]==2&&board[5][6]==2&&board[4][6]==2&&board[3][6]==2&&board[2][6]==2&&board[1][6]==1){
				board[6][6] = 1;
				board[5][6] = 1;
				board[4][6] = 1;
				board[3][6] = 1;
				board[2][6] = 1;
			}
			if(board[6][6]==2&&board[5][6]==2&&board[4][6]==2&&board[3][6]==2&&board[2][6]==2&&board[1][6]==2&&board[0][6]==1){
				board[6][6] = 1;
				board[5][6] = 1;
				board[4][6] = 1;
				board[3][6] = 1;
				board[2][6] = 1;
				board[1][6] = 1;
			}
			if(board[7][5]==2&&board[7][4]==1){
				board[7][5] = 1;
			}
			if(board[7][5]==2&&board[7][4]==2&&board[7][3]==1){
				board[7][5] = 1;
				board[7][4] = 1;
			}
			if(board[7][5]==2&&board[7][4]==2&&board[7][3]==2&&board[7][2]==1){
				board[7][5] = 1;
				board[7][4] = 1;
				board[7][3] = 1;
			}
			if(board[7][5]==2&&board[7][4]==2&&board[7][3]==2&&board[7][2]==2&&board[7][1]==1){
				board[7][5] = 1;
				board[7][4] = 1;
				board[7][3] = 1;
				board[7][2] = 1;
			}
			if(board[7][5]==2&&board[7][4]==2&&board[7][3]==2&&board[7][2]==2&&board[7][1]==2&&board[7][0]==1){
				board[7][5] = 1;
				board[7][4] = 1;
				board[7][3] = 1;
				board[7][2] = 1;
				board[7][1] = 1;
			}
			if(board[6][5]==2&&board[5][4]==1){
				board[6][5] = 1;
			}
			if(board[6][5]==2&&board[5][4]==2&&board[4][3]==1){
				board[6][5] = 1;
				board[5][4] = 1;
			}
			if(board[6][5]==2&&board[5][4]==2&&board[4][3]==2&&board[3][2]==1){
				board[6][5] = 1;
				board[5][4] = 1;
				board[4][3] = 1;
			}
			if(board[6][5]==2&&board[5][4]==2&&board[4][3]==2&&board[3][2]==2&&board[5][1]==1){
				board[6][5] = 1;
				board[5][4] = 1;
				board[4][3] = 1;
				board[3][2] = 1;
			}
			if(board[6][5]==2&&board[5][4]==2&&board[4][3]==2&&board[3][2]==2&&board[2][1]==2&&board[1][0]==1){
				board[6][5] = 1;
				board[5][4] = 1;
				board[4][3] = 1;
				board[3][2] = 1;
				board[2][1] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==6){//7,6白
			if(board[6][6]==1&&board[5][6]==2){
				board[6][6] = 2;
			}
			if(board[6][6]==1&&board[5][6]==1&&board[4][6]==2){
				board[6][6] = 2;
				board[5][6] = 2;
			}
			if(board[6][6]==1&&board[5][6]==1&&board[4][6]==1&&board[3][6]==2){
				board[6][6] = 2;
				board[5][6] = 2;
				board[4][6] = 2;
			}
			if(board[6][6]==1&&board[5][6]==1&&board[4][6]==1&&board[3][6]==1&&board[2][6]==2){
				board[6][6] = 2;
				board[5][6] = 2;
				board[4][6] = 2;
				board[3][6] = 2;
			}
			if(board[6][6]==1&&board[5][6]==1&&board[4][6]==1&&board[3][6]==1&&board[2][6]==1&&board[1][6]==2){
				board[6][6] = 2;
				board[5][6] = 2;
				board[4][6] = 2;
				board[3][6] = 2;
				board[2][6] = 2;
			}
			if(board[6][6]==1&&board[5][6]==1&&board[4][6]==1&&board[3][6]==1&&board[2][6]==1&&board[1][6]==1&&board[0][6]==2){
				board[6][6] = 2;
				board[5][6] = 2;
				board[4][6] = 2;
				board[3][6] = 2;
				board[2][6] = 2;
				board[1][6] = 2;
			}
				if(board[7][5]==1&&board[7][4]==2){
				board[7][5] = 2;
			}
			if(board[7][5]==1&&board[7][4]==1&&board[7][3]==2){
				board[7][5] = 2;
				board[7][4] = 2;
			}
			if(board[7][5]==1&&board[7][4]==1&&board[7][3]==1&&board[7][2]==2){
				board[7][5] = 2;
				board[7][4] = 2;
				board[7][3] = 2;
			}
			if(board[7][5]==1&&board[7][4]==1&&board[7][3]==1&&board[7][2]==1&&board[7][1]==2){
				board[7][5] = 2;
				board[7][4] = 2;
				board[7][3] = 2;
				board[7][2] = 2;
			}
			if(board[7][5]==1&&board[7][4]==1&&board[7][3]==1&&board[7][2]==1&&board[7][1]==1&&board[7][0]==2){
				board[7][5] = 2;
				board[7][4] = 2;
				board[7][3] = 2;
				board[7][2] = 2;
				board[7][1] = 2;
			}
			if(board[6][5]==1&&board[5][4]==2){
				board[6][5] = 2;
			}
			if(board[6][5]==1&&board[5][4]==1&&board[4][3]==2){
				board[6][5] = 2;
				board[5][4] = 2;
			}
			if(board[6][5]==1&&board[5][4]==1&&board[4][3]==1&&board[3][2]==2){
				board[6][5] = 2;
				board[5][4] = 2;
				board[4][3] = 2;
			}
			if(board[6][5]==1&&board[5][4]==1&&board[4][3]==1&&board[3][2]==1&&board[2][1]==2){
				board[6][5] = 2;
				board[5][4] = 2;
				board[4][3] = 2;
				board[3][2] = 2;
			}
			if(board[6][5]==1&&board[5][4]==1&&board[4][3]==1&&board[3][2]==1&&board[2][1]==1&&board[1][0]==2){
				board[6][5] = 2;
				board[5][4] = 2;
				board[4][3] = 2;
				board[3][2] = 2;
				board[2][1] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==0&&retu==7){//0,7黒	
			if(board[1][7]==2&&board[2][7]==1){
				board[1][7] = 1;
			}
			if(board[1][7]==2&&board[2][7]==2&&board[3][7]==1){
				board[1][7] = 1;
				board[2][7] = 1;
			}
			if(board[1][7]==2&&board[2][7]==2&&board[3][7]==2&&board[4][7]==1){
				board[1][7] = 1;
				board[2][7] = 1;
				board[3][7] = 1;
			}
			if(board[1][7]==2&&board[2][7]==2&&board[3][7]==2&&board[4][7]==2&&board[5][7]==1){
				board[1][7] = 1;
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
			}
			if(board[1][7]==2&&board[2][7]==2&&board[3][7]==2&&board[4][7]==2&&board[5][7]==2&&board[6][7]==1){
				board[1][7] = 1;
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
			}
			if(board[1][7]==2&&board[2][7]==2&&board[3][7]==2&&board[4][7]==2&&board[5][7]==2&&board[6][7]==2&&board[7][7]==1){
				board[1][7] = 1;
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
				board[6][7] = 1;
			}
			if(board[0][6]==2&&board[0][5]==1){
				board[0][6] = 1;
			}
			if(board[0][6]==2&&board[0][5]==2&&board[0][4]==1){
				board[0][6] = 1;
				board[0][5] = 1;
			}
			if(board[0][6]==2&&board[0][5]==2&&board[0][4]==2&&board[0][3]==1){
				board[0][6] = 1;
				board[0][5] = 1;
				board[0][4] = 1;
			}
			if(board[0][6]==2&&board[0][5]==2&&board[0][4]==2&&board[0][3]==2&&board[0][2]==1){
				board[0][6] = 1;
				board[0][5] = 1;
				board[0][4] = 1;
				board[0][3] = 1;
			}
			if(board[0][6]==2&&board[0][5]==2&&board[0][4]==2&&board[0][3]==2&&board[0][2]==2&&board[0][1]==1){
				board[0][6] = 1;
				board[0][5] = 1;
				board[0][4] = 1;
				board[0][3] = 1;
				board[0][2] = 1;
			}
			if(board[0][6]==2&&board[0][5]==2&&board[0][4]==2&&board[0][3]==2&&board[0][2]==2&&board[0][1]==2&&board[0][0]==1){
				board[0][6] = 1;
				board[0][5] = 1;
				board[0][4] = 1;
				board[0][3] = 1;
				board[0][2] = 1;
				board[0][1] = 1;
				}
			if(board[1][6]==2&&board[2][5]==1){
				board[1][6] = 1;
			}
			if(board[1][6]==2&&board[2][5]==2&&board[3][4]==1){
				board[1][6] = 1;
				board[2][5] = 1;
			}
			if(board[1][6]==2&&board[2][5]==2&&board[3][4]==2&&board[4][3]==1){
				board[1][6] = 1;
				board[2][5] = 1;
				board[3][4] = 1;
			}
			if(board[1][6]==2&&board[2][5]==2&&board[3][4]==2&&board[4][3]==2&&board[5][2]==1){
				board[1][6] = 1;
				board[2][5] = 1;
				board[3][4] = 1;
				board[4][3] = 1;
			}
			if(board[1][6]==2&&board[2][5]==2&&board[3][4]==2&&board[4][3]==2&&board[5][2]==2&&board[6][1]==1){
				board[1][6] = 1;
				board[2][5] = 1;
				board[3][4] = 1;
				board[4][3] = 1;
				board[5][2] = 1;
			}
			if(board[1][6]==2&&board[2][5]==2&&board[3][4]==2&&board[4][3]==2&&board[5][2]==2&&board[6][1]==2&&board[7][0]==1){
				board[1][6] = 1;
				board[2][5] = 1;
				board[3][4] = 1;
				board[4][3] = 1;
				board[5][2] = 1;
				board[6][1] = 1;
				}
		}
		if(board[gyo][retu]==2&&gyo==0&&retu==7){//0,7白
			if(board[1][7]==1&&board[2][7]==2){
				board[1][7] = 2;
			}
			if(board[1][7]==1&&board[2][7]==1&&board[3][7]==2){
				board[1][7] = 2;
				board[2][7] = 2;
			}
			if(board[1][7]==1&&board[2][7]==1&&board[3][7]==1&&board[4][7]==2){
				board[1][7] = 2;
				board[2][7] = 2;
				board[3][7] = 2;
			}
			if(board[1][7]==1&&board[2][7]==1&&board[3][7]==1&&board[4][7]==1&&board[5][7]==2){
				board[1][7] = 2;
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
			}
			if(board[1][7]==1&&board[2][7]==1&&board[3][7]==1&&board[4][7]==1&&board[5][7]==1&&board[6][7]==2){
				board[1][7] = 2;
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
				board[5][7] = 2;
			}
			if(board[1][7]==1&&board[2][7]==1&&board[3][7]==1&&board[4][7]==1&&board[5][7]==1&&board[6][7]==1&&board[7][7]==2){
				board[1][7] = 2;
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
				board[5][7] = 2;
				board[6][7] = 2;
			}
			if(board[0][6]==1&&board[0][5]==2){
				board[0][6] = 2;
			}
			if(board[0][6]==1&&board[0][5]==1&&board[0][4]==2){
				board[0][6] = 2;
				board[0][5] = 2;
			}
			if(board[0][6]==1&&board[0][5]==1&&board[0][4]==1&&board[0][3]==2){
				board[0][6] = 2;
				board[0][5] = 2;
				board[0][4] = 2;
			}
			if(board[0][6]==1&&board[0][5]==1&&board[0][4]==1&&board[0][3]==1&&board[0][2]==2){
				board[0][6] = 2;
				board[0][5] = 2;
				board[0][4] = 2;
				board[0][3] = 2;
			}
			if(board[0][6]==1&&board[0][5]==1&&board[0][4]==1&&board[0][3]==1&&board[0][2]==1&&board[0][1]==2){
				board[0][6] = 2;
				board[0][5] = 2;
				board[0][4] = 2;
				board[0][3] = 2;
				board[0][2] = 2;
			}
			if(board[0][6]==1&&board[0][5]==1&&board[0][4]==1&&board[0][3]==1&&board[0][2]==1&&board[0][1]==1&&board[0][0]==2){
				board[0][6] = 2;
				board[0][5] = 2;
				board[0][4] = 2;
				board[0][3] = 2;
				board[0][2] = 2;
				board[0][1] = 2;
			}
			if(board[1][6]==1&&board[2][5]==2){
				board[1][6] = 2;
			}
			if(board[1][6]==1&&board[2][5]==1&&board[3][4]==2){
				board[1][6] = 2;
				board[2][5] = 2;
			}
			if(board[1][6]==1&&board[2][5]==1&&board[3][4]==1&&board[4][3]==2){
				board[1][6] = 2;
				board[2][5] = 2;
				board[3][4] = 2;
			}
			if(board[1][6]==1&&board[2][5]==1&&board[3][4]==2&&board[4][3]==1&&board[5][2]==2){
				board[1][6] = 2;
				board[2][5] = 2;
				board[3][4] = 2;
				board[4][3] = 2;
			}
			if(board[1][6]==1&&board[2][5]==1&&board[3][4]==1&&board[4][3]==1&&board[5][2]==1&&board[6][1]==2){
				board[1][6] = 2;
				board[2][5] = 2;
				board[3][4] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
			}
			if(board[1][6]==1&&board[2][5]==1&&board[3][4]==1&&board[4][3]==1&&board[5][2]==1&&board[6][1]==1&&board[7][0]==2){
				board[1][6] = 2;
				board[2][5] = 2;
				board[3][4] = 2;
				board[4][3] = 2;
				board[5][2] = 2;
				board[6][1] = 2;
				}
		}
		if(board[gyo][retu]==1&&gyo==1&&retu==7){//1,7黒
			if(board[2][7]==2&&board[3][7]==1){
				board[2][7] = 1;
			}
			if(board[2][7]==2&&board[3][7]==2&&board[4][7]==1){
				board[2][7] = 1;
				board[3][7] = 1;
			}
			if(board[2][7]==2&&board[3][7]==2&&board[4][7]==2&&board[5][7]==1){
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
			}
			if(board[2][7]==2&&board[3][7]==2&&board[4][7]==2&&board[5][7]==2&&board[6][7]==1){
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
			}
			if(board[1][7]==2&&board[3][7]==2&&board[4][7]==2&&board[5][7]==2&&board[6][7]==2&&board[7][7]==1){
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
				board[6][7] = 1;
			}
			if(board[1][6]==2&&board[1][5]==1){
				board[1][6] = 1;
			}
			if(board[1][6]==2&&board[1][5]==2&&board[1][4]==1){
				board[1][6] = 1;
				board[1][5] = 1;
			}
			if(board[1][6]==2&&board[1][5]==2&&board[1][4]==2&&board[1][3]==1){
				board[1][6] = 1;
				board[1][5] = 1;
				board[1][4] = 1;
			}
			if(board[1][6]==2&&board[1][5]==2&&board[1][4]==2&&board[1][3]==2&&board[1][2]==1){
				board[1][6] = 1;
				board[1][5] = 1;
				board[1][4] = 1;
				board[1][3] = 1;
			}
			if(board[1][6]==2&&board[1][5]==2&&board[1][4]==2&&board[1][3]==2&&board[1][2]==2&&board[1][1]==1){
				board[1][6] = 1;
				board[1][5] = 1;
				board[1][4] = 1;
				board[1][3] = 1;
				board[1][2] = 1;
			}
			if(board[1][6]==2&&board[1][5]==2&&board[1][4]==2&&board[1][3]==2&&board[1][2]==2&&board[1][1]==2&&board[1][0]==1){
				board[1][6] = 1;
				board[1][5] = 1;
				board[1][4] = 1;
				board[1][3] = 1;
				board[1][2] = 1;
				board[1][1] = 1;
				}
			if(board[2][6]==2&&board[3][5]==1){
				board[2][6] = 1;
			}
			if(board[2][6]==2&&board[3][5]==2&&board[4][4]==1){
				board[2][6] = 1;
				board[3][5] = 1;
			}
			if(board[2][6]==2&&board[3][5]==2&&board[4][4]==2&&board[5][3]==1){
				board[2][6] = 1;
				board[3][5] = 1;
				board[4][4] = 1;
			}
			if(board[2][6]==2&&board[3][5]==2&&board[4][4]==2&&board[5][3]==2&&board[6][2]==1){
				board[2][6] = 1;
				board[3][5] = 1;
				board[4][4] = 1;
				board[5][3] = 1;
			}
			if(board[2][6]==2&&board[3][5]==2&&board[4][4]==2&&board[5][3]==2&&board[6][2]==2&&board[7][1]==1){
				board[2][6] = 1;
				board[3][5] = 1;
				board[4][4] = 1;
				board[5][3] = 1;
				board[6][2] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==1&&retu==7){//1,7白
			if(board[2][7]==1&&board[3][7]==2){
				board[2][7] = 2;
			}
			if(board[2][7]==1&&board[3][7]==1&&board[4][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
			}
			if(board[2][7]==1&&board[3][7]==1&&board[4][7]==1&&board[5][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
			}
			if(board[2][7]==1&&board[3][7]==1&&board[4][7]==1&&board[5][7]==1&&board[6][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
				board[5][7] = 2;
			}
			if(board[2][7]==1&&board[3][7]==1&&board[4][7]==1&&board[5][7]==1&&board[6][7]==1&&board[7][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
				board[5][7] = 2;
				board[6][7] = 2;
			}
			if(board[1][6]==1&&board[1][5]==2){
				board[1][6] = 2;
			}
			if(board[1][6]==1&&board[1][5]==1&&board[1][4]==2){
				board[1][6] = 2;
				board[1][5] = 2;
			}
			if(board[1][6]==1&&board[1][5]==1&&board[1][4]==1&&board[1][3]==2){
				board[1][6] = 2;
				board[1][5] = 2;
				board[1][4] = 2;
			}
			if(board[1][6]==1&&board[1][5]==1&&board[1][4]==1&&board[1][3]==1&&board[1][2]==2){
				board[1][6] = 2;
				board[1][5] = 2;
				board[1][4] = 2;
				board[1][3] = 2;
			}
			if(board[1][6]==1&&board[1][5]==1&&board[1][4]==1&&board[1][3]==1&&board[1][2]==1&&board[1][1]==2){
				board[1][6] = 2;
				board[1][5] = 2;
				board[1][4] = 2;
				board[1][3] = 2;
				board[1][2] = 2;
			}
			if(board[1][6]==1&&board[1][5]==1&&board[1][4]==1&&board[1][3]==1&&board[1][2]==1&&board[1][1]==1&&board[1][0]==2){
				board[1][6] = 2;
				board[1][5] = 2;
				board[1][4] = 2;
				board[1][3] = 2;
				board[1][2] = 2;
				board[1][1] = 2;
			}
			if(board[2][6]==1&&board[3][5]==2){
				board[2][6] = 2;
			}
			if(board[2][6]==1&&board[3][5]==1&&board[4][4]==2){
				board[2][6] = 2;
				board[3][5] = 2;
			}
			if(board[2][6]==1&&board[3][5]==1&&board[4][4]==1&&board[5][3]==2){
				board[2][6] = 2;
				board[3][5] = 2;
				board[4][4] = 2;
			}
			if(board[2][6]==1&&board[3][5]==1&&board[4][4]==1&&board[5][3]==1&&board[6][2]==2){
				board[2][6] = 2;
				board[3][5] = 2;
				board[4][4] = 2;
				board[5][3] = 2;
			}
			if(board[2][6]==1&&board[3][5]==1&&board[4][4]==1&&board[5][3]==1&&board[6][2]==1&&board[7][1]==2){
				board[2][6] = 2;
				board[3][5] = 2;
				board[4][4] = 2;
				board[5][3] = 2;
				board[6][2] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==2&&retu==7){//2,7黒
			if(board[3][7]==2&&board[4][7]==1){
				board[3][7] = 1;
			}
			if(board[1][7]==2&&board[0][7]==1){
				board[1][7] = 1;
			}
			if(board[3][7]==2&&board[4][7]==2&&board[5][7]==1){
				board[3][7] = 1;
				board[4][7] = 1;
			}
			if(board[3][7]==2&&board[4][7]==2&&board[5][7]==2&&board[6][7]==1){
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
			}
			if(board[3][7]==2&&board[4][7]==2&&board[5][7]==2&&board[6][7]==2&&board[7][7]==1){
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
				board[6][7] = 1;
			}
			if(board[2][6]==2&&board[2][5]==1){
				board[2][6] = 1;
			}
			if(board[2][6]==2&&board[2][5]==2&&board[2][4]==1){
				board[2][6] = 1;
				board[2][5] = 1;
			}
			if(board[2][6]==2&&board[2][5]==2&&board[2][4]==2&&board[2][3]==1){
				board[2][6] = 1;
				board[2][5] = 1;
				board[2][4] = 1;
			}
			if(board[2][6]==2&&board[2][5]==2&&board[2][4]==2&&board[2][3]==2&&board[2][2]==1){
				board[2][6] = 1;
				board[2][5] = 1;
				board[2][4] = 1;
				board[2][3] = 1;
			}
			if(board[2][6]==2&&board[2][5]==2&&board[2][4]==2&&board[2][3]==2&&board[2][2]==2&&board[2][1]==1){
				board[2][6] = 1;
				board[2][5] = 1;
				board[2][4] = 1;
				board[2][3] = 1;
				board[2][2] = 1;
			}
			if(board[2][6]==2&&board[2][5]==2&&board[2][4]==2&&board[2][3]==2&&board[2][2]==2&&board[2][1]==2&&board[2][0]==1){
				board[2][6] = 1;
				board[2][5] = 1;
				board[2][4] = 1;
				board[2][3] = 1;
				board[2][2] = 1;
				board[2][1] = 1;
				}
			if(board[3][6]==2&&board[4][5]==1){
				board[3][6] = 1;
			}
			if(board[1][6]==2&&board[0][5]==1){
				board[1][6] = 1;
			}
			if(board[3][6]==2&&board[4][5]==2&&board[5][4]==1){
				board[3][6] = 1;
				board[4][5] = 1;
			}
			if(board[3][6]==2&&board[4][5]==2&&board[5][4]==2&&board[6][3]==1){
				board[3][6] = 1;
				board[4][5] = 1;
				board[5][4] = 1;
			}
			if(board[3][6]==2&&board[4][5]==2&&board[5][4]==2&&board[6][3]==2&&board[7][2]==1){
				board[3][6] = 1;
				board[4][5] = 1;
				board[5][4] = 1;
				board[6][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==2&&retu==7){//2,7白
			if(board[3][7]==1&&board[4][7]==2){
				board[3][7] = 2;
			}
			if(board[1][7]==1&&board[0][7]==2){
				board[1][7] = 2;
			}
			if(board[3][7]==1&&board[4][7]==1&&board[5][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
			}
			if(board[3][7]==1&&board[4][7]==1&&board[5][7]==1&&board[6][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
			}
			if(board[3][7]==1&&board[4][7]==1&&board[5][7]==1&&board[6][7]==1&&board[7][7]==2){
				board[2][7] = 2;
				board[3][7] = 2;
				board[4][7] = 2;
				board[5][7] = 2;
			}
			if(board[2][6]==1&&board[2][5]==2){
				board[2][6] = 2;
			}
			if(board[2][6]==1&&board[2][5]==1&&board[2][4]==2){
				board[1][6] = 2;
				board[1][5] = 2;
			}
			if(board[2][6]==1&&board[2][5]==1&&board[2][4]==1&&board[2][3]==2){
				board[2][6] = 2;
				board[2][5] = 2;
				board[2][4] = 2;
			}
			if(board[2][6]==1&&board[2][5]==1&&board[2][4]==1&&board[2][3]==1&&board[2][2]==2){
				board[2][6] = 2;
				board[2][5] = 2;
				board[2][4] = 2;
				board[2][3] = 2;
			}
			if(board[2][6]==1&&board[2][5]==1&&board[2][4]==1&&board[2][3]==1&&board[2][2]==1&&board[2][1]==2){
				board[2][6] = 2;
				board[2][5] = 2;
				board[2][4] = 2;
				board[2][3] = 2;
				board[2][2] = 2;
			}
			if(board[2][6]==1&&board[2][5]==1&&board[2][4]==1&&board[2][3]==1&&board[2][2]==1&&board[2][1]==1&&board[2][0]==2){
				board[2][6] = 2;
				board[2][5] = 2;
				board[2][4] = 2;
				board[2][3] = 2;
				board[2][2] = 2;
				board[2][1] = 2;
				}
			if(board[3][6]==1&&board[4][5]==2){
				board[3][6] = 2;
			}
			if(board[3][6]==1&&board[0][5]==2){
				board[3][6] = 2;
			}
			if(board[3][6]==1&&board[4][5]==1&&board[5][4]==2){
				board[3][6] = 2;
				board[4][5] = 2;
			}
			if(board[3][6]==1&&board[4][5]==1&&board[5][4]==1&&board[6][3]==2){
				board[3][6] = 2;
				board[4][5] = 2;
				board[5][4] = 2;
			}
			if(board[3][6]==1&&board[4][5]==1&&board[5][4]==1&&board[6][3]==1&&board[7][2]==2){
				board[3][6] = 2;
				board[4][5] = 2;
				board[5][4] = 2;
				board[6][3] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==3&&retu==7){//3,7黒
			if(board[4][7]==2&&board[5][7]==1){
				board[4][7] = 1;
			}
			if(board[2][7]==2&&board[1][7]==1){
				board[2][7] = 1;
			}
			if(board[4][7]==2&&board[5][7]==2&&board[6][7]==1){
				board[4][7] = 1;
				board[5][7] = 1;
			}
			if(board[2][7]==2&&board[1][7]==2&&board[0][7]==1){
				board[2][7] = 1;
				board[1][7] = 1;
			}
			if(board[4][7]==2&&board[5][7]==2&&board[6][7]==2&&board[7][7]==1){
				board[4][7] = 1;
				board[5][7] = 1;
				board[6][7] = 1;
			}
			if(board[3][6]==2&&board[3][5]==1){
				board[3][6] = 1;
			}
			if(board[3][6]==2&&board[3][5]==2&&board[3][4]==1){
				board[3][6] = 1;
				board[3][5] = 1;
			}
			if(board[3][6]==2&&board[3][5]==2&&board[3][4]==2&&board[3][3]==1){
				board[3][6] = 1;
				board[3][5] = 1;
				board[3][4] = 1;
			}
			if(board[3][6]==2&&board[3][5]==2&&board[3][4]==2&&board[3][3]==2&&board[3][2]==1){
				board[3][6] = 1;
				board[3][5] = 1;
				board[3][4] = 1;
				board[3][3] = 1;
			}
			if(board[3][6]==2&&board[3][5]==2&&board[3][4]==2&&board[3][3]==2&&board[3][2]==2&&board[3][1]==1){
				board[3][6] = 1;
				board[3][5] = 1;
				board[3][4] = 1;
				board[3][3] = 1;
				board[3][2] = 1;
			}
			if(board[3][6]==2&&board[3][5]==2&&board[3][4]==2&&board[3][3]==2&&board[3][2]==2&&board[3][1]==2&&board[3][0]==1){
				board[3][6] = 1;
				board[3][5] = 1;
				board[3][4] = 1;
				board[3][3] = 1;
				board[3][2] = 1;
				board[3][1] = 1;
				}
			if(board[4][6]==2&&board[5][5]==1){
				board[4][6] = 1;
			}
			if(board[2][6]==2&&board[1][5]==1){
				board[2][6] = 1;
			}
			if(board[4][6]==2&&board[5][5]==2&&board[6][4]==1){
				board[4][6] = 1;
				board[5][5] = 1;
			}
			if(board[2][6]==2&&board[1][5]==2&&board[0][4]==1){
				board[2][6] = 1;
				board[1][5] = 1;
			}
			if(board[4][6]==2&&board[5][5]==2&&board[6][4]==2&&board[7][3]==1){
				board[3][6] = 1;
				board[4][5] = 1;
				board[5][4] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==3&&retu==7){//3,7白
			if(board[4][7]==1&&board[5][7]==2){
				board[4][7] = 2;
			}
			if(board[2][7]==1&&board[1][7]==2){
				board[2][7] = 2;
			}
			if(board[4][7]==1&&board[5][7]==1&&board[6][7]==2){
				board[4][7] = 2;
				board[5][7] = 2;
			}
			if(board[2][7]==1&&board[1][7]==1&&board[0][7]==2){
				board[2][7] = 2;
				board[1][7] = 2;
			}
			if(board[4][7]==1&&board[5][7]==1&&board[6][7]==1&&board[7][7]==2){
				board[4][7] = 2;
				board[5][7] = 2;
				board[6][7] = 2;
			}
			if(board[3][6]==1&&board[3][5]==1&&board[3][4]==2){
				board[3][6] = 2;
				board[3][5] = 2;
			}
			if(board[3][6]==1&&board[3][5]==1&&board[3][4]==1&&board[3][3]==2){
				board[3][6] = 2;
				board[3][5] = 2;
				board[3][4] = 2;
			}
			if(board[3][6]==1&&board[3][5]==1&&board[3][4]==1&&board[3][3]==1&&board[3][2]==2){
				board[3][6] = 2;
				board[3][5] = 2;
				board[3][4] = 2;
				board[3][3] = 2;
			}
			if(board[3][6]==1&&board[3][5]==1&&board[3][4]==1&&board[3][3]==1&&board[3][2]==1&&board[3][1]==2){
				board[3][6] = 2;
				board[3][5] = 2;
				board[3][4] = 2;
				board[3][3] = 2;
				board[3][2] = 2;
			}
			if(board[3][6]==1&&board[3][5]==1&&board[3][4]==1&&board[3][3]==1&&board[3][2]==1&&board[3][1]==1&&board[3][0]==2){
				board[3][6] = 2;
				board[3][5] = 2;
				board[3][4] = 2;
				board[3][3] = 2;
				board[3][2] = 2;
				board[3][1] = 2;
				}
			if(board[4][6]==1&&board[5][5]==2){
				board[4][6] = 2;
			}
			if(board[2][6]==1&&board[1][5]==2){
				board[2][6] = 2;
			}
			if(board[4][6]==1&&board[5][5]==1&&board[6][4]==2){
				board[4][6] = 2;
				board[5][5] = 2;
			}
			if(board[2][6]==1&&board[1][5]==1&&board[0][4]==2){
				board[2][6] = 2;
				board[1][5] = 2;
			}
			if(board[4][6]==1&&board[5][5]==1&&board[6][4]==1&&board[7][3]==2){
				board[4][6] = 2;
				board[5][5] = 2;
				board[6][4] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==4&&retu==7){//4,7黒
			if(board[5][7]==2&&board[6][7]==1){
				board[5][7] = 1;
			}
			if(board[3][7]==2&&board[2][7]==1){
				board[3][7] = 1;
			}
			if(board[5][7]==2&&board[6][7]==2&&board[7][7]==1){
				board[5][7] = 1;
				board[6][7] = 1;
			}
			if(board[3][7]==2&&board[2][7]==2&&board[1][7]==1){
				board[3][7] = 1;
				board[2][7] = 1;
			}
			if(board[3][7]==2&&board[2][7]==2&&board[1][7]==1&&board[0][7]==1){
				board[3][7] = 1;
				board[2][7] = 1;
				board[1][7] = 1;
			}
			if(board[4][6]==2&&board[4][5]==1){
				board[4][6] = 1;
			}
			if(board[4][6]==2&&board[4][5]==2&&board[4][4]==1){
				board[4][6] = 1;
				board[4][5] = 1;
			}
			if(board[4][6]==2&&board[4][5]==2&&board[4][4]==2&&board[4][3]==1){
				board[4][6] = 1;
				board[4][5] = 1;
				board[4][4] = 1;
			}
			if(board[4][6]==2&&board[4][5]==2&&board[4][4]==2&&board[4][3]==2&&board[4][2]==1){
				board[4][6] = 1;
				board[4][5] = 1;
				board[4][4] = 1;
				board[4][3] = 1;
			}
			if(board[4][6]==2&&board[4][5]==2&&board[4][4]==2&&board[4][3]==2&&board[4][2]==2&&board[4][1]==1){
				board[4][6] = 1;
				board[4][5] = 1;
				board[4][4] = 1;
				board[4][3] = 1;
				board[4][2] = 1;
			}
			if(board[4][6]==2&&board[4][5]==2&&board[4][4]==2&&board[4][3]==2&&board[4][2]==2&&board[4][1]==2&&board[4][0]==1){
				board[4][6] = 1;
				board[4][5] = 1;
				board[4][4] = 1;
				board[4][3] = 1;
				board[4][2] = 1;
				board[4][1] = 1;
				}
			if(board[5][6]==2&&board[6][5]==1){
				board[5][6] = 1;
			}
			if(board[3][6]==2&&board[2][5]==1){
				board[3][6] = 1;
			}
			if(board[5][6]==2&&board[6][5]==2&&board[7][4]==1){
				board[5][6] = 1;
				board[6][5] = 1;
			}
			if(board[3][6]==2&&board[2][5]==2&&board[1][4]==1){
				board[3][6] = 1;
				board[2][5] = 1;
			}
			if(board[3][6]==2&&board[2][5]==2&&board[1][4]==2&&board[0][3]==1){
				board[3][6] = 1;
				board[2][5] = 1;
				board[1][4] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==4&&retu==7){//4,7白
			if(board[5][7]==1&&board[6][7]==2){
				board[5][7] = 2;
			}
			if(board[3][7]==1&&board[2][7]==2){
				board[3][7] = 2;
			}
			if(board[5][7]==1&&board[6][7]==1&&board[7][7]==2){
				board[5][7] = 2;
				board[6][7] = 2;
			}
			if(board[3][7]==1&&board[2][7]==1&&board[1][7]==2){
				board[3][7] = 2;
				board[2][7] = 2;
			}
			if(board[3][7]==1&&board[2][7]==1&&board[1][7]==1&&board[0][7]==2){
				board[3][7] = 2;
				board[2][7] = 2;
				board[1][7] = 2;
			}
			if(board[4][6]==1&&board[4][5]==1&&board[4][4]==2){
				board[4][6] = 2;
				board[4][5] = 2;
			}
			if(board[4][6]==1&&board[4][5]==1&&board[4][4]==1&&board[4][3]==2){
				board[4][6] = 2;
				board[4][5] = 2;
				board[4][4] = 2;
			}
			if(board[4][6]==1&&board[4][5]==1&&board[4][4]==1&&board[4][3]==1&&board[4][2]==2){
				board[4][6] = 2;
				board[4][5] = 2;
				board[4][4] = 2;
				board[4][3] = 2;
			}
			if(board[4][6]==1&&board[4][5]==1&&board[4][4]==1&&board[4][3]==1&&board[4][2]==1&&board[4][1]==2){
				board[4][6] = 2;
				board[4][5] = 2;
				board[4][4] = 2;
				board[4][3] = 2;
				board[4][2] = 2;
			}
			if(board[4][6]==1&&board[4][5]==1&&board[4][4]==1&&board[4][3]==1&&board[4][2]==1&&board[4][1]==1&&board[4][0]==2){
				board[4][6] = 2;
				board[4][5] = 2;
				board[4][4] = 2;
				board[4][3] = 2;
				board[4][2] = 2;
				board[4][1] = 2;
				}
			if(board[5][6]==1&&board[6][5]==2){
				board[5][6] = 2;
			}
			if(board[3][6]==1&&board[2][5]==2){
				board[3][6] = 2;
			}
			if(board[5][6]==1&&board[6][5]==1&&board[7][4]==2){
				board[5][6] = 2;
				board[6][5] = 2;
			}
			if(board[3][6]==1&&board[2][5]==1&&board[1][4]==2){
				board[3][6] = 2;
				board[2][5] = 2;
			}
			if(board[3][6]==1&&board[2][5]==1&&board[1][4]==1&&board[0][3]==2){
				board[3][6] = 2;
				board[2][5] = 2;
				board[1][4] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==5&&retu==7){//5,7黒
			if(board[6][7]==2&&board[7][7]==1){
				board[6][7] = 1;
			}
			if(board[4][7]==2&&board[3][7]==1){
				board[4][7] = 1;
			}
			if(board[4][7]==2&&board[3][7]==2&&board[2][7]==1){
				board[4][7] = 1;
				board[3][7] = 1;
			}
			if(board[4][7]==2&&board[3][7]==2&&board[2][7]==2&&board[1][7]==1){
				board[4][7] = 1;
				board[3][7] = 1;
				board[2][7] = 1;
			}
			if(board[4][7]==2&&board[3][7]==2&&board[2][7]==2&&board[1][7]==2&&board[0][7]==1){
				board[4][7] = 1;
				board[3][7] = 1;
				board[2][7] = 1;
				board[1][7] = 1;
			}
			if(board[5][6]==2&&board[5][5]==1){
				board[5][6] = 1;
			}
			if(board[5][6]==2&&board[5][5]==2&&board[5][4]==1){
				board[5][6] = 1;
				board[5][5] = 1;
			}
			if(board[5][6]==2&&board[5][5]==2&&board[5][4]==2&&board[5][3]==1){
				board[5][6] = 1;
				board[5][5] = 1;
				board[5][4] = 1;
			}
			if(board[5][6]==2&&board[5][5]==2&&board[5][4]==2&&board[5][3]==2&&board[5][2]==1){
				board[5][6] = 1;
				board[5][5] = 1;
				board[5][4] = 1;
				board[5][3] = 1;
			}
			if(board[5][6]==2&&board[5][5]==2&&board[5][4]==2&&board[5][3]==2&&board[5][2]==2&&board[5][1]==1){
				board[5][6] = 1;
				board[5][5] = 1;
				board[5][4] = 1;
				board[5][3] = 1;
				board[5][2] = 1;
			}
			if(board[5][6]==2&&board[5][5]==2&&board[5][4]==2&&board[5][3]==2&&board[5][2]==2&&board[5][1]==2&&board[5][0]==1){
				board[5][6] = 1;
				board[5][5] = 1;
				board[5][4] = 1;
				board[5][3] = 1;
				board[5][2] = 1;
				board[5][1] = 1;
				}
			if(board[6][6]==2&&board[7][5]==1){
				board[6][6] = 1;
			}
			if(board[4][6]==2&&board[3][5]==1){
				board[4][4] = 1;
			}
			if(board[4][6]==2&&board[3][5]==2&&board[2][4]==1){
				board[4][6] = 1;
				board[3][5] = 1;
			}
			if(board[4][6]==2&&board[3][5]==2&&board[2][4]==1){
				board[4][6] = 1;
				board[3][5] = 1;
			}
			if(board[4][6]==2&&board[3][5]==2&&board[2][4]==2&&board[1][3]==1){
				board[4][6] = 1;
				board[3][5] = 1;
				board[2][4] = 1;
			}
			if(board[4][6]==2&&board[3][5]==2&&board[2][4]==2&&board[1][3]==2&&board[0][2]==1){
				board[4][6] = 1;
				board[3][5] = 1;
				board[2][4] = 1;
				board[1][3] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==5&&retu==7){//5,7白
			if(board[6][7]==1&&board[7][7]==2){
				board[6][7] = 2;
			}
			if(board[4][7]==1&&board[3][7]==2){
				board[4][7] = 2;
			}
			if(board[4][7]==1&&board[3][7]==1&&board[2][7]==2){
				board[4][7] = 2;
				board[3][7] = 2;
			}
			if(board[4][7]==1&&board[3][7]==1&&board[2][7]==1&&board[1][7]==2){
				board[4][7] = 2;
				board[3][7] = 2;
				board[2][7] = 2;
			}
			if(board[4][7]==1&&board[3][7]==1&&board[2][7]==1&&board[1][7]==1&&board[0][7]==2){
				board[4][7] = 2;
				board[3][7] = 2;
				board[2][7] = 2;
				board[1][7] = 2;
			}
			if(board[5][6]==1&&board[5][5]==2){
				board[5][6] = 2;
			}
			if(board[5][6]==1&&board[5][5]==1&&board[5][4]==2){
				board[5][6] = 2;
				board[5][5] = 2;
			}
			if(board[5][6]==1&&board[5][5]==1&&board[5][4]==1&&board[5][3]==2){
				board[5][6] = 2;
				board[5][5] = 2;
				board[5][4] = 2;
			}
			if(board[5][6]==1&&board[5][5]==1&&board[5][4]==1&&board[5][3]==1&&board[5][2]==2){
				board[5][6] = 2;
				board[5][5] = 2;
				board[5][4] = 2;
				board[5][3] = 2;
			}
			if(board[5][6]==1&&board[5][5]==1&&board[5][4]==1&&board[5][3]==1&&board[5][2]==1&&board[5][1]==2){
				board[5][6] = 2;
				board[5][5] = 2;
				board[5][4] = 2;
				board[5][3] = 2;
				board[5][2] = 2;
			}
			if(board[5][6]==1&&board[5][5]==1&&board[5][4]==1&&board[5][3]==1&&board[5][2]==1&&board[5][1]==1&&board[5][0]==2){
				board[5][6] = 2;
				board[5][5] = 2;
				board[5][4] = 2;
				board[5][3] = 2;
				board[5][2] = 2;
				board[5][1] = 2;
				}
			if(board[6][6]==1&&board[7][5]==2){
				board[6][6] = 2;
			}
			if(board[4][6]==1&&board[3][5]==2){
				board[4][6] = 2;
			}
			if(board[4][6]==1&&board[3][5]==1&&board[2][4]==2){
				board[4][6] = 2;
				board[3][5] = 2;
			}
			if(board[4][6]==1&&board[3][5]==1&&board[2][4]==1&&board[1][3]==2){
				board[4][6] = 2;
				board[3][5] = 2;
				board[2][4] = 2;
			}
			if(board[4][6]==1&&board[3][5]==1&&board[2][4]==1&&board[1][3]==1&&board[0][2]==2){
				board[4][6] = 2;
				board[3][5] = 2;
				board[2][4] = 2;
				board[1][3] = 2;
			}
		}
			if(board[gyo][retu]==1&&gyo==6&&retu==7){//6,7黒
			if(board[5][7]==2&&board[4][7]==1){
				board[5][7] = 1;
			}
			if(board[5][7]==2&&board[4][7]==2&&board[3][7]==1){
				board[5][7] = 1;
				board[4][7] = 1;
			}
			if(board[5][7]==2&&board[4][7]==2&&board[3][7]==2&&board[2][7]==1){
				board[5][7] = 1;
				board[4][7] = 1;
				board[3][7] = 1;
			}
			if(board[5][7]==2&&board[4][7]==2&&board[3][7]==2&&board[2][7]==2&&board[1][7]==1){
				board[5][7] = 1;
				board[4][7] = 1;
				board[3][7] = 1;
				board[2][7] = 1;
			}
			if(board[5][7]==2&&board[4][7]==2&&board[3][7]==2&&board[2][7]==2&&board[1][7]==2&&board[0][7]==1){
				board[5][7] = 1;
				board[4][7] = 1;
				board[3][7] = 1;
				board[2][7] = 1;
				board[1][7] = 1;
			}
			if(board[6][6]==2&&board[6][5]==1){
				board[6][6] = 1;
			}
			if(board[6][6]==2&&board[6][5]==2&&board[6][4]==1){
				board[6][6] = 1;
				board[6][5] = 1;
			}
			if(board[6][6]==2&&board[6][5]==2&&board[6][4]==2&&board[6][3]==1){
				board[6][6] = 1;
				board[6][5] = 1;
				board[6][4] = 1;
			}
			if(board[6][6]==2&&board[6][5]==2&&board[6][4]==2&&board[6][3]==2&&board[6][2]==1){
				board[6][6] = 1;
				board[6][5] = 1;
				board[6][4] = 1;
				board[6][3] = 1;
			}
			if(board[6][6]==2&&board[6][5]==2&&board[6][4]==2&&board[6][3]==2&&board[6][2]==2&&board[6][1]==1){
				board[6][6] = 1;
				board[6][5] = 1;
				board[6][4] = 1;
				board[6][3] = 1;
				board[6][2] = 1;
			}
			if(board[6][6]==2&&board[6][5]==2&&board[6][4]==2&&board[6][3]==2&&board[6][2]==2&&board[6][1]==2&&board[6][0]==1){
				board[6][6] = 1;
				board[6][5] = 1;
				board[6][4] = 1;
				board[6][3] = 1;
				board[6][2] = 1;
				board[6][1] = 1;
				}
			if(board[5][6]==2&&board[4][5]==1){
				board[5][6] = 1;
			}
			if(board[5][6]==2&&board[4][5]==2&&board[3][4]==1){
				board[5][6] = 1;
				board[4][5] = 1;
			}
			if(board[5][6]==2&&board[4][5]==2&&board[3][4]==2&&board[2][3]==1){
				board[5][6] = 1;
				board[4][5] = 1;
				board[3][4] = 1;
			}
			if(board[5][6]==2&&board[4][5]==2&&board[3][4]==2&&board[2][3]==2&&board[1][2]==1){
				board[5][6] = 1;
				board[4][5] = 1;
				board[3][4] = 1;
				board[2][3] = 1;
			}
			if(board[5][6]==2&&board[4][5]==2&&board[3][4]==2&&board[2][3]==2&&board[1][2]==2&&board[0][1]==1){
				board[5][6] = 1;
				board[4][5] = 1;
				board[3][4] = 1;
				board[2][3] = 1;
				board[1][2] = 1;
			}
		}
		if(board[gyo][retu]==2&&gyo==6&&retu==7){//6,7白
			if(board[5][7]==1&&board[4][7]==2){
				board[5][7] = 2;
			}
			if(board[5][7]==1&&board[4][7]==1&&board[3][7]==2){
				board[5][7] = 2;
				board[4][7] = 2;
			}
			if(board[5][7]==1&&board[4][7]==1&&board[3][7]==1&&board[2][7]==2){
				board[5][7] = 2;
				board[4][7] = 2;
				board[3][7] = 2;
			}
			if(board[5][7]==1&&board[4][7]==1&&board[3][7]==1&&board[2][7]==1&&board[1][7]==2){
				board[5][7] = 2;
				board[4][7] = 2;
				board[3][7] = 2;
				board[2][7] = 2;
			}
			if(board[5][7]==1&&board[4][7]==1&&board[3][7]==1&&board[2][7]==1&&board[1][7]==1&&board[0][7]==2){
				board[5][7] = 2;
				board[4][7] = 2;
				board[3][7] = 2;
				board[2][7] = 2;
				board[1][7] = 2;
			}
			if(board[6][6]==1&&board[6][5]==2){
				board[6][6] = 2;
			}
			if(board[6][6]==1&&board[6][5]==1&&board[6][4]==2){
				board[6][6] = 2;
				board[6][5] = 2;
			}
			if(board[6][6]==1&&board[6][5]==1&&board[6][4]==1&&board[6][3]==2){
				board[6][6] = 2;
				board[6][5] = 2;
				board[6][4] = 2;
			}
			if(board[6][6]==1&&board[6][5]==1&&board[6][4]==1&&board[6][3]==1&&board[6][2]==2){
				board[6][6] = 2;
				board[6][5] = 2;
				board[6][4] = 2;
				board[6][3] = 2;
			}
			if(board[6][6]==1&&board[6][5]==1&&board[6][4]==1&&board[6][3]==1&&board[6][2]==1&&board[6][1]==2){
				board[6][6] = 2;
				board[6][5] = 2;
				board[6][4] = 2;
				board[6][3] = 2;
				board[6][2] = 2;
			}
			if(board[6][6]==1&&board[6][5]==1&&board[6][4]==1&&board[6][3]==1&&board[6][2]==1&&board[6][1]==1&&board[6][0]==2){
				board[6][6] = 2;
				board[6][5] = 2;
				board[6][4] = 2;
				board[6][3] = 2;
				board[6][2] = 2;
				board[6][1] = 2;
				}
			if(board[5][6]==1&&board[4][5]==2){
				board[5][6] = 2;
			}
			if(board[5][6]==1&&board[4][5]==1&&board[3][4]==2){
				board[5][6] = 2;
				board[4][5] = 2;
			}
			if(board[5][6]==1&&board[4][5]==1&&board[3][4]==1&&board[2][3]==2){
				board[5][6] = 2;
				board[4][5] = 2;
				board[3][4] = 2;
			}
			if(board[5][6]==1&&board[4][5]==1&&board[3][4]==1&&board[2][3]==1&&board[1][2]==2){
				board[5][6] = 2;
				board[4][5] = 2;
				board[3][4] = 2;
				board[2][3] = 2;
			}
			if(board[5][6]==1&&board[4][5]==1&&board[3][4]==1&&board[2][3]==1&&board[1][2]==1&&board[0][1]==2){
				board[5][6] = 2;
				board[4][5] = 2;
				board[3][4] = 2;
				board[2][3] = 2;
				board[1][2] = 2;
			}
		}
		if(board[gyo][retu]==1&&gyo==7&&retu==7){//7,7黒
			if(board[6][7]==2&&board[5][7]==1){
				board[6][7] = 1;
			}
			if(board[6][7]==2&&board[5][7]==2&&board[4][7]==1){
				board[6][7] = 1;
				board[5][7] = 1;
			}
			if(board[6][7]==2&&board[5][7]==2&&board[4][7]==2&&board[3][7]==1){
				board[6][7] = 1;
				board[5][7] = 1;
				board[4][7] = 1;
			}
			if(board[6][7]==2&&board[5][7]==2&&board[4][7]==2&&board[3][7]==2&&board[2][7]==1){
				board[6][7] = 1;
				board[5][7] = 1;
				board[4][7] = 1;
				board[3][7] = 1;
			}
			if(board[6][7]==2&&board[5][7]==2&&board[4][7]==2&&board[3][7]==2&&board[2][7]==2&&board[1][7]==1){
				board[1][7] = 1;
				board[2][7] = 1;
				board[3][7] = 1;
				board[4][7] = 1;
				board[5][7] = 1;
			}
			if(board[6][7]==2&&board[5][7]==2&&board[4][7]==2&&board[3][7]==2&&board[2][7]==2&&board[1][7]==2&&board[0][7]==1){
				board[6][7] = 1;
				board[5][7] = 1;
				board[4][7] = 1;
				board[3][7] = 1;
				board[2][7] = 1;
				board[1][7] = 1;
			}
			if(board[7][6]==2&&board[7][5]==1){
				board[7][6] = 1;
			}
			if(board[7][6]==2&&board[7][5]==2&&board[7][4]==1){
				board[7][6] = 1;
				board[7][5] = 1;
			}
			if(board[7][6]==2&&board[7][5]==2&&board[7][4]==2&&board[7][3]==1){
				board[7][6] = 1;
				board[7][5] = 1;
				board[7][4] = 1;
			}
			if(board[7][6]==2&&board[7][5]==2&&board[7][4]==2&&board[7][3]==2&&board[7][2]==1){
				board[7][6] = 1;
				board[7][5] = 1;
				board[7][4] = 1;
				board[7][3] = 1;
			}
			if(board[7][6]==2&&board[7][5]==2&&board[7][4]==2&&board[7][3]==2&&board[7][2]==2&&board[7][1]==1){
				board[7][6] = 1;
				board[7][5] = 1;
				board[7][4] = 1;
				board[7][3] = 1;
				board[7][2] = 1;
			}
			if(board[7][6]==2&&board[7][5]==2&&board[7][4]==2&&board[7][3]==2&&board[7][2]==2&&board[7][1]==2&&board[7][0]==1){
				board[7][6] = 1;
				board[7][5] = 1;
				board[7][4] = 1;
				board[7][3] = 1;
				board[7][2] = 1;
				board[7][1] = 1;
				}
			if(board[6][6]==2&&board[5][5]==1){
				board[6][6] = 1;
			}
			if(board[6][6]==2&&board[5][5]==2&&board[4][4]==1){
				board[6][6] = 1;
				board[5][5] = 1;
			}
			if(board[6][6]==2&&board[5][5]==2&&board[4][4]==2&&board[3][3]==1){
				board[6][6] = 1;
				board[5][5] = 1;
				board[4][4] = 1;
			}
			if(board[6][6]==2&&board[5][5]==2&&board[4][4]==2&&board[3][3]==2&&board[2][2]==1){
				board[6][6] = 1;
				board[5][5] = 1;
				board[4][4] = 1;
				board[3][3] = 1;
			}
			if(board[6][6]==2&&board[5][5]==2&&board[4][4]==2&&board[3][3]==2&&board[2][2]==2&&board[1][1]==1){
				board[6][6] = 1;
				board[5][5] = 1;
				board[4][4] = 1;
				board[3][3] = 1;
				board[2][2] = 1;
			}
			if(board[6][6]==2&&board[5][5]==2&&board[4][4]==2&&board[3][3]==2&&board[2][2]==2&&board[1][1]==2&&board[0][0]==1){
				board[6][6] = 1;
				board[5][5] = 1;
				board[4][4] = 1;
				board[3][3] = 1;
				board[2][2] = 1;
				board[1][1] = 1;
				}
		}
		if(board[gyo][retu]==2&&gyo==7&&retu==7){//7,7白
			if(board[6][7]==1&&board[5][7]==2){
				board[6][7] = 2;
			}
			if(board[6][7]==1&&board[5][7]==1&&board[4][7]==2){
				board[6][7] = 2;
				board[5][7] = 2;
			}
			if(board[6][7]==1&&board[5][7]==1&&board[4][7]==1&&board[3][7]==2){
				board[6][7] = 2;
				board[5][7] = 2;
				board[4][7] = 2;
			}
			if(board[6][7]==1&&board[5][7]==1&&board[4][7]==1&&board[3][7]==1&&board[2][7]==2){
				board[6][7] = 2;
				board[5][7] = 2;
				board[4][7] = 2;
				board[3][7] = 2;
			}
			if(board[6][7]==1&&board[5][7]==1&&board[4][7]==1&&board[3][7]==1&&board[2][7]==1&&board[1][7]==2){
				board[6][7] = 2;
				board[5][7] = 2;
				board[4][7] = 2;
				board[3][7] = 2;
				board[2][7] = 2;
			}
			if(board[6][7]==1&&board[5][7]==1&&board[4][7]==1&&board[3][7]==1&&board[2][7]==1&&board[1][7]==1&&board[0][7]==2){
				board[6][7] = 2;
				board[5][7] = 2;
				board[4][7] = 2;
				board[3][7] = 2;
				board[2][7] = 2;
				board[1][7] = 2;
			}
			if(board[7][6]==1&&board[7][5]==2){
				board[7][6] = 2;
			}
			if(board[7][6]==1&&board[7][5]==1&&board[7][4]==2){
				board[7][6] = 2;
				board[7][5] = 2;
			}
			if(board[7][6]==1&&board[7][5]==1&&board[7][4]==1&&board[7][3]==2){
				board[7][6] = 2;
				board[7][5] = 2;
				board[7][4] = 2;
			}
			if(board[7][6]==1&&board[7][5]==1&&board[7][4]==1&&board[7][3]==1&&board[7][2]==2){
				board[7][6] = 2;
				board[7][5] = 2;
				board[7][4] = 2;
				board[7][3] = 2;
			}
			if(board[7][6]==1&&board[7][5]==1&&board[7][4]==1&&board[7][3]==1&&board[7][2]==1&&board[7][1]==2){
				board[7][6] = 2;
				board[7][5] = 2;
				board[7][4] = 2;
				board[7][3] = 2;
				board[7][2] = 2;
			}
			if(board[7][6]==1&&board[7][5]==1&&board[7][4]==1&&board[7][3]==1&&board[7][2]==1&&board[7][1]==1&&board[7][0]==2){
				board[7][6] = 2;
				board[7][5] = 2;
				board[7][4] = 2;
				board[7][3] = 2;
				board[7][2] = 2;
				board[7][1] = 2;
				}
			if(board[6][6]==1&&board[5][5]==2){
				board[6][6] = 2;
			}
			if(board[6][6]==1&&board[5][5]==1&&board[4][4]==2){
				board[6][6] = 2;
				board[5][5] = 2;
			}
			if(board[6][6]==1&&board[5][5]==1&&board[4][4]==1&&board[3][3]==2){
				board[6][6] = 2;
				board[5][5] = 2;
				board[4][4] = 2;
			}
			if(board[6][6]==1&&board[5][5]==1&&board[4][4]==1&&board[3][3]==1&&board[2][2]==2){
				board[6][6] = 2;
				board[5][5] = 2;
				board[4][4] = 2;
				board[3][3] = 2;
			}
			if(board[6][6]==1&&board[5][5]==1&&board[4][4]==1&&board[3][3]==1&&board[2][2]==1&&board[1][1]==2){
				board[6][6] = 2;
				board[5][5] = 2;
				board[4][4] = 2;
				board[3][3] = 2;
				board[2][2] = 2;
			}
			if(board[6][6]==1&&board[5][5]==1&&board[4][4]==1&&board[3][3]==1&&board[2][2]==1&&board[1][1]==1&&board[0][0]==2){
				board[6][6] = 2;
				board[5][5] = 2;
				board[4][4] = 2;
				board[3][3] = 2;
				board[2][2] = 2;
				board[1][1] = 2;
			}
		}
		/*check = 0;
		for(a=0;a==7;a++){
			//縦
			if(board[gyo][retu]==1){
				printf("\nok\n");
				if((board[a][retu]==2&&check==0)||(board[a][retu]==2&&check==1)){
					check=1;
				}
				if(board[a][retu]==1){
					check=2;
				}
				if(board[a][retu]==1&&check==1){
					check=3;
				}
				if(check==0||check==1||check==2){
					e=1;
				}
			}
			if(board[gyo][retu]==2){
				if((board[a][retu]==1&&check==0)||(board[a][retu]==1&&check==1)){
					check=1;
				}
				if(board[a][retu]==2){
					check=2;
				}
				if(board[a][retu]==2&&check==1){
					check=3;
				}
				if(check==0||check==1||check==2){
					e=1;
				}
			}
			//横
			if(board[gyo][retu]==1){
				if((board[gyo][a]==2&&check==0)||(board[gyo][a]==2&&check==1)){
					check=1;
				}
				if(board[gyo][a]==1){
					check=2;
				}
				if(board[gyo][a]==1&&check==1){
					check=3;
				}
				if(check==0||check==1||check==2){
					e=1;
				}
			}
			if(board[gyo][retu]==2){
				if((board[gyo][a]==1&&check==0)||(board[gyo][a]==1&&check==1)){
					check=1;
				}
				if(board[gyo][a]==2){
					check=2;
				}
				if(board[gyo][a]==2&&check==1){
					check=3;
				}
				if(check==0||check==1||check==2){
					e=1;
				}
			}
		}
		printf("%d\n",check);//check*/
		if(e == 1){
			turn--;
			e = 0;
			board[gyo][retu] = 0;
			printf("\nエラー\n違う種類の石を挟むように石を置こう\n");
		}
		printf("  1 2 3 4 5 6 7 8 \n");
		d = 1;
		for(a=0 ;a<8; a++){//石を置いた後の盤面を表示
			printf("%d ",d);
			d++;
			for(b=0 ;b<8; b++){
				if(board[a][b] == 1){
					board[a][b] = bla;
				}
				else if(board[a][b] == 2){
					board[a][b] = whi;
				} 
				else if(board[a][b] == 0){
					board[a][b] = masu;
				}
				printf("%c ",board[a][b]);
			}
			printf("\n");
		}
		for(a=0 ;a<8; a++){
			for(b=0 ;b<8; b++){
				if(board[a][b] == bla){
					board[a][b] = 1;
				}
				else if(board[a][b] == whi){
					board[a][b] = 2;
				} 
				else if(board[a][b] == masu){
					board [a][b] = 0;
				}
			}
		}
		for(a=0;a<8;a++){
			for(b=0;b<8;b++){
				if(board[a][b] == 1){
					losebla = 1;
				}
				if(board[a][b] == 2){
					losewhi = 1;
				} 
			}
		}
		if(losebla == 0||losewhi == 0){
			turn=61;
		}
		else if(losebla==1&&losewhi==1){
			losebla = 0;
			losewhi = 0;
		}
	}
	if(losebla==0){
		printf("\n黒の石が無くなったから黒の勝ち！");
		winwhi = 1;
	}
	if(losewhi==0){
		printf("\n白の石が無くなったから白の勝ち！");
		winbla = 1;
	}
	if(winwhi==0&&winbla==0){
		for(a=0;a<8;a++){
			for(b=0;b<8;b++){
				if(board[a][b] == 1){
					judgebla++;
				}
				if(board[a][b] == 2){
					judgewhi++;
				} 
			}
		}
	}
	printf("\n先攻(x)の石は%d個、後攻(o)の石は%d個\n",judgewhi,judgebla);
	if(judgebla>judgewhi){
		printf("後攻の勝ち");
	}
	if(judgewhi>judgebla){
		printf("先攻の勝ち");
	}
}
