#include <stdio.h>

int main() {
    int start,end,n,cnt=0,sum=0;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}