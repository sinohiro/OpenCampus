#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	int a;
	int b;
	int c[2];/*当てるやーつー*/
	int d[2];//ループで使う変数
	int e[2];//入力する変数

	e[3]=0;

	while(1){

//-------------------------------------------------------------------------------------------------------------------------------

		printf("「１」(かんたん？モード)\n「２」(ふつうモード)\n「３」(むずかしい？モード)\n「１」と「３」は難しいよ？\nどれか入力してね　");
		scanf("%d",&e[0]);
		 
		if(e[0]==1){
			printf("\nなるほど…「かんたん」モードだね？\nゲームだよ\n0～100,000までの好きな数字を入力してね　");

			a=100001;
			b=100001;
			c[1]=0;

				while(a>100000){
					scanf("%d",&a);
					if(a>100000){
						printf("\n入力した数字が100,000よりも大きいね？\n違う数字を入力してね　");}
					else{break;}
				}
				printf("\nもう一回入力してね　");

				while(b>100000){
					scanf("%d",&b);
					if(b>100000){
						printf("\n入力した数字が100,000よりも大きいね？\n違う数字を入力してね　");}
					else{break;}
				}
				if(a>b){
					c[1]=a-b;}
				else if(a<b){
					c[1]=b-a;}
				else{
				c[1]=a/2+b/2;}

		//a,b,cまで使用

			printf("\nこれは数字当てゲームだよ\n0～100,000までの数字を入力してね　");

			for(d[1]=0; d[1]<20; d[1]++){
			scanf("%d",&e[1]);
			if(e[1]>100000){
				printf("\n数字が100,000よりも大きいね？100,000未満の数字を入力してね");}
			else if(e[1]>c[1]){
				printf("\n『%d』 か…大きいねぇ…さっきのよりも小さい数字を入力してね",e[1]);}
			else if(e[1]<c[1]){
				printf("\n『%d  か…小さいねぇ…さっきのよりも大きい数字を入力してね",e[1]);}
			else{
				printf("\nやったね！あたりだよ！おめでとう！！");
			break;}

			if(d[1]==4){
				printf("\n\nアドバイス：最初に入力した二つの数字を思い出してね　");
			}
			else if(d[1]==9){
				printf("\n\nヒント１：最初に入力した数字が同じなら、\nそれぞれの数字を半分にして（小数点以下切捨て）から足してるよ　");
			}
			else if(d[1]==14){
				printf("\n\nヒント２：最初に入力した２つの数字の『差』が答えだよ　");
			}
			else if(d[1]==19){
				printf("\n\nもうだめだ……おしまいだぁ……　");
				d[1]=20;
				break;
			}
			else{
				printf("\n残り%d回　",19-d[1]);}
			}

			switch(d[1])
			{
			case 0:printf("\n一発……だと……？\n奇跡だ！僕は信じないぞ！！\n");
				break;
			case 1:printf("\nなん……だと……？\n");
				break;
			case 2:printf("\nなん……だと……？\n");
				break;
			case 3:printf("\nなん……だと……？\n");
				break;
			case 4:printf("\nなん……だと……？\n");
				break;
			case 5:printf("\nあのヒントで理解するとは……\nやるじゃないか\n");
				break;
			case 6:printf("\nこんなはずでは！？\n");
				break;
			case 7:printf("\nこんなはずでは！？\n");
				break;
			case 8:printf("\nこんなはずでは！？\n");
				break;
			case 9:printf("\nこんなはずでは！？\n");
				break;
			case 10:printf("\nあなたの入力した数字は二つとも同じだったのか…\n違う数字でもやってみたら？\n");
				break;
			case 11:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 12:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 13:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 14:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 15:printf("\nあのヒントで正解するとは……\n君は理解力が良いようだ……\n");
				break;
			case 16:printf("\n計画通り\n");
				break;
			case 17:printf("\n計画通り\n");
				break;
			case 18:printf("\n計画通り\n");
				break;
			case 19:printf("\n危なかったねぇ…\n");
				break;
			case 20:printf("\nドンマイ×２\n次がんばってね☆\n答えは %d だったんだよね\n",c[1]);
				break;
			}
		}

//----------------------------------------------------------------------------------------------------------

		else if(e[0]==2){

			srand(time(NULL));
			c[2]=rand()%5000+1;

			printf("\nほうほう…「ふつう」モードだね？\nこれは数字当てゲームだよ\n1～5,000までの数字を入力してね　");

			for(d[2]=0; d[2]<20; d[2]++){
			scanf("%d",&e[2]);
			if(e[2]>5000){
				printf("\n数字が5,000よりも大きいね？5,000未満の数字を入力してね");}
			else if(e[2]==0){
				printf("\n0だって！？　1以上だよ？");}
			else if(e[2]>c[2]){
				printf("\n『%d』 か…大きいねぇ…さっきのよりも小さい数字を入力してね",e[2]);}
			else if(e[2]<c[2]){
				printf("\n『%d』 か…小さいねぇ…さっきのよりも大きい数字を入力してね",e[2]);}
			else{
				printf("\nやったね！あたりだよ！おめでとう！！");
			break;}

			if(d[2]==19){
				printf("\n\nもうだめだ……おしまいだぁ……　");
				d[2]=20;
				break;
			}
			else{
				printf("\n残り%d回　",19-d[2]);}
			}

			switch(d[2])
			{
			case 0:printf("\n一発……だと……？\n奇跡だ！僕は信じないぞ！！\n");
				break;
			case 1:printf("\nなん……だと……？\n");
				break;
			case 2:printf("\nなん……だと……？\n");
				break;
			case 3:printf("\nなん……だと……？\n");
				break;
			case 4:printf("\nなん……だと……？\n");
				break;
			case 5:printf("\nなん……だと……？\n");
				break;
			case 6:printf("\nこんなはずでは！？\n");
				break;
			case 7:printf("\nこんなはずでは！？\n");
				break;
			case 8:printf("\nこんなはずでは！？\n");
				break;
			case 9:printf("\nこんなはずでは！？\n");
				break;
			case 10:printf("\nこんなはずでは！？\n");
				break;
			case 11:printf("\n君ぃ……なかなかやるじゃないか\n何か、隠しモードがあるかもしれない\n");
				break;
			case 12:printf("\n君ぃ……なかなかやるじゃないか\n何か、隠しモードがあるかもしれない\n");
				break;
			case 13:printf("\n君ぃ……なかなかやるじゃないか\n何か、隠しモードがあるかもしれない\n");
				break;
			case 14:printf("\n君ぃ……なかなかやるじゃないか\n何か、隠しモードがあるかもしれない\n");
				break;
			case 15:printf("\n計画通り\n");
				break;
			case 16:printf("\n計画通り\n");
				break;
			case 17:printf("\n計画通り\n");
				break;
			case 18:printf("\n計画通り\n");
				break;
			case 19:printf("\n危なかったねぇ…\n");
				break;
			case 20:printf("\nドンマイ×２\n次がんばってね☆\n答えは %d だったんだよね\n",c[2]);
				break;
			}
		}

//----------------------------------------------------------------------------------------------------------

		else if(e[0]==3){

			srand(time(NULL));
			c[2]=rand()%50000+1;

			printf("\n「むずかしい」か…がんばれよ？\nこれは数字当てゲームだよ\n1～50,000までの数字を入力してね\n判定が逆だから注意してね？  ");

			for(d[2]=0; d[2]<20; d[2]++){
			scanf("%d",&e[2]);		
			if(e[2]>50000){
				printf("\n数字が50,000よりも大きいね？50,000未満の数字を入力してね");}
			else if(e[2]==0){
				printf("\n0だって！？　1以上だよ？");}
			else if(e[2]<c[2]){
				printf("\n『%d』 か…大きいねぇ…さっきのよりも小さい数字を入力してね",e[2]);}
			else if(e[2]>c[2]){
				printf("\n『%d』 か…小さいねぇ…さっきのよりも大きい数字を入力してね",e[2]);}
			else{
				printf("\nやったね！あたりだよ！おめでとう！！");
			break;}

			if(d[2]==19){
				printf("\n\nもうだめだ……おしまいだぁ……　");
				d[2]=20;
				break;
			}
			else{
				printf("\n残り%d回　",19-d[2]);}
			}

			switch(d[2])
			{
			case 0:printf("\n一発……だと……？\n奇跡だ！僕は信じないぞ！！\n");
				break;
			case 1:printf("\nなん……だと……？\n");
				break;
			case 2:printf("\nなん……だと……？\n");
				break;
			case 3:printf("\nなん……だと……？\n");
				break;
			case 4:printf("\nなん……だと……？\n");
				break;
			case 5:printf("\nなん……だと……？\n");
				break;
			case 6:printf("\nこんなはずでは！？\n");
				break;
			case 7:printf("\nこんなはずでは！？\n");
				break;
			case 8:printf("\nこんなはずでは！？\n");
				break;
			case 9:printf("\nこんなはずでは！？\n");
				break;
			case 10:printf("\nこんなはずでは！？\n");
				break;
			case 11:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 12:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 13:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 14:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 15:printf("\n計画通り\n最初の画面で４って入力してみて？\n時間があるならね\n");
				break;
			case 16:printf("\n計画通り\n最初の画面で４って入力してみて？\n時間があるならね\n");
				break;
			case 17:printf("\n計画通り\n最初の画面で４って入力してみて？\n時間があるならね\n");
				break;
			case 18:printf("\n計画通り\n最初の画面で４って入力してみて？\n時間があるならね\n");
				break;
			case 19:printf("\n危なかったねぇ…\n");
				break;
			case 20:printf("\nドンマイ×２\n次がんばってね☆\n答えは %d だったんだよね\n",c[2]);
				break;
			}
		}
		else if(e[0]==4){
			srand(time(NULL));
			c[2]=rand()%500000+1;

			printf("\n隠しモードにようこそ！\n数字当てゲームだと思うよ？\n1～500,000までの数字を入力してね\n判定が変わるから注意してね？\n最初は普通だよ？  ");

			for(d[2]=0; d[2]<40; d[2]++){
				scanf("%d",&e[2]);	
				if(d[2]== 0 || d[2]== 1 || d[2]== 2 || d[2]== 3 || d[2]== 4 || d[2]== 10 || d[2]== 11 || d[2]== 12 || d[2]== 13 || d[2]== 14 || d[2]== 20 || d[2]== 21 || d[2]== 22 || d[2]== 23 || d[2]== 24 || d[2]== 30 || d[2]== 31 || d[2]== 32 || d[2]== 33 || d[2]== 34){
					if(e[2]>500000){
						printf("\n数字が500,000よりも大きいね？500,000未満の数字を入力してね");}
					else if(e[2]==0){
						printf("\n0だって！？　1以上だよ？");}
					else if(e[2]>c[2]){
						printf("\n『%d』 か…大きいねぇ…さっきのよりも小さい数字を入力してね",e[2]);}
					else if(e[2]<c[2]){
						printf("\n『%d』 か…小さいねぇ…さっきのよりも大きい数字を入力してね",e[2]);}
					else{
						printf("\nやったね！あたりだよ！おめでとう！！");
					break;}
				}
				else if(d[2]== 5 || d[2]== 6 || d[2]== 7 || d[2]== 8 || d[2]== 9 || d[2]== 15 || d[2]== 16 || d[2]== 17 || d[2]== 18 || d[2]== 19 || d[2]== 25 || d[2]== 26 || d[2]== 27 || d[2]== 28 || d[2]== 29 || d[2]== 35 || d[2]== 36 || d[2]== 37 || d[2]== 38 || d[2]== 39){
					if(e[2]>500000){
						printf("\n数字が500,000よりも大きいね？500,000未満の数字を入力してね");}
					else if(e[2]==0){
						printf("\n0だって！？　1以上だよ？");}
					else if(e[2]<c[2]){
						printf("\n『%d』 か…大きいねぇ…さっきのよりも小さい数字を入力してね",e[2]);}
					else if(e[2]>c[2]){
						printf("\n『%d』 か…小さいねぇ…さっきのよりも大きい数字を入力してね",e[2]);}
					else{
						printf("\nやったね！あたりだよ！おめでとう！！");
					break;}
				}
				if(d[2]== 4 ||d[2]== 9 ||d[2]== 14 ||d[2]== 19 ||d[2]== 24 ||d[2]== 29 ||d[2]== 34){
					printf("\n\n判定が反転した!\n残り%d回　",39-d[2]);}
				else if(d[2]==39){
					printf("\n\nもうだめだ……おしまいだぁ……　");
					d[2]=40;
					break;}
				else{
					printf("\n残り%d回　",39-d[2]);
					if(d[2]==40){
						break;
					}
				}
			}
			
			switch(d[2])
			{
			case 0:printf("\n一発……だと……？\n奇跡だ！僕は信じないぞ！！\n");
				break;
			case 1:printf("\nなん……だと……？\n");
				break;
			case 2:printf("\nなん……だと……？\n");
				break;
			case 3:printf("\nなん……だと……？\n");
				break;
			case 4:printf("\nなん……だと……？\n");
				break;
			case 5:printf("\nなん……だと……？\n");
				break;
			case 6:printf("\nなん……だと……？\n");
				break;
			case 7:printf("\nこんなはずでは！？\n");
				break;
			case 8:printf("\nこんなはずでは！？\n");
				break;
			case 9:printf("\nこんなはずでは！？\n");
				break;
			case 10:printf("\nこんなはずでは！？\n");
				break;
			case 11:printf("\nこんなはずでは！？\n");
				break;
			case 12:printf("\nこんなはずでは！？\n");
				break;
			case 13:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 14:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 15:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 16:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 17:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 18:printf("\n君ぃ……なかなかやるじゃないか\n");
				break;
			case 19:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 20:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 21:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 22:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 23:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 24:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 25:printf("\n高専では常識に囚われてはいけないのですね！\n");
				break;
			case 26:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 27:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 28:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 29:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 30:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 31:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 32:printf("\n君、Simejiって知ってるかい？\n");
				break;
			case 33:printf("\n計画通り\n");
				break;
			case 34:printf("\n計画通り\n");
				break;
			case 35:printf("\n計画通り\n");
				break;
			case 36:printf("\n計画通り\n");
				break;
			case 37:printf("\n計画通り\n");
				break;
			case 38:printf("\n計画通り\n");
				break;
			case 39:printf("\n危なかったねぇ…\n");
				break;
			case 40:printf("\nドンマイ×２\n次がんばってね☆\n答えは %d だったんだよね\n",c[2]);
				break;
			}
		}
	else{
		printf("\n「1」か「2」か「3」「4」を入力してね");
	}
	puts("");
	} 
}