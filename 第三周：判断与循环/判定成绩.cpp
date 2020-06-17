#include<stdio.h>
int main(){
	//定义PASS成绩为60
	const int PASS = 60;
	int score;
	//输入成绩
	printf("请输入成绩：");
	scanf("%d",&score);
	printf("你输入的成绩是%d\n",score);
	//判定是否及格
	if(score < PASS){
		printf("很遗憾，这个成绩没有及格。\n");
	} else{
		printf("祝贺你，这个成绩及格了。\n"); 
	}
	printf("再见\n");
return 0;
}
