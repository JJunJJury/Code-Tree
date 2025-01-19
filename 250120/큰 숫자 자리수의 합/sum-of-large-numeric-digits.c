#include <stdio.h>

int Sum(int n);
int main() {
    int a,b,c,mul;
    scanf("%d %d %d",&a,&b,&c);
    mul=a*b*c;
    printf("%d",Sum(mul));
    return 0;
}

int Sum(int n)
{
    if(n<10)
        return n;
    
    return Sum(n/10)+n%10;
}