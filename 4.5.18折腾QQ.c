#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

void jishuqi()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ");
	int i = 0;//������
	while (1)
	{
		i++;
		char str[20];//�ַ�����,��Ϊ�ַ����Ļ���
		sprintf(str, "title ��%d s", i);//��ʽ��������ַ���
		if (i % 3 == 0)
		{
			ShowWindow(win, SW_HIDE);
		}
		else
		{
			ShowWindow(win, SW_SHOW);
		}
		system(str);//��ʾ����
		Sleep(1000);
	}

}

void openQQ()
{
	ShellExecuteA(0, "open", "\"E:\\QQ\\Bin\\QQ.exe\"", 0, 0, 1);
}

void closeQQ()
{
	system("taskkill /f /im QQ.exe");
}

void main()
{
	openQQ();
	Sleep(3000);
	jishuqi();
}
