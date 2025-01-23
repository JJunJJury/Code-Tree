#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",(a-11)*24*60+(b-11)*60+c-11);
    return 0;
}