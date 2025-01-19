#include <stdio.h>

int a[100],max;
void Max(int n);
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[n-1];
    Max(n);
    printf("%d",max);
    return 0;
}

void Max(int n)
{
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
}