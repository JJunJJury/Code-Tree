#include <stdio.h>

int main() {
    int n,m,cnt;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        cnt=0;
        scanf("%d",&n);
        while(1)
        {
            if(n==1)
                break;
            if(n%2==0)
            {
                n/=2;
                cnt++;
            }
            else if(n%2==1)
            {
                n=3*n+1;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}