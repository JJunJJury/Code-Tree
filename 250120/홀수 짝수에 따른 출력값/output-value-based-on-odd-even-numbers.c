#include <stdio.h>

int Cal(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",Cal(n));
    return 0;
}

int Cal(int n)
{
    int sum=0;
    if(n%2==1)
    {
        for(int i=1;i<=n;i+=2)
        {
            sum+=i;
        }
    }
    else
    {
        for(int i=2;i<=n;i+=2)
        {
            sum+=i;
        }
    }
    return sum;
}