#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int s,n,min=INT_MAX,a[105],sum=0;
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=0;
            if(i!=j)
            {
                for(int k=0;k<n;k++)
                {
                    sum+=a[k];
                }
                sum-=(a[i]+a[j]);
                if(abs(sum-s)<min)
                    min=abs(sum-s);
            }
        }
    }
    printf("%d",min);
    return 0;
}