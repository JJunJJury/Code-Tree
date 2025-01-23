#include <stdio.h>
#include <string.h>

int main() {
    int m1,d1,m2,d2,day=0,date,month,cal;
    int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    char when[7];
    scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
    scanf("%s",when);
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
    cal=day/7;
    day%=7;
    if(strcmp(when,"Tue")==0&&day>0)
        cal+=1;
    else if(strcmp(when,"Wed")==0&&day>1)
        cal+=1;
    else if(strcmp(when,"Thu")==0&&day>2)
        cal+=1;
    else if(strcmp(when,"Fri")==0&&day>3)
        cal+=1;
    else if(strcmp(when,"Sat")==0&&day>4)
        cal+=1;
    else if(strcmp(when,"Sun")==0&&day>5)
        cal+=1;
    printf("%d",cal);
    return 0;
}