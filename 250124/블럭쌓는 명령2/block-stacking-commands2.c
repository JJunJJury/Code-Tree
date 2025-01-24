#include <stdio.h>

int main() {
    int a[105]={0,};
    int n,k,b,c,max=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&b,&c);
        for(int j=b;j<=c;j++)
        {
            a[j]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max<a[i])  
            max=a[i];
    }
    printf("%d",max);
    return 0;
}