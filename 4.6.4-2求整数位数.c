#include<stdio.h>
#include<stdlib.h>

//12345������λ
void main2()
{
	int num;
	scanf_s("%d", &num);//��ʼ��num
	int wei = 0;
	for (;num;wei++)
	{
		num /= 10;
	}
	printf("wei=%d", wei);
	system("pause");
}