#include <stdio.h>
#include <string.h>

int a[105]={0,};
void Sort(int n);
int main() {
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            Sort(i);
            num=i/2;
            printf("%d ",a[num]);
        }
    }
    return 0;
}

void Sort(int n)
{
    int temp;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-1;j++)
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