#include <stdio.h>

int main() {
    int a[1000]={2000,},b[1000]={2000,},n,m,t,loc=1,meet=-1,check=0;
    for(int i=0;i<1000;i++)
    {
        a[i]=2000;
        b[i]=2000;
    }
    a[0]=0,b[0]=0;
    char direction;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        getchar();
        scanf("%c %d",&direction,&t);
        if(direction=='L')
        {
            for(int j=loc;j<loc+t;j++)
            {
                a[j]=a[j-1]-1;
            }
        }
        else if(direction=='R')
        {
            for(int j=loc;j<loc+t;j++)
            {
                a[j]=a[j-1]+1;
            }
        }
        loc+=t;
    }
    loc=1;
    for(int i=0;i<m;i++)
    {
        getchar();
        scanf("%c %d",&direction,&t);
        if(direction=='L')
        {
            for(int j=loc;j<loc+t;j++)
            {
                b[j]=b[j-1]-1;
            }
        }
        else if(direction=='R')
        {
            for(int j=loc;j<loc+t;j++)
            {
                b[j]=b[j-1]+1;
            }
        }
        loc+=t;
    }
    for(int i=1;i<1000;i++)
    {
        if(a[i]==b[i]&&check==0&&a[i]<1500&&b[i]<1500){
            check=1;
            meet=i;
        }
        if(check==1)
            break;
    }
    printf("%d",meet);
    return 0;
}