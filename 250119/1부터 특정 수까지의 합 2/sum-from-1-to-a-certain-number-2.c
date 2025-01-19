#include <stdio.h>

int sum=0;
int Sum(int n);
int main() {
    int n;
    scanf("%d",&n);
    Sum(n);
    printf("%d",sum);
    return 0;
}

int Sum(int n)
{
    if(n==0)
        return 0;
    
    Sum(n-1);
    sum+=n;
}