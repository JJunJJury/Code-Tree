#include <stdio.h>

int main() {
    int site=10,a[10],sum=0,cnt=0,check=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(check==0&&a[i]>=250)
        {
            site=i;
            check=1;
        }
    }
    for(int i=0;i<site;i++)
    {
        sum+=a[i];
        cnt++;
    }
    printf("%d %.1f",sum,(double)sum/cnt);
    return 0;
}