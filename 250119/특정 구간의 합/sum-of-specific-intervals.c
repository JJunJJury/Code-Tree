#include <stdio.h>

int a[100],b[2][100];
int Printsum(int i);
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[j][i]);
        }
        printf("%d\n",Printsum(i));
    }
    return 0;
}

int Printsum(int i)
{
    int sum=0;
    for(int j=b[0][i];j<=b[1][i];j++)
    {
        sum+=a[j-1];
    }
    return sum;
}