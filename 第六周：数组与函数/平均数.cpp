#include<stdio.h>
int main(){
	
	int x;
	double sum = 0;
	int cnt;
	printf("���������ֵ�������");
	scanf("%d",&cnt);
	if(cnt > 0){
		int number[cnt];
		scanf("%d",&x);
		while(x!= -1){
			number[cnt]=x;
			sum += x;
			cnt ++;
			scanf("%d",&x);
		}
	}
	printf("�ܺ�Ϊ%d",sum);
	return 0;
}	 
