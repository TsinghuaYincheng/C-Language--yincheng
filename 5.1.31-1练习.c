#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//����ֵλ��
//1234	123	12	1	0
int wei(int data)
{
	int length = 0;//������
	for (; data; data /= 10)
	{
		length++;
	}
	return length;
}

void main1()
{
	int num;
	printf("������һ������:");
	scanf("%d", &num);
	printf("%d", wei(num));

	system("pause");
}