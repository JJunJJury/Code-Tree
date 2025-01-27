#include <stdio.h>

int main() {
    int x1,y1,x2,y2,a1,b1,a2,b2,check=0;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
    if(a1>x2||a2<x1||b1>y2||b2<y1)
        check++;
    if(check!=0)
        printf("nonoverlapping");
    else
        printf("overlapping");
    return 0;
}