#include <stdio.h>

int main() {
    int a[4][4],sum[4]={0,},num;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        printf("%d\n",sum[i]);
    }
    return 0;
}