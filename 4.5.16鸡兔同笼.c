#include <stdio.h>
#include <stdlib.h>

//��������������ͬ����������ʮ��ͷ�����о�ʮ���㡣�����ø����Ρ�

void main()
{
    int x=0,y;
    for(x;x<=35;x++)
    {
        y=(94-4*x)/2;
        if(x+y==35)
        printf("����%dֻ,����%dֻ",y,x);
        break;

    }
    getchar();
}
