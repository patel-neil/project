#include<stdio.h>
int main ()
{
    int i,j;
    int table[3][3],sale_total[3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&table[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sale_total[i]+=table[i][j];
        }
        printf("%d",sale_total[i]);
    }
    
 return 0;
}