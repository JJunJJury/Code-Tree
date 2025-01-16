#include <stdio.h>
#include <stdbool.h>

bool Checkday(int m, int d);
int main() {
    int m,d;
    scanf("%d %d",&m,&d);
    if(Checkday(m,d))
        printf("Yes");
    else   
        printf("No");
    return 0;
}

bool Checkday(int m, int d)
{
    bool check=true;
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
    return check;
}