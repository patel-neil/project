#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Please Enter The Number");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    a+b==c*d?printf("%d",a+b+c+d):scanf("%d%d%d%d",&a,&b,&c,&d);
    return 0;
}

