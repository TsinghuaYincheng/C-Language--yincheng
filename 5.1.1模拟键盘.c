#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	keybd_event(0x5b, 0, 0, 0);//Windows������
	keybd_event('R', 0, 0, 0);//E������
	keybd_event('R', 0, 2, 0);//E���ɿ�
	keybd_event(0x5b, 0, 2, 0);//Windows���ɿ�
	//����notepad
	//keybd_event('N', 0, 0, 0);
	//keybd_event('N', 0, 2, 0);
	//keybd_event('O', 0, 0, 0);
	//keybd_event('O', 0, 2, 0);
	//keybd_event('T', 0, 0, 0);
	//keybd_event('T', 0, 2, 0);
	//keybd_event('E', 0, 0, 0);
	//keybd_event('E', 0, 2, 0);
	//keybd_event('P', 0, 0, 0);
	//keybd_event('P', 0, 2, 0);
	//keybd_event('A', 0, 0, 0);
	//keybd_event('A', 0, 2, 0);
	//keybd_event('D', 0, 0, 0);
	//keybd_event('D', 0, 2, 0);
	keybd_event(VK_RETURN, 0, 0, 0);//�س�ȷ��
	keybd_event(VK_RETURN, 0, 2, 0);
}

int main1()
{
	// ģ��Alt+Tab
	keybd_event(VK_MENU, 0xb8, 0, 0); //Alt ����
	keybd_event(VK_TAB, 0x8f, 0, 0); // Tab ����
	while (1); // ͣס�۲�
	keybd_event(VK_TAB, 0x8f, KEYEVENTF_KEYUP, 0); // Tab �ͷ�
	keybd_event(VK_MENU, 0xb8, KEYEVENTF_KEYUP, 0); // Alt �ͷ�
	return 0;
}