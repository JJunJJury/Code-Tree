#include <stdio.h>
#include <string.h>

int main() {
    int n,lenth;
    char a[10][10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(int i=1;i<n;i++)
    {
        strcat(a[0],a[i]);
    }
    lenth=strlen(a[0]);
    for(int i=0;i<lenth;i++)
    {
        printf("%c",a[0][i]);
        if(i%5==4)
            puts("");
    }
    return 0;
}