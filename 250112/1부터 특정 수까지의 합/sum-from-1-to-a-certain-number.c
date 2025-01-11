#include <stdio.h>

int num(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",num(n));
    return 0;
}

int num(int n)
{
    int a=0;
    for(int i=1;i<=n;i++)
    {
        a+=i;
    }
    return a/10;
}