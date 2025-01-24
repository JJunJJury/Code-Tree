#include <stdio.h>

int main() {
    int a[100]={0,},n,x1,x2,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x1,&x2);
        for(int i=x1;i<=x2;i++)
        {
            a[i]++;
        }
    }
    for(int i=0;i<100;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("%d",max);
    return 0;
}