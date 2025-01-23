#include <stdio.h>

int main() {
    int m1,d1,m2,d2,day=0,month,cnt=1;
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
    month=m1;
    day=d1;
    while(1)
    {
        if(month==m2&&day==d2)
            break;

        cnt++;
        day++;

        if(day>mon[month-1])
        {
            month++;
            day=1;
        }
    }
    printf("%d",cnt);
    return 0;
}