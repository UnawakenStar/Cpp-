/*tic-tac-toe game
读入一个3X3的矩阵，矩阵中的数字为1表示该位置上有一个X，为0表示O
程序判断这个矩阵中是否由获胜的一方，输出表示获胜一方的字符X或O，或输出无人获胜 
*/ 

#include<stdio.h> 
int main(){
	const int size = 3;
	int board[size][size];
	int i,j;
	int num0fX;
	int num0fO;
	int result = -1;
	
	//读入矩阵
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			scanf("%d", &board[i][j]);
		}
	} 
	//检查行
	for(i=0; i<size && result == -1; i++){
		num0fO=num0fX = 0;
		for(j=0; j<size; j++){
			if(board[i][j] == 1){
				num0fX ++;
			}else{
				num0fO ++;
			}
		}
		if(num0fO == size){
			result = 0;
		}else if(num0fX == size){
			result = 1;
		}
	} 
	//检查列
	if(result == -1){
		for(j=0; j<size && result == -1; j++){
		num0fO=num0fX = 0;
		for(i=0; i<size; i++){
			if(board[i][j] == 1){
				num0fX ++;
			}else{
				num0fO ++;
			}
		}
		if(num0fO == size){
			result = 0;
		}else if(num0fX == size){
			result = 1;
		}
	} 
	} 
}
