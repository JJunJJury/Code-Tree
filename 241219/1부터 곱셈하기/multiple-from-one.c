#include <stdio.h>

int main() {
    int n,prod=1,num;
    scanf("%d",&n);
    for(int i=1;i<=100;i++)
    {
        prod*=i;
        if(prod>=n)
        {
            num=i;
            break;
        }
    }
    printf("%d",num);
    return 0;
}