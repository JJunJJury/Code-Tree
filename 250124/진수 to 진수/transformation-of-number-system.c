#include <stdio.h>
#include <math.h>
int main() {
    int n,a,b,num=0,c[100],cal,site=0;
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    while(1)
    {
        if(n<10)
            break;

        cal=n%10;
        num+=pow(a,site)*cal;
        n/=10;
        site++;
    }
    num+=pow(a,site)*n;
    site=0;
    while(1)
    {
        if(num<b)
            break;
        
        c[site]=num%b;
        num/=b;
        site++;
    }
    c[site]=num;
    for(int i=site;i>=0;i--)
    {
        printf("%d",c[i]);
    }
    return 0;
}