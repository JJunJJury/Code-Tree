#include <stdio.h>

int main() {
    int a[1005],n,t,max=0,cnt=0;
    scanf("%d %d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>t)
            cnt++;
        if(i==0||a[i]<=t)
        {
            if(cnt>max)
                max=cnt;
            cnt=0;
        }
    }
    printf("%d",max);
    return 0;
}