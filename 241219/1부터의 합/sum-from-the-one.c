#include <stdio.h>

int main() {
    int n,sum=0,num;
    scanf("%d",&n);
    for(int i=1;i<=100;i++)
    {
        sum+=i;
        if(sum>n)
        {
            num=i;
            break;
        }
    }
    printf("%d",num);
    return 0;
}