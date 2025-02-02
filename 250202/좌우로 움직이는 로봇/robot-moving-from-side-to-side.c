#include <stdio.h>

int main() {
    int a[10000]={0,},b[10000]={0,},n,m,time=0,t,cnt=0;
    char d;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&t,&d);
        if(d=='L')
        {
            for(int i=0;i<t;i++)
            {
                time++;
                a[time]=a[time-1]-1;
            }
        }
        else if(d=='R')
        {
            for(int j=0;j<t;j++)
            {
                time++;
                a[time]=a[time-1]+1;
            }
        }
    }
    for(int i=time;i<10000;i++)
    {
        a[i]=a[time];
    }
    time=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d %c",&t,&d);
        if(d=='L')
        {
            for(int i=0;i<t;i++)
            {
                time++;
                b[time]=b[time-1]-1;
            }
        }
        else if(d=='R')
        {
            for(int j=0;j<t;j++)
            {
                time++;
                b[time]=b[time-1]+1;
            }
        }
    }
    for(int i=time;i<10000;i++)
    {
        b[i]=b[time];
    }
    for(int i=1;i<10000;i++)
    {
        if(a[i]==b[i]&&a[i-1]!=b[i-1])
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}