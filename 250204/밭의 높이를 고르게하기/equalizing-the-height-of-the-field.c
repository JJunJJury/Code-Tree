#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int n,t,h,min=INT_MAX,cnt,num;
    int a[105];
    scanf("%d %d %d",&n,&h,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-t;i++)
    {
        cnt=0;
        for(int j=i;j<i+t;j++)
        {
            num=a[j]-h;
            cnt+=abs(num);
        }
        if(cnt<min)
            min=cnt;
    }
    printf("%d",min);
    return 0;
}