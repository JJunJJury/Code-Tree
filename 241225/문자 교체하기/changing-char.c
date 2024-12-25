#include <stdio.h>

int main() {
    char a[20],b[20];
    scanf("%s",a);
    scanf("%s",b);
    b[0]=a[0];
    b[1]=a[1];
    printf("%s",b);
    return 0;
}