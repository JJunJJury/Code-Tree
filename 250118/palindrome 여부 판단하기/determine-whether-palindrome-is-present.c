#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool Checkpalindrome(char a[]);
int main() {
    char a[100];
    scanf("%s",a);
    if(Checkpalindrome(a))
        printf("Yes");
    else
        printf("No");
    return 0;
}

bool Checkpalindrome(char a[])
{
    int lenth;
    bool check=true;
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]!=a[lenth-i-1])
            check=false;
    }
    return check;
}