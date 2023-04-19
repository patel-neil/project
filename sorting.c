#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[10]={5,2,-1,5,3,6};
    int size= sizeof(a)/sizeof(a[0]);
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(a[i]>a[i+1])
            {

                temp=a[i];
                a[i]=a[i+1];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
            printf("%d ",a[i]);
    }
    return 0;
}