#include<stdio.h>
#include<stdlib.h>

//��12345������λ

//����ݹ�ĺ�����
int zhengshu(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return zhengshu(num / 10) + 1;
	}
}

void main()
{
	int num;
	scanf_s("%d", &num);//��ʼ��num
	int wei = zhengshu(num);
	printf("wei=%d", wei);
	system("pause");
}