#include<stdio.h>
int main(){
	//定义RATE和STANDARD
	//RATE为double类型 
	const double RATE = 8.25;
	const int STANDARD = 40;
	//定义double类型变量pay
	double pay = 0.0;
	//定义变量hours 
	int hours;
	//输入hours 
	printf("请输入工作的小时数：");
	scanf("%d",&hours);
	printf("\n");
	//判定
	if(hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5); 
	} else{
		pay = hours * RATE;
	}
printf("应付工资：%f\n",pay);
return 0;
}
