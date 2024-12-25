#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int check=0,site;
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(check==0&&a[i]=='e')
        {
            check=1;
            site=i;
        }
    }
    for(int i=site;i<lenth;i++)
    {
        a[i]=a[i+1];
    }
    a[lenth-1]='\0';
    printf("%s",a);
    return 0;
}