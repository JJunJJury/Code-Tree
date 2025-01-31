#include <stdio.h>
#include <limits.h>

int main() {
    int n,line[102]={0,},x1[102],x2[102],min=INT_MAX,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x1[i],&x2[i]);
    }
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            for(int k=x1[j];k<=x2[j];k++)
            {
                line[k]++;
            }
        }
        for(int j=1;j<=100;j++)
        {
            if(line[j]!=0)
            {
                cnt++;
                line[j]=0;
            }
        }
        if(cnt<min)
            min=cnt;
    }
    printf("%d",min-1);
    return 0;
}