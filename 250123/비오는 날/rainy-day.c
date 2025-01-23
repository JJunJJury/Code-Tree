#include <stdio.h>
#include <string.h>

typedef struct weather
{
    int year,month,date;
    char day[10];
    char wea[10];
}Weather;

int main() {
    Weather weath[102],keep[102];
    int n,site=0,roc=0,save_year,save_month,save_date;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d-%d-%d %s %s",&weath[i].year,&weath[i].month,&weath[i].date,weath[i].day,weath[i].wea);
        if(strcmp(weath[i].wea,"Rain")==0)
        {
            keep[site].year=weath[i].year;
            keep[site].month=weath[i].month;
            keep[site].date=weath[i].date;
            strcpy(keep[site].day,weath[i].day);
            strcpy(keep[site].wea,weath[i].wea);
            site++;
        }
    }
    save_year=keep[0].year;
    save_month=keep[0].month;
    save_date=keep[0].date;
    for(int i=0;i<site;i++)
    {
        if(keep[i].year<save_year)
        {
            roc=i;
            save_year=keep[i].year;
            save_month=keep[i].month;
            save_date=keep[i].date;
        }
        else if(keep[i].year==save_year)
        {
            if(keep[i].month<save_month)
            {
                roc=i;
                save_year=keep[i].year;
                save_month=keep[i].month;
                save_date=keep[i].date;
            }
            else if(keep[i].month==save_month)
            {
                if(keep[i].date<save_date)
                {
                    roc=i;
                    save_year=keep[i].year;
                    save_month=keep[i].month;
                    save_date=keep[i].date;
                }
            }
        }
    }
    printf("%d-%02d-%02d %s %s",keep[roc].year,keep[roc].month,keep[roc].date,keep[roc].day,keep[roc].wea);
    return 0;
}