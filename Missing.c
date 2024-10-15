#include"stdio.h"
void main()
{
    int i,sum=0,miss,add=0;
    int a[15]={1,2,3,4,5,6,7,8,10,11,12,13,14,15};
    sum=15*16/2;
    for(i=0;i<14;i++)
    {
        add=add+a[i];
    }
    miss=sum-add;
    printf("%d",miss);
}
