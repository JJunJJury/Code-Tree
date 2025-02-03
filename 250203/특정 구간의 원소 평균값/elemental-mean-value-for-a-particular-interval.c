#include <stdio.h>

int main() {
    int n,a[102],avgcnt,cnt=0,check=0;
    double avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            avg=0;
            avgcnt=0;
            check=0;
            for(int k=i;k<=j;k++)
            {
                avg+=a[k];
                avgcnt++;
            }
            avg/=avgcnt;
            for(int k=i;k<=j;k++)
            {
                if(a[k]==avg)
                    check=1;
            }
            if(check==1)
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}