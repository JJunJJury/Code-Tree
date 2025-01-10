#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j%2==0)
            {
                printf("%d ",j*n+i);
            }  
            else
            {
                printf("%d ",j*n-i-1+n);
            }
        }
        puts("");
    }
    return 0;
}