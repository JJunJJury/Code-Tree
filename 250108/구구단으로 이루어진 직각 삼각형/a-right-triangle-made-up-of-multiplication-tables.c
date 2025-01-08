#include <stdio.h>

int main() {
    int n,cnt;
    scanf("%d",&n);
    cnt=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%d * %d = %d ",i,j,i*j);
            if(cnt!=j)
                printf("/ ");
            else
            {
                printf("\n");
                cnt--;
            }
        }
    }
    return 0;
}