#include<stdio.h>
int main(){
	//��ʼ���ɼ���д�� 
	int grade;
	scanf("%d",&grade);
	//ת��Ϊ��λ�� 
	grade /= 10;
	//ʹ��switch-case 
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
