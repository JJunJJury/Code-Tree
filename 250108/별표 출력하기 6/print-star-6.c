#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(int j=0;j<2*i-1;j++)
        {
            printf("* ");
        }
        puts("");
    }
    for(int i=2;i<=n;i++)
    {
        for(int k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(int j=0;j<2*i-1;j++)
        {
            printf("* ");
        }
        puts("");
    }
    return 0;
}