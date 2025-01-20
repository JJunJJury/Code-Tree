#include <stdio.h>

int a[100],b[100],n;
void Sort(int c[]);
int main() { 
    int check=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    Sort(a);
    Sort(b);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            check++;
    }
    if(check!=0)
        printf("No");
    else
        printf("Yes");
    return 0;
}

void Sort(int c[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(c[j]<c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}