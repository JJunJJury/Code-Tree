#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num%3==0&&num%2==1)
            printf("%d\n",num);
    }
    return 0;
}