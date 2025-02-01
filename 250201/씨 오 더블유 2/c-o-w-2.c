#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    char a[105];
    scanf("%s",a);
    for(int i=0;i<n-2;i++)
    {
        if(a[i]=='C')
        {
            for(int j=i;j<n-1;j++)
            {
                if(a[j]=='O')
                {
                    for(int k=j;k<n;k++)
                    {
                        if(a[k]=='W')
                            cnt++;
                    }
                }
            }
        }
    }
    printf("%d",cnt);
    return 0;
}