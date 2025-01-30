#include <stdio.h>
#include <limits.h>

int main() {
    int a,b,x,y,distance=0,save=INT_MAX,temp;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    distance=0;
    if(x<=a&&a<=y&&y<=b)
    {
        distance=a-x+b-y;
        if(distance<save)
            save=distance;
        distance=b-a;
        if(distance<save)
            save=distance;
    }
    distance=0;
    if(b<=x||y<=a)
    {
        distance=b-a;
        if(distance<save)
            save=distance;
    }
    distance=0;
    if(a<=x&&x<=b&&b<=y)
    {
        distance=x-a+y-b;
        if(distance<save)
            save=distance;
        distance=b-a;
        if(distance<save)
            save=distance;
    }
    distance=0;
    if(x<=a&&a<=b&&b<=y)
    {
        distance=a-b+y-b;
        if(distance<save)
            save=distance;
        distance=b-a;
        if(distance<save)
            save=distance;
    }
    if(a<=x&&x<=y&&y<=b)
    {
        distance=x-a+b-y;
        if(distance<save)
            save=distance;
        distance=b-a;
        if(distance<save)
            save=distance;
    }
    printf("%d",save);
    return 0;
}