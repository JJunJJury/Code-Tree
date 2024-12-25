#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    int lenth=strlen(a);
    a[1]='a';
    a[lenth-2]='a';
    printf("%s",a);
    return 0;
}