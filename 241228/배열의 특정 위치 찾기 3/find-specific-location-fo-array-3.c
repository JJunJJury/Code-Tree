#include <stdio.h>

int main() {
    int site,a[100];
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            site=i;
            break;
        }
    }
    printf("%d",a[site-3]+a[site-2]+a[site-1]);
    return 0;
}