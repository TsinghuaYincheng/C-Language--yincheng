#include <stdio.h>
#include <stdlib.h>

//��whileѭ����ʽʵ��
int whilenum(int num)
{
    int i=0;
    while(num)
    {
        num/=10;
        i++;

    }
    return i;
}

//do...whileѭ��ʵ��������λ��
int dowhilenum(int num)
{
    int i=0;
    do
    {
        num/=10;
        i++;
    }while(num);
    return i;
}

//forѭ��ʵ��������λ��
int forxunhuan(int num)
{
    int i;
    for(i=0;num;i++)
    {
        num/=10;

    }
    return i;
}

//goto���ʵ��
int gotonum(int num)
{
    int i=0;
QIU:if(num)
    {
        num/=10;
        i++;
        goto QIU;
    }
    return i;
}

void main()
{
    int num;
    scanf("%d",&num);
    printf("whilenum=%d",whilenum(num));//���ú�����ȡλ��
    printf("\ndowhilenum=%d",dowhilenum(num));
    printf("\nforxunhuan=%d",forxunhuan(num));
    printf("\ngotonum=%d",gotonum(num));
    system("pause");
}
