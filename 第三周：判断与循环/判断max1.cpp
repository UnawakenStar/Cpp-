#include<stdio.h>
int main(){
	//��ʼ��ab 
	int a,b;
	//����ab
	printf("����������������");
	scanf("%d,%d",&a, &b);
	
	//����max
	int max = 0;
	//�Ƚϳ�max��ֵ 
	if(a > b){
		max = a;
	} 
	if(b > a){
		max = b;
	} 
	printf("����Ǹ���%d\n",max); 
return 0;
}
