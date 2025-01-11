#include <stdio.h>

int Findmax(int n,int m);
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",Findmax(n,m));
    return 0;
}

int Findmax(int n,int m)
{
    int max=0;
    if(n>=m)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0&&m%i==0)
            {
                if(i>max)
                    max=i;
            }
        }
    }
    else
    {
        for(int i=1;i<=m;i++)
        {
            if(n%i==0&&m%i==0)
            {
                if(i>max)
                    max=i;
            }
        }
    }
    return max;
}