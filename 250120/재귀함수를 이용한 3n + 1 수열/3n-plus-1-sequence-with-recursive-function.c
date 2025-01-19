#include <stdio.h>

int cnt=0;
int Cal(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",Cal(n));
    return 0;
}

int Cal(int n)
{
    if(n==1)
        return cnt;
    if(n%2==0)
    {
        cnt++;
        Cal(n/2);
    }
    else if(n%2==1)
    {
        cnt++;
        Cal(3*n+1);
    }
}