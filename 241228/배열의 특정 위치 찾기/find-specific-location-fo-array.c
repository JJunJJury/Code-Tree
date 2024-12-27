#include <stdio.h>

int main() {
    int a[10],sum=0,sum3=0,cnt=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==1)
            sum+=a[i];
        if(i%3==2)
        {
            sum3+=a[i];
            cnt++;
        }
    }
    printf("%d %.1f",sum,(double)sum3/cnt);
    return 0;
}