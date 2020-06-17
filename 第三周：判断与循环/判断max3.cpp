#include<stdio.h>
int main(){
	//定义ab
	int a,b;
	//输入ab 
	printf("请输入两个整数：");
	scanf("%d %d",&a, &b);
	//定义max
	int max = b;
	if(a > b){
		max = a;
	} 
	printf("大的那个是%d\n",max);
return 0;
}
