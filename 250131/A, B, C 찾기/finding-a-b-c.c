#include <stdio.h>
#include <limits.h>
int main() {
    int a[7]={0,},A,B,C,min=INT_MAX,max=0,site;
    for(int i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<7;i++)
    {
        if(a[i]<min){
            min=a[i];
            site=i;
        }
    }
    A=min;
    a[site]=0,min=INT_MAX;
    for(int i=0;i<7;i++)
    {
        if(a[i]<min&&a[i]!=0)
        {
            min=a[i];
            site=i;
        }
    }
    B=min;
    a[site]=0;
    for(int i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            site=i;
        }
    }
    C=max;
    C-=A+B;
    printf("%d %d %d",A,B,C);
    return 0;
}