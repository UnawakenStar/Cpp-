#include<stdio.h>
int main(){
	//初始化ab
	int a,b;
	//输入ab 
	printf("请输入两个整数：");
	scanf("%d,%d",&a, &b);
	
	//判断ab大小
	//初始化max 
	int max = 0;
	if(a > b){
		max = a;
	}else{
		max = b;
	}
printf("大的那个是%d\n",max);
return 0;	 
} 
