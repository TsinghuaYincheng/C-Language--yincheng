#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//��ٷ���100-150֮�������
int zhishu(int num)//1��������,0����
{
	if (num == 2 || num == 3)
	{
		return 1;//����
	}
	else
	{
		int flag = 1;//�����ʶ��,�ٶ�Ϊ����
		for (int i = 2;i<num;i++)
		{
			if (num%i == 0)
			{
				flag = 0;
				break;//������ѭ��
			}
		}
		return flag;
	}
}

void main()
{
	int i = 100;
	while(i<=150)
	{
		
		if (zhishu(i) == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}
	system("pause");
}