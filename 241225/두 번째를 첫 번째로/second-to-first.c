#include <stdio.h>
#include <string.h>

int main() {
    char a[100],check;
    scanf("%s",a);
    int lenth=strlen(a);
    check=a[1];
    for(int i=0;i<lenth;i++)
    {
        if(a[i]==check)
            a[i]=a[0];
    }
    printf("%s",a);
    return 0;
}