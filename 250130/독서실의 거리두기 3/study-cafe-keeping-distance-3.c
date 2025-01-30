#include <stdio.h>
#include <limits.h>

int main() {
    int n,big=0,x,y,distance,bigx,bigy,less=INT_MAX;
    char a[1005];
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='0')
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]=='1')
            {
                x=i;
                y=j;
                distance=j-i;
                if(distance>big)
                {
                    big=distance;
                    bigx=x;
                    bigy=y;
                }
                break;
            }
        }
    }
    big=bigx+bigy;
    big/=2;
    a[big]='1';
    big=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='0')
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]=='1')
            {
                distance=j-i;
                if(distance<less)
                    less=distance;
                break;
            }
        }
    }
    printf("%d",less);
    return 0;
}