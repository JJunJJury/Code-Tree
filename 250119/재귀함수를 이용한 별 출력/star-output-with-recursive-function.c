#include <stdio.h>

void Printstar(int n);
int main() {
    int n;
    scanf("%d",&n);
    Printstar(n);
    return 0;
}

void Printstar(int n)
{
    if(n==0)
        return;
    
    Printstar(n-1);
    for(int i=0;i<n;i++)
    {
        printf("*");
    }
    puts("");
}