#include <stdio.h>
#include <stdlib.h>


void get10n(int i)
{
    int res=1;
    int n;
    for(i=0;i<n;i++)
    {
        res*=10;
    }
    return res;
}

void main()
{
    int num;
    scanf("%d",&num);
    int numA=num;
    printf("Ҫ��ת������Ϊ%d",num);

    int wei=0;
    for(;num;num/=10)
    {
        wei++;
    }
    printf("\nλ��=%d",wei);

    int last=0;

    int i;
    for(i=0;i<wei;i++)
    {
        int nowwei=0;
        //printf("\n%d",numA/get10n(i)%10);
        nowwei=numA/get10n(i)%10;
        last+=nowwei*get10n(wei-1-i);
    }
    printf("\n��ת�������Ϊ:%d",last);
    system("pause");
}


