#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i%2==1&&i%3==0)
            sum+=i;
    }
    printf("%d",sum);
    return 0;
}