#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        for(int k=0;k<2*(n-i);k++)
        {
            printf(" ");
        }
        for(int l=0;l<i;l++)
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}