#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int num=1;
	int result=0;
	do
	{
		result+=num;
		//num++;
		printf("\n%d,%d",num,result);
	}while(num++ && num<101);
}

void main()
{
	char ch;
	do
	{
		ch=getchar();
		if(ch>='A' && ch<='Z')
		{
			ch+=32;
		}
		putchar(ch);//���һ���ַ� 
		getchar();//����س� 
	}while(ch!='\t') ;
}