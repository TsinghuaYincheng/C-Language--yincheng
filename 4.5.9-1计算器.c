#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

void opencalc()
{
	ShellExecuteA(0, "open", "calc", 0, 0, 1);
}

void closecalc()
{
	system("taskkill /f /im calc.exe");
}

void movecalc()
{
	HWND win = FindWindowA("CalcFrame", "������");//��ȡ����
	if (win == NULL)
	{
		printf("Ӧ�ó���δ����");
	}
	SetWindowPos(win,NULL,0,0,200,300,0);//���ó����С/λ��
	for (;;)
	{
		//�Ŵ������
		for (int i = 0;i <= 1300;i++)
		{
			SetWindowPos(win, NULL, 0, 0, i, i*600/1300, 0);//���ó����С/λ��
			Sleep(1);
		}
		//��С������
		for (int i = 1300;i>=30 ;i--)
		{
			SetWindowPos(win, NULL, 0, 0, i, i * 600 / 1300, 0);//���ó����С/λ��
			Sleep(1);
		}
		//�����ƶ�������
		for (int i = 0;i <= 1300;i++)
		{
			SetWindowPos(win, NULL, i, 0, 200, 300, 0);//���ó����С/λ��
			Sleep(1);
		}
		//�����ƶ�������
		for (int j=0;j <= 600;j++)
		{
			SetWindowPos(win, NULL, 1300, j, 200, 300, 0);//���ó����С/λ��
			Sleep(1);
		}
		//�����ƶ�������
		for (int i = 1300;i;i--)
		{
			SetWindowPos(win, NULL,i, 600, 200, 300, 0);//���ó����С/λ��
			Sleep(1);
		}
		//�����ƶ�������
		for (int j = 600;j;j--)
		{
			SetWindowPos(win, NULL, 0, j, 200, 300, 0);//���ó����С/λ��
			Sleep(1);
		}
	}
}

void main()
{
	opencalc();
	Sleep(4000);
	movecalc();

}
