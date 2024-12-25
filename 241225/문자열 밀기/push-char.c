#include <stdio.h>
#include <string.h>

int main() {
    char a[20],temp;
    scanf("%s",a);
    int lenth=strlen(a);
    temp=a[0];
    for(int i=0;i<lenth;i++)
    {
        a[i]=a[i+1];
    }
    a[lenth-1]=temp;
    printf("%s",a);
    return 0;
}