#include <stdio.h>
#include <string.h>

int main() {
    char a[10];
    int lenth;
    scanf("%s",a);
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        printf("%c\n",a[i]);
    }

    return 0;
}