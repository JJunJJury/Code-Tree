#include <stdio.h>
#include <limits.h>

int main() {
    int a[15]={0,},A,B,C,D,min=INT_MAX,max,site;
    for(int i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<15;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            site=i;
        }
    }
    A=min;
    a[site]=0;
    min=INT_MAX;
    for(int i=0;i<15;i++)
    {
        if(a[i]<min&&a[i]!=0)
        {
            min=a[i];
            site=i;
        }
    }
    B=min;
    a[site]=0;
    min=INT_MAX;
    for(int i=0;i<15;i++)
    {
        if(a[i]<min&&a[i]!=0)
        {
            min=a[i];
            site=i;
        }
    }
    if(min<A+B)
    {
        C=min;
        a[site]=0;
    }
    else
    {
        a[site]=0;
        min=INT_MAX;
        for(int i=0;i<15;i++)
        {
            if(a[i]<min&&a[i]!=0)
            {
                min=a[i];
                site=i;
            }
        }
        C=min;
    }
    for(int i=0;i<15;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    D=max;
    D-=A+B+C;
    printf("%d %d %d %d",A,B,C,D);
    return 0;
}