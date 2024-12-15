#include <stdio.h>
#include <math.h>

int main() {
    int h,w,b;
    scanf("%d %d",&h,&w);
    b=(10000*w)/(h*h);
    printf("%d\n",b);
    if(b>=25)
        printf("Obesity\n");
    return 0;
}