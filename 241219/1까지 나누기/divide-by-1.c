#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=5000;i++)
    {
        n/=i;
        if(n<=1)
        {
            cnt++;
            break;
        }
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}