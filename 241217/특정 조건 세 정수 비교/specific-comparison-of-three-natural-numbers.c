#include <stdio.h>

int main() {
    int a,b,c,low;
    scanf("%d %d %d",&a,&b,&c);
    low=a;
    if(b<low)
        low=b;
    if(c<low)
        low=c;
    if(low==a)
        printf("1");
    else
        printf("0");
    printf(" ");
    if(a==b==c)
        printf("1");
    else   
        printf("0");
    return 0;
}