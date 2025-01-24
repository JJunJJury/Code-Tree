#include <stdio.h>

int main() {
    int n,x,loc=100,a[205]={0,},cnt=0;
    char rocation;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&x,&rocation);
        getchar();
        if(rocation=='L')
        {
            for(int j=loc;j>=loc-x;j--)
            {
                a[i]++;
            }
            loc=loc-x;
        }
        else if(rocation=='R')
        {
            for(int j=loc;j<=loc+x;j++)
            {
                a[i]++;
            }
            loc=loc+x;
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