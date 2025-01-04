#include <stdio.h>

int main() {
    int n,cnt=9;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",cnt);
            cnt--;
            if(cnt==0) 
                cnt=9;
        }
        puts("");
    }
    return 0;
}