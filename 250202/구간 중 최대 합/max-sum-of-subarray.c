#include <stdio.h>

int main() {
    int n,k,a[105],sum=0,max=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-k;i++)
    {
        sum=0;
        for(int b=i;b<i+k;b++)
        {
            sum+=a[b];
        }
        if(sum>max)
            max=sum;
    }
    printf("%d",max);
    return 0;
}