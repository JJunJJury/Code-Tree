#include <stdio.h>

int main() {
    int n[10],sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    printf("%d",sum);
    return 0;
}