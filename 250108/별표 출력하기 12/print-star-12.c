#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cnt=0;
        if(i==0)
        {
            for(int j=0;j<n;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                printf("  ");
            }
            for(int k=0;k<n-i;k++)
            {
                if(i%2==0)
                {
                    if(cnt%2==0)
                    {
                        printf("  ");
                        cnt++;
                    }
                    else
                    {
                        printf("* ");
                        cnt++;
                    }
                }
                else if(i%2==1)
                {
                    if(cnt%2==0)
                    {
                        printf("* ");
                        cnt++;
                    }
                    else
                    {
                        printf("  ");
                        cnt++;
                    }
                }
            }
            
        }
        puts("");
    }
    return 0;
}