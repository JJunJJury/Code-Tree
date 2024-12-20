#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool satis=false;
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
            satis=true;
    }
    if(satis==true)
        printf("C");
    else
        printf("N");
    return 0;
}