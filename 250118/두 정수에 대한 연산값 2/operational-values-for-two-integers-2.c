#include <stdio.h>

void Cal(int *a,int *b);
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    Cal(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

void Cal(int *a,int *b)
{
    if(*a>*b)
    {
        *a*=2;
        *b+=10;
    }
    else
    {
        *a+=10;
        *b*=2;
    }
}