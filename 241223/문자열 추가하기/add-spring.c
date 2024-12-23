#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    strcat(a,"Hello");
    printf("%s",a);
    return 0;
}