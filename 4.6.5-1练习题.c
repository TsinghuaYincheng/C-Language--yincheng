#include<stdio.h>
#include<stdlib.h>

//��ӡ300���ڲ��ܱ�3��������,�����
void main1()
{
	int res = 0;
	int i = 0;
	while (i <= 300)
	{
		if (i % 3 == 0)
		{
			//�ܱ�3����,��ִ���κβ���
		}
		else
		{
			printf("\n%d", i);
			res += i;
		}
		i++;
	}
	printf("\nres=%d", res);
	system("pause");
}