#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cnt++;
                printf("%d ",cnt);
            }
            puts("");
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                cnt+=2;
                printf("%d ",cnt);
            }
            puts("");
        }
    }
    return 0;
}