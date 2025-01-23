#include <stdio.h>

int main() {
    int a,b,c,time;
    scanf("%d %d %d",&a,&b,&c);
    time=(a-11)*24*60+(b-11)*60+c-11;
    if(time<0)
        printf("-1");
    else
    {    
        printf("%d",time);
    }
    return 0;
}