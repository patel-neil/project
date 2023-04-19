#include<stdio.h>
#include<cstring>
int main()
{
    int i,len;
    char a[10];
    gets(a);
    len=strlen(a);
    for(int k=0;a[k]!='\0';k++)
    {
        if(a[k]!='0' && a[k]!='1')
        printf("INCORRECT BINARY NUMBER");
        break;
    }
        for(i=len-1;a[i]!='1';i--)
        ;
            for(int j=i-1;j>=0;j--)
            {
                if(a[j]=='1')
                a[j]='0';
                else
                a[j]='1';
            }
        
    
    printf("%s",a);
    return 0;
}