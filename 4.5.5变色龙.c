#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void main1()
{
    char str[20];
    int j=0;
    char strl[40];

    while(1)
    {
        int i;
        for(i=0;i<16;i++)
        {
            sprintf(str,"color %x%x",i,15-i);//��ӡ�ַ���
            system(str);//ִ��ָ��ı���ɫ
            printf("\n%s",str);//��ӡ�ַ���

            sprintf(strl,"title ����%d s",j);
            j++;
            system(strl);//�ı����
            Sleep(1000);
        }
    }
}

void main()
{
    char str[20];
    int j=0;
    char strl[40];

    while(1)
    {
        int i=0;
        while(i<16)
        {
            sprintf(str,"color %x%x",i,15-i);//��ӡ�ַ���
            system(str);//ִ��ָ��ı���ɫ
            printf("\n%s",str);//��ӡ�ַ���

            sprintf(strl,"title ����%d s",j);
            j++;
            system(strl);//�ı����
            Sleep(1000);
            i++;
        }
    }
}
