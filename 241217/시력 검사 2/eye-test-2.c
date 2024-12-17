#include <stdio.h>

int main() {
    double a;
    scanf("%lf",&a);
    if(a>=1)
        printf("High\n");
    else if(a>=0.5)
        printf("Middle\n");
    else
        printf("Low\n");
    return 0;
}