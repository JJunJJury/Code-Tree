#include <stdio.h>

int main() {
    int x1,x2,x3,x4,check=0;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    if(x1>x4||x2<x3)
        check+=1;
    if(check!=0)
        printf("nonintersecting");
    else
        printf("intersecting");
    return 0;
}