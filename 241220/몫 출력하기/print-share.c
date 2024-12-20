#include <stdio.h>

int main() {
    int n,cnt=0;
    while(1)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d\n",n/2);
            cnt++;
        }
        if(cnt==3)
            break;
        else if(n%2==1)
            continue;
    }
    return 0;
}