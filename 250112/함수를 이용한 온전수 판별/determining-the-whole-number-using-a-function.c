#include <stdio.h>

int check(int n);
int check2(int n);
int check5(int n);
int check3(int n);
int main() {
    int a,b,cnt=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(check(i))
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}

int check(int n)
{
    if(check2(n)||check5(n)||check3(n))
    {
        return 0;
    }
    return 1;
}

int check2(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}

int check5(int n)
{
    if(n%10==5)
        return 1;
    return 0;
}

int check3(int n)
{
    if(n%3==0&&n%9!=0)
        return 1;
    return 0;
}