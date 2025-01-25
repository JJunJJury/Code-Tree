#include <stdio.h>

int main() {
    int a[200000]={0,},checkb[200000]={0,},checkw[200000]={0,},loc=100000,x,n,cnt1=0,cnt2=0,cnt3=0;
    char direction;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&x,&direction);
        if(direction=='L')
        {
            for(int j=loc;j>loc-x;j--)
            {
                checkw[j]++;
                a[j]=1;
            }
            loc=loc-x+1;
        }
        else if(direction=='R')
        {
            for(int j=loc;j<loc+x;j++)
            {
                checkb[j]++;
                a[j]=2;
            }
            loc=loc+x-1;
        }
    }
    for(int i=0;i<200000;i++)
    {
        if((checkb[i]<2||checkw[i]<2))
        {
            if(a[i]==1)
            {
                cnt1++;
            }
            else if(a[i]==2)
            {
                cnt2++;
            }
        }
        else if(!(checkb[i]<2||checkw[i]<2))
        {
            cnt3++;
        }
    }
    printf("%d %d %d",cnt1,cnt2,cnt3);
    return 0;
}