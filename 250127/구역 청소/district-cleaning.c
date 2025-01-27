#include <stdio.h>

int main() {
    int a,b,c,d,cnt=0;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if(b<=c)
    {
        for(int i=a;i<b;i++)
        {
            cnt++;
        }
        for(int i=c;i<d;i++)
        {
            cnt++;
        }
    }
    else if(a<=c&&c<=b&&b<=d)
    {
        for(int i=a;i<d;i++)
        {
            cnt++;
        }
    }
    else if(a<=c&&d<=b)
    {
        for(int i=a;i<b;i++)
        {
            cnt++;
        }
    }
    else if(d<=a)
    {
        for(int i=c;i<d;i++)
        {
            cnt++;
        }
        for(int i=a;i<b;i++)
        {
            cnt++;
        }
    }
    else if(c<=a&&a<=d&&d<=b)
    {
        for(int i=c;i<b;i++)
        {
            cnt++;
        }
    }
    else if(c<=a&&b<=d)
    {
        for(int i=c;i<d;i++)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}