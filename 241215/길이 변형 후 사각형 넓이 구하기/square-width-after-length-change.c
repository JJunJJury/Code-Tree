#include <stdio.h>

int main() {
    int height, lenth;
    scanf("%d %d",&height,&lenth);
    height+=8;
    lenth*=3;
    printf("%d\n%d\n%d",height,lenth,height*lenth);
    return 0;
}