#include <stdio.h>
#include <stdbool.h>

bool Check(int n);
int main() {
    int n;
    scanf("%d",&n);
    if(Check(n))
        printf("Yes");
    else
        printf("No");
    return 0;
}

bool Check(int n)
{
    bool con=false;
    if(n%2==0&&(n/10+n%10)%5==0)
        con=true;
    return con;
}