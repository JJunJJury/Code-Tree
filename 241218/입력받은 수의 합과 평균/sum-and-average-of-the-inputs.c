#include <stdio.h>

int main() {
    int n,sum=0,num;
    double number;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    number=(double)sum/n;
    printf("%d %.1f",sum,number);
    return 0;
}