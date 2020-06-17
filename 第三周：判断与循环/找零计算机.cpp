#include<stdio.h>
int main(){
	
	int price = 0;
	int total = 0;
	printf("应收金额(元)：");
	scanf("%d",&price);
	printf("实际收您金额：");	
	scanf("%d",&total);
	int change = total - price;
	printf("找您%d元\n",change);
	return 0;
} 
