#include <stdio.h>

int fibonachi(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fibonachi(n));
    return 0;
}

int fibonachi(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    
    return fibonachi(n-1)+fibonachi(n-2);
}