#include <stdio.h>

int main() {
    int n,a[15][15];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==0||j==0||i==j)
                a[i][j]=1;
            else
            {
                a[i][j]=(a[i-1][j-1]+a[i-1][j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        puts("");
    }
    return 0;
}