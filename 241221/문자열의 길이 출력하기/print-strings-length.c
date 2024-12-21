#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100];
    int lenth=0;
    scanf("%s",a);
    scanf("%s",b);
    lenth+=strlen(a);
    lenth+=strlen(b);
    printf("%d",lenth);
    return 0;
}