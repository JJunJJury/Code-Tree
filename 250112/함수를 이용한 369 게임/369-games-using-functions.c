#include <stdio.h>
#include <stdbool.h>

bool Check(int n);
bool Check369(int n);
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
    bool check3=false;
    if(n%3==0)
        check3=true;
    return check3||Check369(n);
}

bool Check369(int n)
{
    bool yes=false;
    while(1)
    {
        if(n%10==3||n%10==6||n%10==9)
            yes=true;
        if(n<10)
            break;
        n/=10;
    }
    return yes;
}