#include <stdio.h>

int main() {
    char a[4][20];
    for(int i=0;i<4;i++)
    {
        scanf("%s",a[i]);
    }
    for(int i=3;i>=0;i--)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}