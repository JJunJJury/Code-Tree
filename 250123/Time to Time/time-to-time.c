#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",(c-a)*60+(d-b));
    return 0;
}