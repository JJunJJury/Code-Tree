#include <stdio.h>

int main() {
    int a,b,c,d,cnt=0;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    for(int i=a;i<=b;i++)
    {
        cnt++;
    }
    for(int i=c;i<=d;i++)
    {
        cnt++;
    }
    if(c>=a&&d<=b)
    {
        for(int i=c;i<=d;i++)
        {
            cnt--;
        }
    }
    else if(c>=a&&d>b)
    {
        for(int i=c;i<=b;i++)
        {
            cnt--;
        }
    }
    else if(c<a&&d==a)
        cnt--;
    else if(c<a&&d>a&&d<=b)
    {
        for(int i=a;i<=d;i++)
        {
            cnt--;
        }
    }
    else if(c<a&&d>b)
    {
        for(int i=a;i<=b;i++)
        {
            cnt--;
        }
    }
    cnt--;
    printf("%d",cnt);
    return 0;
}