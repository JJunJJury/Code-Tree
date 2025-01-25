#include <stdio.h>

int main() {
    int a[1005],n,max=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        cnt++; 
        if(i==0||a[i]<a[i-1])
        {
            if(cnt>max)
            {
                max=cnt;
                cnt=0;
            }
        }
    }
    cnt++;
    if(cnt>max)
        max=cnt;
    printf("%d",max);
    return 0;
}