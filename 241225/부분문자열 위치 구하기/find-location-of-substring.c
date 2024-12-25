#include <stdio.h>
#include <string.h>

int main() {
    char a[1000],b[1000];
    int check=0,check2=0,lenth,checklen,site;
    scanf("%s",a);
    scanf("%s",b);
    lenth=strlen(a);
    checklen=strlen(b);
    if(strcmp(a,b)==0)
    {
        printf("0");
    }
    else
    {
    for(int i=0;i<=lenth-checklen;i++)
        {
            check=0;
            for(int j=i;j<i+checklen;j++)
            {
                if(check==0&&a[j]!=b[j-i])
                {
                    check=1;
                }
            }
            if(check==0&&check2==0)
            {
                site=i;
                check2=1;
            }
        }
        printf("%d",site);
    }
    
    return 0;
}