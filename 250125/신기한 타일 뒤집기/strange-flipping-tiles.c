#include <stdio.h>

int main() {
    int a[200000]={0,},loc=100000,n,x,cnt1=0,cnt2=0;
    char direction;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&x,&direction);
        if(direction=='L')
        {
            for(int j=loc;j>loc-x;j--)
            {
                a[j]=1;
            }
            loc-=x-1;
        }
        else if(direction=='R')
        {
            for(int j=loc;j<loc+x;j++)
            {
                a[j]=2;
            }
            loc+=x-1;
        }
    }
    for(int i=0;i<200000;i++)
    {
        if(a[i]==1)
            cnt1++;
        else if(a[i]==2)
            cnt2++;
    }
    printf("%d %d",cnt1,cnt2);
    return 0;
}