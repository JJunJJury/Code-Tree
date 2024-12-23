#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[10][1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(int i=1;i<n;i++)
    {
        strcat(a[0],a[i]);
    }
    printf("%s",a[0]);
    return 0;
}