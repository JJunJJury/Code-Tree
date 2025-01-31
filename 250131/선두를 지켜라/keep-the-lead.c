#include <stdio.h>

int main() {
    int n,m,v,t,site=1,time=0,front,cnt=0,a[1005]={0,},b[1005]={0,};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&v,&t);
        time+=t;
        for(int j=0;j<t;j++)
        {
            a[site]=a[site-1]+v;
            site++;
        }
    }
    site=1;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&v,&t);
        for(int j=0;j<t;j++)
        {
            b[site]=b[site-1]+v;
            site++;
        }
    }
    for(int i=1;i<=time;i++)
    {
        if(a[i]>b[i])
        {
            front=1;
            site=i;
            break;
        }
        else if(b[i]>a[i])
        {
            front=0;
            site=i;
            break;
        }
    }
    for(int i=site;i<=time;i++)
    {
        if(front==1)
        {
            if(b[i]>a[i])
            {
                front=0;
                cnt++;
            }
        }
        else if(front==0)
        {
            if(a[i]>b[i])
            {
                front=1;
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}