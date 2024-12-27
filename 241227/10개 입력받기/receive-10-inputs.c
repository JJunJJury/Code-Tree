#include <stdio.h>

int main() {
    int a[10],site=10,sum=0,cnt=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            site=i;
            break;
        }
        sum+=a[i];
        cnt++;
    }
    printf("%d %.1f",sum,(double)sum/cnt);
    return 0;
}