#include<stdio.h>
#include<stdlib.h>

//��λ������쳲���������
void main2()
{
	int f1 = 1, f2 = 1, f3 = 0;
	int i = 1;
	while (i <= 8)
	{
		f3 = f1 + f2;
		printf("f1=%-5d,f2=%-5d,f3=%-5d\n", f1, f2, f3);
		f1 = f2;
		f2 = f3;//��λ����
		i++;
	}

	system("pause");
}