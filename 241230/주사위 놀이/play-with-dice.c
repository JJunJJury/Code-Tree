#include <stdio.h>

int main() {
    int a[7]={0,},num;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }
    for(int i=1;i<=6;i++)
    {
        printf("%d - %d\n",i,a[i]);
    }
    return 0;
}