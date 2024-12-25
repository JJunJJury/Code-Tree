#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=1;i<lenth-1;i++)
    {
        a[i]=a[i+1];
    }
    a[lenth-3]=a[lenth-1];
    a[lenth-2]='\0';
    printf("%s",a);
    return 0;
}