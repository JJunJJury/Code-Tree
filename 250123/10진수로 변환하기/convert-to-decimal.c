#include <stdio.h>
#include <math.h>

int main() {
    int n,site=0,num=0,cal;
    scanf("%d",&n);
    while(1)
    {
        if(n<10)
            break;
        cal=n%10;
        num+=(pow(2,site))*cal;
        n/=10;
        site++;
    }
    num+=pow(2,site)*n;
    printf("%d",num);
    return 0;
}