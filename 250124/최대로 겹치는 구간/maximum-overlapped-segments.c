#include <stdio.h>

int main() {
    int a[200]={0,},n,x1,x2,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x1,&x2);
        for(int i=x1;i<=x2-1;i++)
        {
            a[i+100]++;
        }
    }
    for(int i=0;i<200;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("%d",max);
    return 0;
}