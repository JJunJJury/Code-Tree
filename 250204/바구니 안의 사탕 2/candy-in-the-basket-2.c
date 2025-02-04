#include <stdio.h>

int main() {
    int n,k,a[105]={0,},cnt,big=0,site,candy;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&candy,&site);
        a[site-1]+=candy;
    }
    for(int i=k;i<100-k;i++)
    {
        cnt=0;
        for(int j=i-k;j<=i+k;j++)
        {
            cnt+=a[j];
        }
        if(cnt>big)
            big=cnt;
    }
    printf("%d",big);
    return 0;
}