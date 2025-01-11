#include <stdio.h>
#include <limits.h>

int Printsmall(int n,int m);
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",Printsmall(n,m));
    return 0;
}

int Printsmall(int n,int m)
{
    int small=INT_MAX,check=1;
    while(1)
    {
        if((n*check)%m==0)
        {
            small=n*check;
            break;
        }
        check++;
    }
    return small;
}