#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b>a&&b<c)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}