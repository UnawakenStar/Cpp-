#include<stdio.h>
int main(){
	//��ʼ��ab
	int a,b;
	//����ab 
	printf("����������������");
	scanf("%d,%d",&a, &b);
	
	//�ж�ab��С
	//��ʼ��max 
	int max = 0;
	if(a > b){
		max = a;
	}else{
		max = b;
	}
printf("����Ǹ���%d\n",max);
return 0;	 
} 
