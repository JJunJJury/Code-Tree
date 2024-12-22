#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    fgets(a,100,stdin);
    for(int i=2;i<=9;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}