#include<stdio.h>
int main(){
	
	int price = 0;
	int total = 0;
	printf("Ӧ�ս��(Ԫ)��");
	scanf("%d",&price);
	printf("ʵ��������");	
	scanf("%d",&total);
	int change = total - price;
	printf("����%dԪ\n",change);
	return 0;
} 
