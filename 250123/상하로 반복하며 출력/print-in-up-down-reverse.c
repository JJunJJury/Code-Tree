#include <stdio.h>

int main() {
    int n,a[9][9];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                printf("%d",i+1);
            }
            else
            {
                printf("%d",n-i);
            }
        }
        puts("");
    }
    return 0;
}