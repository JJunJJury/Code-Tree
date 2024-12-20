#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    while(1)
    {
        if(n==2)
            break;
        n/=2;
        cnt++;
    }
    printf("%d",n);
    return 0;
}