#include <stdio.h>

int main() {
    int a_a,b_a;
    char a_s,b_s;
    scanf("%d %c",&a_a,&a_s);
    scanf("%d %c",&b_a,&b_s);
    if(a_a>=19&&a_s=='M'||b_a>=19&&b_s=='M')
        printf("1");
    else
        printf("0");

    return 0;
}