#include <stdio.h>

int main() {
    int a[200]={0,},x,n,loc=100,cnt=0;
    char direction;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&x,&direction);
        if(direction=='L')
        {
            for(int j=loc;j>loc-x;j--)
            {
                a[j]++;
            }
            loc-=x;
        }
        else if(direction=='R')
        {
            for(int j=loc;j<loc+x;j++)
            {
                a[j]++;
            }
            loc+=x;
        }
    }
    for(int i=0;i<200;i++)
    {
        if(a[i]>=2)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}