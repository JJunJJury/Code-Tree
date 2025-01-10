#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j%2==0)
            {
                printf("%d ",j*n-i+n);
            }  
            else
            {
                printf("%d ",j*n+i+1);
            }
        }
        puts("");
    }
    return 0;
}