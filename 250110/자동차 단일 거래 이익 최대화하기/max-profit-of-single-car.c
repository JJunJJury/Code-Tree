#include <stdio.h>
#include <limits.h>

int main() {
    long long int price[1000],min,max,answer=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&price[i]);
    }
    max=min=price[0];
    for(int i=1;i<n;i++)
    {
        if(price[i]>max)
        {
            max=price[i];
        }
        if(price[i]<min)
        {
            if(answer<(max-min))
            {
                answer=max-min;
            }
            min=price[i];
            max=price[i];
        }
    }
    if(answer<max-min)
        answer=max-min;
    printf("%d",answer);

    return 0;
}