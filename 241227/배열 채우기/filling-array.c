#include <stdio.h>

int main() {
    int site=10,a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            site=i;
            break;
        }
    }
    for(int i=site-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}