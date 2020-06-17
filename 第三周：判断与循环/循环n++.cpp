#include<stdio.h>

int main()
{
	//初始化x和n
	int x;
	int n = 0;
	//输入x
	scanf("%d",&x);
	
	n++;
	x /= 10;
	while(x > 0){
		n++;
		x /= 10;
	} 
	printf("%d\n",n);
	return 0;
 } 
