#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void openQQ()
{
	ShellExecuteA(0, "open", "\"E:\\QQ\\Bin\\QQ.exe\"", 0, 0, 1);
}

void moveQQ()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ");//��ȡ���ڱ�� HWND�鴰�ڱ��
													//FindWindowAѰ�Ҵ���,��������,����,������My Spy�����ȡ
	if (win == NULL)
	{
		printf("δ����QQ");
	}
	int x,y;
	x=1300;
	y=0;
	do
	{
		SetWindowPos(win, NULL, x, y, 700, 700, 0);
		//���ô��ڴ�С�Լ�����λ��
		x=x-10;
		y+=5;
		if(x/10%2==1)
		{
			ShowWindow(win,SW_HIDE);
		}
		else
		{
			ShowWindow(win,SW_SHOW);
		}
		Sleep(100);
		 
	}while(x);//��xΪ0ʱ��ֹ 
	
}

void closeQQ()
{
	system("taskkill /f /im QQ.exe");
}

void main()
{
	system("taskkill /f /im QQ.exe");
	openQQ();
	Sleep(2000);//�ȴ�400ms
	moveQQ();
	Sleep(2000);
	//closeQQ();

}
