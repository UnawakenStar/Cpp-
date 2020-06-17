#include<stdio.h>
int main(){
	//定义第一个时间和第二个时间
	int hour1, minute1;
	int hour2, minute2; 
	//输入数据
	printf("请输入第一个时间和第二个时间：\n"); 
	scanf("%d %d",&hour1, &minute1);
	scanf("%d %d",&hour2, &minute2);
	//计算差值
	int ih = hour2 - hour1;
	int im = minute2 - minute1; 
	//判断是否需要补时 
	if(im < 0){
		im = 60 + im;
		ih --;
	} 
	printf("时间差是%d小时%d分。\n",ih, im);
return 0;
} 
