#include<stdio.h>

int main()
{
	//��ʼ��x��n
	int x;
	int n = 0;
	//����x
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
