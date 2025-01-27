#include <stdio.h>

int main() {
    int a[12]={0,},check[12]={0,},n,cnt=0,num,roc;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&num,&roc);
        check[num-1]++;
        if(check[num-1]>1)
        {
            if(a[num-1]!=roc)
            {
                cnt++;
            }
        }
        a[num-1]=roc;
    }
    printf("%d",cnt);
    return 0;
}