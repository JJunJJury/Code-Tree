#include <stdio.h>

int main() {
    int T[10][10]={0,},n,m,a,b;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        T[a-1][b-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",T[i][j]);
        }
        puts("");
    }
    return 0;
}