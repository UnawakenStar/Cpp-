#include<stdio.h>
int main(){
	//����x�ͳ�ʼ��n
	int x;
	int n = 0;
	//����x
	scanf("%d",&x);
	//�ж�λ��
	if(x > 999){
		n = 4;
	} else if(x > 99){
		n = 3;
	}else if(x > 9){
		n = 2;
	}else if(x > 0){
		n = 1;
	}
	printf("%d\n",n);
	return 0;
} 
