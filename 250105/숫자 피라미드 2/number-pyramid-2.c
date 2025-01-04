#include <stdio.h>

int main() {
    int n,cnt=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",cnt);
            cnt++;
        }
        puts("");
    }
    return 0;
}