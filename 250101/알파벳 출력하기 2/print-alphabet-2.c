#include <stdio.h>

int main() {
    int n,a='A';
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("  ");
        }
        for(int j=n-i;j>0;j--)
        {
            printf("%c ",a);
            a++;
            if(a=='Z'+1)
                a='A';
        }
        puts("");
    }
    return 0;
}