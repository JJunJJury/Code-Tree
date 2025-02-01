#include <stdio.h>

int main() {
    int a[25][25],n,cnt=0,max=0,b[9],site=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",& a[i][j]);
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            cnt=0;
            for(int k=i;k<i+3;k++)
            {
                for(int l=j;l<j+3;l++)
                {
                    
                }
            }
        }
    }
    return 0;
}