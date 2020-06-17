#include<stdio.h>
int main(){
	//初始化ab 
	int a,b;
	//输入ab
	printf("请输入两个整数：");
	scanf("%d,%d",&a, &b);
	
	//定义max
	int max = 0;
	//比较出max的值 
	if(a > b){
		max = a;
	} 
	if(b > a){
		max = b;
	} 
	printf("大的那个是%d\n",max); 
return 0;
}
