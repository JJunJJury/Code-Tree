#include <stdio.h>

int main() {
    int n,m,a[105],cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;)
    {
        if(a[i]==1)
        {
            cnt++;
            i+=m*2+1;
        }
        else
        {
            i++;
        }
    }
    printf("%d",cnt);
    return 0;
}