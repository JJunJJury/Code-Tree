#include <stdio.h>

int Cal(int* a,int* b);
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    Cal(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

int Cal(int* a,int* b)
{
    if(*a>*b)
    {
        *a+=25;
        *b*=2;
    }
    else
    {
        *a*=2;
        *b+=25;
    }
}