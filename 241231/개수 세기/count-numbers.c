#include <stdio.h>

int main() {
    int n,m,num,cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(m==num)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}