#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        puts("");
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int k=n-1;k>i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}