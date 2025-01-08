#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                cnt++;
        }
        if(cnt==2)
            printf("%d ",i);
    }
    return 0;
}