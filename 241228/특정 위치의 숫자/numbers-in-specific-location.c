#include <stdio.h>

int main() {
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[2]+a[4]+a[9]);
    return 0;
}