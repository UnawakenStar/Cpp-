#include<stdio.h>
int main(){
	//����RATE��STANDARD
	//RATEΪdouble���� 
	const double RATE = 8.25;
	const int STANDARD = 40;
	//����double���ͱ���pay
	double pay = 0.0;
	//�������hours 
	int hours;
	//����hours 
	printf("�����빤����Сʱ����");
	scanf("%d",&hours);
	printf("\n");
	//�ж�
	if(hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5); 
	} else{
		pay = hours * RATE;
	}
printf("Ӧ�����ʣ�%f\n",pay);
return 0;
}
