#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,a[10005],sum=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cnt+=abs(a[i]-(sum/n));
    }
    cnt/=2;
    printf("%d",cnt);
    return 0;
}