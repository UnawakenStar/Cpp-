#include<stdio.h>
int main(){
	const int MINOR = 35;
	
	//初始化
	int age = 0;
	//输入年龄
	printf("请输入你的年龄：");
	scanf("%d",&age);
	
	printf("你的年龄是%d岁。\n",age);
	//判定是否年轻 
	if(age < MINOR){
		printf("年轻是美好的，");
	} 
	printf("年龄决定了你的精神世界，好好珍惜吧。\n");
	
	return 0;
} 
