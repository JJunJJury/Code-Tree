#include <stdio.h>
#include <string.h>

typedef struct weather
{
    int year,month,date;
    char day[10];
    char wea[10];
}Weather;

int main() {
    Weather weath[102];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d-%d-%d %s %s",&weath[i].year,&weath[i].month,&weath[i].date,weath[i].day,weath[i].wea);
        if(strcmp(weath[i].wea,"Rain")==0)
        {
            printf("%d-%02d-%02d %s %s",weath[i].year,weath[i].month,weath[i].date,weath[i].day,weath[i].wea);
            break;
        }
    }
    return 0;
}