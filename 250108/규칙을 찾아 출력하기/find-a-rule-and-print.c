#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        if(i==n)
        {
            for(int j=0;j<n;j++)
            {
                printf("* ");
            }
        }
        else if(i==1)
        {
            for(int j=0;j<n;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j=n;j>i;j--)
            {
                printf("* ");
            }
            for(int k=i-1;k>0;k--)
            {
                printf("  ");
            }
            printf("*");
        }
        puts("");
    }
    return 0;
}