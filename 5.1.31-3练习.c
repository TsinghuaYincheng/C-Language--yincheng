#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�õݹ�ʵ��1+2+3+...+n
int leijia(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return leijia(n - 1) + n;//�ݹ�����
	}
}

void main()
{
	int num;
	printf("������һ������:");
	scanf("%d", &num);
	printf("%d", leijia(num));
	system("pause");
}