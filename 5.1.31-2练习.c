#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ж�һ�����Ƿ�Ϊ����
int zhishu(int data)
{
	if (data <= 1)
	{
		return 0;
	}
	else if (data == 2 || data == 3)
	{
		return 1;
	}
	else
	{
		//ֻ�ܱ�1����������
		int flag = 1;//�ٶ�������
		for (int i = 2; i < data; i++)
		{
			if (data%i == 0)
			{
				flag= 0;
				break;
			}			
		}
		return flag; 
	}	
}

void main2()
{
	int num;
	printf("������һ������:");
	scanf("%d", &num);
	int flag = zhishu(num);
	if (flag == 1)
	{
		printf("������");
	}
	else
	{
		printf("��������");
	}

	system("pause");
}