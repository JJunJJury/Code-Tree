#include <stdio.h>

int main() {
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m1,d1,m2,d2,day=0,date,month,when=1;
    scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
    if(m2<m1||(m1==m2&&d2<d1))
    {
        date=d2;
        month=m2;
        while(1)
        {
            if(month==m1&&date==d1)
                break;
            date++;
            day++;
            if(date>mon[month-1])  
            {
                date=1;
                month++;
            }
        }
        day*=-1;
    }
    else
    {
        date=d1;
        month=m1;
        while(1)
        {
            if(month==m2&&date==d2)
                break;

            date++;
            day++;
            if(date>mon[month-1])  
            {
                date=1;
                month++;
            }
        }
    }
    when+=day;
    while(1)
    {
        if(when>0)
            break;
        when+=7;
    }
    when%=7;
    switch(when)
    {
        case 0:
            printf("Sun");
            break;
        case 1:
            printf("Mon");
            break;
        case 2:
            printf("Tue");
            break;
        case 3:
            printf("Wed");
            break;
        case 4:
            printf("Thu");
            break;
        case 5:
            printf("Fri");
            break;
        case 6:
            printf("Sat");
            break;
        default:
            break;
    }
    return 0;
}