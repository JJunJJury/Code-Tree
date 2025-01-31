#include <stdio.h>

int main() {
    int x1,y1,x2,y2,a1,b1,a2,b2,x,y,a,b,big;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
    if(x1<=a1)
        x=x1;
    else if(a1<x1)
        x=a1;
    if(y1<=b1)
        y=y1;
    else if(b1<y1)
        y=b1;
    if(x2>=a2)
        a=x2;
    else if(a2>x2)
        a=a2;
    if(y2>=b2)
        b=y2;
    else if(b2>y2)
        b=b2;
    if((a-x)>(b-y))
        big=a-x;
    else
        big=b-y;
    printf("%d",big*big);
    return 0;
}