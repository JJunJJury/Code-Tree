#include <stdio.h>

int main() {
    double sum=0,a[8];
    for(int i=0;i<8;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(int i=0;i<8;i++)
    {
        sum+=a[i];
    }
    printf("%.1f",sum/8);
    return 0;
}