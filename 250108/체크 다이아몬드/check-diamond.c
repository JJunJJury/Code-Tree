#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        puts("");
    }
    for(int i=n-1;i>0;i--)
    {
        for(int k=n;k>i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        puts("");
    }
    return 0;
}