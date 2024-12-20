#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool satis=true;
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
            satis=false;
    }
    if(satis==false)
        printf("C");
    else
        printf("P");
    return 0;
}