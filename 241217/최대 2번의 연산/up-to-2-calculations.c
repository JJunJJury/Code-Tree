#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0)
        a/=2;
    if(a%2==1)
    {
        a++;
        a/=2;
    }
    printf("%d\n",a);
    return 0;
}