#include <stdio.h>

int a[100],n,m;
int Sum();
int main() {
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",Sum());
    return 0;
}

int Sum()
{
    int sum=0;
    while(1)
    {
        sum+=a[m-1];
        if(m==1)
            break;
        if(m%2==1)
        {
            m-=1;
        }
        else
        {
            m/=2;
        }
    }
    return sum;
}