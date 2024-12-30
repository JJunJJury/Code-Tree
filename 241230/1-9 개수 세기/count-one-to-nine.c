#include <stdio.h>

int main() {
    int n,a[10]={0,},num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }
    for(int i=1;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}