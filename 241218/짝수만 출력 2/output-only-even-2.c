#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&b,&a);
    while(b>=a)
    {
        if(b%2==0)
        {
            printf("%d ",b);
        }
        b--;
    }
    return 0;
}