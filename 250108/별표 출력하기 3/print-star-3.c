#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=0;k<2*i-1;k++)
        {
            printf("* ");
        }
        puts("");
    }
    return 0;
}