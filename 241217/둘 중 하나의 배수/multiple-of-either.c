#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%3==0||a%5==0)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}