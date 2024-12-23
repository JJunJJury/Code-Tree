#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=lenth-1;i>=0;i--)
    {
        if((i+1)%2==0)
            printf("%c",a[i]);
    }
    return 0;
}