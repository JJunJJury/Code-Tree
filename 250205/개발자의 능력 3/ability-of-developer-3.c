#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int a[8],sum=0,sum_case,min=INT_MAX,num;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                sum_case=a[i]+a[j]+a[k];
            }
            num=abs(sum_case-(sum-sum_case));
            if(num<min)
                min=num;
        }
    }
    printf("%d",min);
    return 0;
}