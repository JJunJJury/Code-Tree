#include <stdio.h>

int main() {
    int check=0,a[1000005]={0,},b[1000005]={0,},n,m,time=0,t,v,cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&v,&t);
        for(int j=0;j<t;j++)
        {
            time++;
            a[time]=a[time-1]+v;
        }
    }
    time=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&v,&t);
        for(int j=0;j<t;j++)
        {
            time++;
            b[time]=b[time-1]+v;
        }
    }
    for(int i=0;i<time;i++)
    {
        if((check==1||check==2)&&a[i]==b[i])
        {
            cnt++;
            check=0;
        }
        else if((check==0||check==1)&&a[i]<b[i])
        {
            cnt++;
            check=2;
        }
        else if((check==0||check==2)&&a[i]>b[i])
        {
            cnt++;
            check=1;
        }
    }
    printf("%d",cnt);
    return 0;
}