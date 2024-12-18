#include <stdio.h>

int main() {
    int a,b;
    double af;
    scanf("%lf %d",&af,&b);
    a=af;
    if(a<=0)
        printf("0");
    else if(a==af)
    {
        for(int i=0;i<b;i++)
        {
            printf("%d",a);
        }
    }
    
    return 0;
}