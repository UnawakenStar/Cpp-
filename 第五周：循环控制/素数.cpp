#include<stdio.h>

int main(){
	
	int x;
	
	x=12;
	int i;
	int isPrime = 1;
	for(i=2;i<x;i++){
		if(x%i == 0){
			isPrime = 0;
			break; 
		}
	}
	if(isPrime ==1 ){
		printf("是素数\n");
	}else{
		printf("不是素数\n"); 
	}
	return 0;
} 
