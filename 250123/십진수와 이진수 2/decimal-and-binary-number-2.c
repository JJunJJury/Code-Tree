#include <stdio.h>
#include <math.h>

int main() {
    long long int n;
    int num=0,cal,site=0,a[20];
    scanf("%lld",&n);
    while(1)
    {
        if(n<10)
            break;
        cal=n%10;
        num+=pow(2,site)*cal;
        site++;
        n/=10;
    }
    num+=pow(2,site)*n;
    num*=17;
    site=0;
    while(1)
    {
        if(num<=1)
            break;
        a[site]=num%2;
        num/=2;
        site++;
    }
    a[site]=num;
    for(int i=site;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}