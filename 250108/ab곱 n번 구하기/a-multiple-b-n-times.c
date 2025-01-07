#include <stdio.h>

int main() {
    int n,a,b,cal;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cal=1;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            cal*=j;
        }
        printf("%d\n",cal);
    }
    return 0;
}