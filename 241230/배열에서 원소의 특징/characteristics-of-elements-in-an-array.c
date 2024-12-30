#include <stdio.h>

int main() {
    int a[10],site;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%3==0)
        {
            site=i;
            break;
        }
    }
    printf("%d",a[site-1]);
    return 0;
}