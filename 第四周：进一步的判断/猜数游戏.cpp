/*������Ϸ��
�ü��������һ������Ȼ�����û����£��û�ÿ����һ�������͸������Ǵ��˻���С��
��ֱ���û�����Ϊֹ���������û������˶��ٴΡ�
�ص������ѭ��������*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	//����������number
	int number = rand();
	//��ʼ��count
	int count = 0;
	//�û���������
	int a;
	do{
		scanf("%d\n",&a);
	while(a < number); 
		printf("С��");
		count ++;
	while(a > number);
		printf("����");
		count ++;
	while(a == number);
		count ++;
		printf("���У����ô���Ϊ%d��",count); 
	}	
	return 0;
} 
