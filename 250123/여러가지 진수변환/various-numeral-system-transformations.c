#include <stdio.h>

int main() {
    int n,b,num[100],site=0;
    scanf("%d %d",&n,&b);
    while(1)
    {
        if(n<b)
            break;
        num[site]=n%b;
        n/=b;
        site++;
    }
    num[site]=n;
    for(int i=site;i>=0;i--)
    {
        printf("%d",num[i]);
    }
    return 0;
}