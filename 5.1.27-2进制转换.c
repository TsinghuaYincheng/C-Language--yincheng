#include<stdio.h>
#include<stdlib.h>

//ʮ�������������֮��ת��:��2ȡ��,��������
//ͬ����˽���֮��ת��,��%2��/2��Ϊ8����
//(89)=1011001
void change2(int num)
{
	if (num == 0)
	{
		return;
	}
	else
	{
		//printf("%d", num % 2);//�ڵݹ�֮��Ϊ˳���ӡ
		change2(num / 2);
		printf("%d", num % 2);
	}
}

void main()
{
	int num;
	printf("��������Ҫת����ʮ������:");
	scanf_s("%d", &num);
	printf("ת����Ķ�������Ϊ:");
	change2(num);
	system("pause");
}