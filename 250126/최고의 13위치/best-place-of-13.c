#include <stdio.h>

int main() {
    int n,a[22][22],cnt=0,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            cnt=0;
            cnt=a[i][j]+a[i][j+1]+a[i][j+2];
            if(cnt>max)
                max=cnt;
        }
    }
    printf("%d",max);
    return 0;
}