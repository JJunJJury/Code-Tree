#include <stdio.h>

int main() {
    int a[4][4],sum=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}