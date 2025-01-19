#include <stdio.h>

void Print(int n);
void Re_Print(int n);
int main() {
    int n;
    scanf("%d",&n);
    Print(n);
    puts("");
    Re_Print(n);
    return 0;
}

void Print(int n)
{
    if(n==0)
        return;
    Print(n-1);
    printf("%d ",n);
}

void Re_Print(int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    Re_Print(n-1);
}