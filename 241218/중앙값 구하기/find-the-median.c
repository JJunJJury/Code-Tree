#include <stdio.h>

int main() {
    int a,b,c,max,min;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;

    min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
        
    if(a!=max&&a!=min)
        printf("%d",a);
    else if(b!=max&&b!=min)
        printf("%d",b);
    else
        printf("%d",c);
    return 0;
}