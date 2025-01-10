#include <stdio.h>
#include <limits.h>

int main() {
    int n,a[100],temp,min=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<min)
            min=a[i+1]-a[i];
    }
    printf("%d",min);
    return 0;
}