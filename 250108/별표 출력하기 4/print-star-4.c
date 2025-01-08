#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        puts("");
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        puts("");
    }
    return 0;
}