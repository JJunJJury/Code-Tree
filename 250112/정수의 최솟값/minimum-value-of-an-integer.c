#include <stdio.h>

int small(int a,int b,int c);
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",small(a,b,c));
    return 0;
}

int small(int a,int b,int c)
{
    int sma;
    sma=a;
    if(b<sma)
        sma=b;
    if(c<sma)
        sma=c;
    return sma;
}