#include <stdio.h>
#include <stdbool.h>

bool Check(int n);
bool Checkprime(int n);
bool Checkeven(int n);
int main() {
    int a,b,cnt=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(Check(i))
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}

bool Check(int n)
{
    if(Checkeven(n)&&Checkprime(n))
        return true;
    return false;
}

bool Checkprime(int n)
{
    if(n==1)
        return false;
    else
    {
        for(int i=2;i<=n-1;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}

bool Checkeven(int n)
{
    int sum=0;
    if(n==100)
        return false;
    else if(n>=10)
    {
        sum+=n/10;
        sum+=n%10;
        if(sum%2==0)
            return true;
        return false;
    }
    else
    {
        if(n%2==0)
            return true;
        return false;
    }
}