#include <stdio.h>

int main() {
    int start,end,cnt=0,n;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        n=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                n++;
        }
        if(n==3)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}