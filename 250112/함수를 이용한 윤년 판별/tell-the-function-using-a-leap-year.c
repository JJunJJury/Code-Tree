#include <stdio.h>
#include <stdbool.h>

bool check(int y);
int main() {
    int y;
    scanf("%d",&y);
    if(check(y))
        printf("true");
    else
        printf("false");
    return 0;
}

bool check(int y)
{
    if(y%4==0&&!(y%100==0&&y%400!=0))
        return true;
    return false;
}