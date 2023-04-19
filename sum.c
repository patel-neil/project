#include<stdio.h>
int main()
{
    int a[10],total;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        total+=a[i]*a[i];
    }
    printf("%d",total/10);
        return 0;
}