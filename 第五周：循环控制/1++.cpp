//º∆À„1+1/2+1/3+......1/n 
#include<stdio.h>
int main(){
	int n;
	int i;
	double sum = 0.0;
	
	scanf("%d",&n);
	n = 10;
	for(i = 1;i <=n;i++){
		sum +=1.0/i;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
} 
