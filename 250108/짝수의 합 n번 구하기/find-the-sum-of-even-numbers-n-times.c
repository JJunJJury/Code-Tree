#include <stdio.h>

int main() {
    int n,a,b,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            if(j%2==0)
                sum+=j;
        }
        printf("%d\n",sum);
    }
    return 0;
}