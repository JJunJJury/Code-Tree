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
        return 1;
    else if(n==2)
        return 2;
    
    return Cal(n/3)+Cal(n-1);
}