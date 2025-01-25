#include <stdio.h>

int main() {
    int n,cnt=0,max=0,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0||a[i]!=a[i-1])
        {
            if(cnt>max)
                max=cnt;
            cnt=0;
        }
        cnt++;
    }
    printf("%d",max);
    return 0;
}