#include <stdio.h>

int main() {
    int a[105],n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]<=a[j]&&a[j]<=a[k])
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d",cnt);
    return 0;
}