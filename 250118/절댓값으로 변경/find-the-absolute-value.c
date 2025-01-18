#include <stdio.h>
#include <math.h>

void Abs(int a[],int n);
int main() {
    int a[50],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Abs(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void Abs(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            a[i]*=-1;
    }
}