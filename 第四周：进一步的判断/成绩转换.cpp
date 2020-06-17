#include<stdio.h>
int main(){
	//初始化成绩并写入 
	int grade;
	scanf("%d",&grade);
	//转换为个位数 
	grade /= 10;
	//使用switch-case 
	switch(grade){
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
return 0;
} 
