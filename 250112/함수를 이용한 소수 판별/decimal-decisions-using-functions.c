#include <stdio.h>
#include <stdbool.h>

bool Isprime(int n);
int main() {
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(Isprime(i))
            sum+=i;
    }
    printf("%d",sum);
    return 0;
}

bool Isprime(int n)
{
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}