#include <stdio.h>
#include <limits.h>

int main() {
    int n,a[100],cnt=0,min=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
            min=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
            cnt++;
    }
    printf("%d %d",min,cnt);
    return 0;
}