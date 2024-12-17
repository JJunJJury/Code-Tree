#include <stdio.h>

int main() {
    int a_m,a_e,b_m,b_e;
    scanf("%d %d",&a_m,&a_e);
    scanf("%d %d",&b_m,&b_e);
    if(a_m>b_m&&a_e>b_e)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}