#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�κ�һ������4��ż�������Բ��Ϊ��������֮��

int isit(int num)
{
	//����ֻ�ܱ�1����������
	if (num == 1)
	{
		return 0;
	}
	else if (num == 2 || num == 3)
	{
		return 1;
	}
	else
	{
		int flag = 1;//�ٶ�numΪ����
		for (int i = 2; i < num; i++)
		{
			if (num%i==0)//num��������i
			{
				flag = 0;//��������
				break;
			}
		}
		return flag;		
	}
}

void test()
{
	int data;
	printf("������һ����:");
	scanf("%d", &data);
	if (isit(data) == 1)
	{
		printf("%d������", data);
	}
	else
	{
		printf("��������");
	}
	system("pause");
}
//�ж��Ƿ�Ϊż��
int oushu(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	int data;
	printf("������һ����:");
	scanf("%d", &data);
	if (oushu(data) == 0)
	{
		printf("ERROR");
		system("pause");
	}
	else
	{
		if (data == 2)
		{
			printf("С��,�������ż��̫С");
			
		}
		else
		{
			for (int i = 2; i < data; i++)
			{
				if (isit(i) == 1 && isit(data - i) == 1)//ʵ�ֲ��
				{
					printf("%d=%d+%d", data, i, data - i);
					break;
				}
			}
		}
	}
	system("pause");
}