#include <stdio.h>

int main() {
    int n,a[100],cnt=0,site;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==2)
            cnt++;
        if(cnt==3)
        {
            site=i;
            break;
        }
    }
    printf("%d",site+1);
    return 0;
}