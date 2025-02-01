#include <stdio.h>
#include <limits.h>

int main() {
    int a[1005],n,cnt,min=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            cnt+=((j-i+n)%n)*a[j];
        }
        if(cnt<min)
            min=cnt;
    }
    printf("%d",min);
    return 0;
}