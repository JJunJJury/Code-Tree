#include <stdio.h>

int main() {
    int a[2][10][10]={0,},cal[10][10]={0,},n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!(a[0][i][j]==a[1][i][j]&&a[0][i][j]!=0))
                cal[i][j]=1;
            printf("%d ",cal[i][j]);
        }
        puts("");
    }

    return 0;
}