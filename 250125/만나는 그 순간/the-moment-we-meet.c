#include <stdio.h>

int main() {
    int a[1000]={0,},b[1000]={0,},n,m,t,loc=1,meet=-1,check=0;
    char direction;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%c %d",&direction,&t);
        if(direction=='L')
        {
            for(int i=loc;i<loc+t;i++)
            {
                a[i]=a[i-1]-1;
            }
            loc+=t-1;
        }
        else if(direction=='R')
        {
            for(int i=loc;i<loc+t;i++)
            {
                a[i]=a[i-1]+1;
            }
            loc+=t-1;
        }
    }
    for(int i=0;i<m;i++)
    {
        scanf("%c %d",&direction,&t);
        if(direction=='L')
        {
            for(int i=loc;i<loc+t;i++)
            {
                b[i]=b[i-1]-1;
            }
            loc+=t-1;
        }
        else if(direction=='R')
        {
            for(int i=loc;i<loc+t;i++)
            {
                b[i]=b[i-1]+1;
            }
            loc+=t-1;
        }
    }
    for(int i=1;i<1000;i++)
    {
        if(a[i]==b[i]&&check==0){
            check=1;
            meet=i;
        }
    }
    printf("%d",meet);
    return 0;
}