#include <stdio.h>

int main() {
    int a,b,num;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    num=a%b;
    for(int i=0;i<20;i++)
    {
        num*=10;
        printf("%d",num/b);
        num%=b;
    }
    return 0;
}