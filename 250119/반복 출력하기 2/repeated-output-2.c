#include <stdio.h>

void Print_HelloWorld(int n);
int main() {
    int n;
    scanf("%d",&n);
    Print_HelloWorld(n);
    return 0;
}

void Print_HelloWorld(int n)
{
    if(n==0)
        return;
    
    Print_HelloWorld(n-1);
    printf("HelloWorld\n");
}