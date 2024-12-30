#include <stdio.h>

int main() {
    int n,a[100],site;
    scanf("%d",&n);
    a[0]=1;
    a[1]=n;
    for(int i=2;i<20;i++)
    {
        a[i]=a[i-2]+a[i-1];
        if(a[i]>100)
        {
            site=i;
            break;
        }
    }
    for(int i=0;i<=site;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}