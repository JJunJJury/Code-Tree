#include <stdio.h>
#include <string.h>

int main() {
    int n,lenth,check=0,site=1,num=0;
    char a[12];
    scanf("%s",a);
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]=='0')
        {
            a[i]='1';
            check=1;
            break;
        }
    }
    if(check==0)
        a[lenth-1]='0';
    for(int i=lenth-1;i>=0;i--)
    {  
        num+=(a[i]-'0')*site;
        site*=2;
    }
    printf("%d",num);
    return 0;
}