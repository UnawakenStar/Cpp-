#include<stdio.h>
int main(){
	//�����һ��ʱ��͵ڶ���ʱ��
	int hour1, minute1;
	int hour2, minute2; 
	//��������
	printf("�������һ��ʱ��͵ڶ���ʱ�䣺\n"); 
	scanf("%d %d",&hour1, &minute1);
	scanf("%d %d",&hour2, &minute2);
	//�����ֵ
	int ih = hour2 - hour1;
	int im = minute2 - minute1; 
	//�ж��Ƿ���Ҫ��ʱ 
	if(im < 0){
		im = 60 + im;
		ih --;
	} 
	printf("ʱ�����%dСʱ%d�֡�\n",ih, im);
return 0;
} 
