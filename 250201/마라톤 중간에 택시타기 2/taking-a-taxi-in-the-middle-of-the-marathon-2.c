#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int n,x[102],y[102],min=INT_MAX,cnt,site=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++)
    {
        cnt=0;
        site=1;
        for(int j=1;j<n-1;j++)
        {
            if(i==j)
            {
                site++;
                continue;
            }
            cnt+=abs(x[site]-x[site-1])+abs(y[site]-y[site-1]);
            site++;
        }
        if(cnt<min)
            min=cnt;
    }
    printf("%d",min*2);
    return 0;
}