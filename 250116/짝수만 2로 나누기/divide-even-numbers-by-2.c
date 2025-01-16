#include <stdio.h>

void Even(int *a);
int main() {
    int n,a[50]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Even(a);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void Even(int *a)
{
    while(1)
    {
        if((*a)==0||(*a)=='\0')
            break;
        else
        {
            if(*a%2==0)
                *a/=2;
            a++;
        }
    }
}