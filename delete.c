#include<stdio.h>
int main()
{
    int pos=3,i,n=6;
    int a[n]={1,2,3,4,5};
    for(i=pos-11;i>n-1;i--)
    {
        a[i]=a[i+1];
    }
        for(i=0;i<n-1;i++)
        {
            printf(" %d ",a[i]);
        }
        return 0;
}