#include<stdio.h>
int main(){
	//定义x和初始化n
	int x;
	int n = 0;
	//输入x
	scanf("%d",&x);
	//判断位数
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
