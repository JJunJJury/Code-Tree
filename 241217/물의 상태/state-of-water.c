#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>=100)
        printf("vapor\n");
    else if(a<0)
        printf("ice\n");
    else
        printf("water\n");
    return 0;
}