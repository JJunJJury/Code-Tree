#include <stdio.h>
#include <string.h>

int main() {
    char a[10][200];
    int len[10],sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%s",a[i]);
        len[i]=strlen(a[i]);
        sum+=len[i];
    }
    printf("%d",sum);
    return 0;
}