#include <stdio.h>

int main() {
    int a,b,c[15];
    scanf("%d %d",&a,&b);
    c[0]=a;
    c[1]=b;
    for(int i=2;i<10;i++)
    {
        c[i]=c[i-2]+c[i-1];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",(c[i])%10);
    }
    return 0;
}