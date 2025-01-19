#include <stdio.h>

int Square(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",Square(n));
    return 0;
}

int Square(int n)
{
    if(n<10)
        return n*n;
    
    return Square(n/10)+((n%10)*(n%10));
}