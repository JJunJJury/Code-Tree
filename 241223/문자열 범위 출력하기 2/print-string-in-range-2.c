#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int num,lenth;
    scanf("%s",a);
    lenth=strlen(a);
    scanf("%d",&num);
    for(int i=lenth-1;i>=lenth-num;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}