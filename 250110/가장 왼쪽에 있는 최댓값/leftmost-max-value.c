#include <stdio.h>

int main() {
    int n,a[1000],max=0,site;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            site=i;
            max=a[i];
        }
    }
    printf("%d %d",max,site+1);
    return 0;
}