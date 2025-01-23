#include <stdio.h>

int main() {
    int n,a[100],site=0;
    scanf("%d",&n);
    while(1)
    {
        if(n<=1)
            break;
        a[site]=n%2;
        n/=2;
        site++;
    }
    a[site]=n;
    for(int i=site;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}