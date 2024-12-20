#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            for(int k=0;k<n-i;k++)
            {
                printf("*");
            }
            printf(" ");
        }
        puts("");
    }
    return 0;
}