#include<stdio.h>
int main()
{
    int pos=3,x=50,i,n=6;
    int a[n]={1,2,3,4,5};
    for(i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
        a[pos-1]=x;

        for(i=0;i<n;i++)
        {
            printf(" %d ",a[i]);
        }
        return 0;
}