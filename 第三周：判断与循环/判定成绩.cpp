#include<stdio.h>
int main(){
	//����PASS�ɼ�Ϊ60
	const int PASS = 60;
	int score;
	//����ɼ�
	printf("������ɼ���");
	scanf("%d",&score);
	printf("������ĳɼ���%d\n",score);
	//�ж��Ƿ񼰸�
	if(score < PASS){
		printf("���ź�������ɼ�û�м���\n");
	} else{
		printf("ף���㣬����ɼ������ˡ�\n"); 
	}
	printf("�ټ�\n");
return 0;
}
