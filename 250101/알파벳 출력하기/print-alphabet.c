#include <stdio.h>

int main() {
    int n,a='A';
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        puts("");
    }
    return 0;
}