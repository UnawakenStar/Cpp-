/*猜数游戏：
让计算机来想一个数，然后让用户来猜，用户每输入一个数，就告诉它是大了还是小了
，直到用户猜中为止，最后告诉用户它猜了多少次。
重点核心是循环的条件*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	//计算机随机数number
	int number = rand();
	//初始化count
	int count = 0;
	//用户输入数字
	int a;
	do{
		scanf("%d\n",&a);
	while(a < number); 
		printf("小了");
		count ++;
	while(a > number);
		printf("大了");
		count ++;
	while(a == number);
		count ++;
		printf("猜中，所用次数为%d次",count); 
	}	
	return 0;
} 
