#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[105],n,num,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(abs(i-j)<=1)
                continue;
            num=a[i]+a[j];
            if(num>max)
                max=num;
        }
    }
    printf("%d",max);
    return 0;
}