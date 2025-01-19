#include <stdio.h>

int Cal(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",Cal(n));
    return 0;
}

int Cal(int n)
{
    if(n==1)
        return 2;
    else if(n==2)
        return 4;
    
    return (Cal(n-1)*Cal(n-2))%100;
}