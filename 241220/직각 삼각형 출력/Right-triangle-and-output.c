#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=2*(i+1)-1;j>0;j--)
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}