#include <stdio.h>
#include <stdbool.h>

int Check(int y,int m,int d);
int main() {
    int y,m,d,num;
    scanf("%d %d %d",&y,&m,&d);
    num=Check(y,m,d);
    if(num==1)
        printf("Spring");
    else if(num==2)
        printf("Summer");
    else if(num==3)
        printf("Fall");
    else if(num==4)
        printf("Winter");
    else   
        printf("-1");
    return 0;
}

int Check(int y,int m,int d)
{
    bool check;
    int season;
    if(y%4==0&&(!(y%4==0&&y%100==0)||y%400==0))
    {
        switch(m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if(d<=31)
                    check=true;
                else
                    check=false;
                break;
            case 4: case 6: case 9: case 11:
                if(d<=30)
                    check=true;
                else
                    check=false;
                break;
            case 2:
                if(d<=29)
                    check=true;
                else
                    check=false;
                break;
            default:
                check=false;
                break;
        }
        if(check==true)
        {
            if(m>=3&&m<=5)
                season=1;
            else if(m>=6&&m<=8)
                season=2;
            else if(m>=9&&m<=11)
                season=3;
            else if(m==1||m==2||m==12)
                season=4;
        }
        else
            season=-1;
    }
    else
    {
        switch(m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if(d<=31)
                    check=true;
                else
                    check=false;
                break;
            case 4: case 6: case 9: case 11:
                if(d<=30)
                    check=true;
                else
                    check=false;
                break;
            case 2:
                if(d<=28)
                    check=true;
                else
                    check=false;
                break;
            default:
                check=false;
                break;
        }
        if(check==true)
        {
            if(m>=3&&m<=5)
                season=1;
            else if(m>=6&&m<=8)
                season=2;
            else if(m>=9&&m<=11)
                season=3;
            else if(m==1||m==2||m==12)
                season=4;
        }
        else
            season=-1;
    }
    return season;
}