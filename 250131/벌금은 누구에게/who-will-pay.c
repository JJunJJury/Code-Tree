#include <stdio.h>

int main() {
    int n,m,k,a[105]={0,},target=0,b;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b);
        a[b-1]++;
        if(a[b-1]==k)
        {
            target=b;
            break;
        }
    }
    printf("%d",target);
    return 0;
}