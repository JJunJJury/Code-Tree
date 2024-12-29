#include <stdio.h>

int main() {
    int a[10],sum1=0,sum2=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
            sum1+=a[i];
        else
            sum2+=a[i];
    }
    printf("%d",sum1>sum2?sum1-sum2:sum2-sum1);

    return 0;
}