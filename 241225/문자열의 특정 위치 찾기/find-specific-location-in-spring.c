#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b;
    int check=0,lenth,site;
    scanf("%s",a);
    scanf("%c",&b);
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]==b&&check==0)
        {
            check=1;
            site=i;
        }
    }
    if(check=1)
    {
        printf("%d",site);
    }
    else
        printf("No");

    return 0;
}