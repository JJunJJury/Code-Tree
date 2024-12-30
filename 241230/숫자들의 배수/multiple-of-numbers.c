#include <stdio.h>

int main() {
    int cnt=0,n,i=1;
    scanf("%d",&n);
    while(1)
    {
        printf("%d ",n*i);
        if((n*i)%5==0)
            cnt++;
        i++;
        if(cnt==2)
            break;
    }
    return 0;
}