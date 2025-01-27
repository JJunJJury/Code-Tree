#include <stdio.h>

int main() {
    int n,a[105]={0,},x1,x2,check=0;
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
        if(a[i]>=n-1)
            check++;
    }
    if(check==0)
        printf("No");
    else
        printf("Yes");
    return 0;
}