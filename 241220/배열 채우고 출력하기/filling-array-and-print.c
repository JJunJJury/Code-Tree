#include <stdio.h>

int main() {
    char c[10];
    for(int i=0;i<10;i++)
    {
        scanf(" %c",&c[i]);
    }
    for(int i=9;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    return 0;
}