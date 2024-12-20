#include <stdio.h>

int main() {
    int a[10],cnt=0,sum=0,num=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=250&&num==0)
        {
            printf("%d %.1f",sum,(double)sum/cnt);
            num=1;
        }
        sum+=a[i];
        cnt++;
    }
    return 0;
}