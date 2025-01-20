#include <stdio.h>

int a[2000],max=0;
void Sort(int n);
void Max(int n);
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n;i++)
    {
        scanf("%d",&a[i]);
    }
    Sort(n);
    Max(n);
    printf("%d",max);
    return 0;
}

void Sort(int n)
{
    int temp;
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
}

void Max(int n)
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=a[i]+a[2*n-i-1];
        if(sum>max)
            max=sum;
    }
}