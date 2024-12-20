#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    while(1)
    {
        if(n==1)
            break;
        if(n%2==0)
        {
            n/=2;
            cnt++;
        }
        else if(n%2==1)
        {
            n*=3;
            n++;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}