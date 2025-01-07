#include <stdio.h>

int main() {
    int n, a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[0][i]=1;
        a[i][0]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        puts("");
    }
    return 0;
}