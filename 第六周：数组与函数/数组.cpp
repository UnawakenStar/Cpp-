//这个程序是危险的，因为输入的数字的数量可能超过100个，程序会崩溃 
#include<stdio.h>
int main(){
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf("%d",&x);
	while(x!=-1){
		number[cnt] = x;
		sum +=x;
		cnt ++;
		scanf("%d",&x);
	}
	if(cnt >0){
		printf("%f\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){
			if(number[i] > sum/cnt){
				printf("%d/n",number[i]); 
			}
			printf("\n");
		}
		sum+=x;
		cnt ++;
		scanf("%d", &x);
	}
	if( cnt > 0){
		printf("%f\n", sum/cnt);
		int i;
		for(i=0; i<cnt; i++){
			if(number[i] > sum/cnt){
				printf("%d/n",number[i]);
			}
		}
	}
	return 0;
} 

