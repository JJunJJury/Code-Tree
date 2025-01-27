#include <stdio.h>

int main() {
    int n,a[105],b[105],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=(i+1)*(b[i]-a[i]);
    }
    printf("%d",sum);
    return 0;
}