#include <stdio.h>

int main() {
    int n,sum=0,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num%2==1&&num%3==0)
            sum+=i;
    }
    printf("%d",sum);
    return 0;
}