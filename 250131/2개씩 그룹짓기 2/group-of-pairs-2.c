#include <stdio.h>
#include <limits.h>

int main() {
    int min=INT_MAX,n,a[200005],temp,num;
    scanf("%d",&n);
    for(int i=0;i<2*n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        num=a[i+n]-a[i];
        if(num<min)
            min=num;
    }
    printf("%d",min);
    return 0;
}