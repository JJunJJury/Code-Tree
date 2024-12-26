#include <stdio.h>

int main() {
    char a,b;
    scanf("%c %c",&a,&b);
    printf("%d %d",a+b,a>b?a-b:b-a);
    return 0;
}