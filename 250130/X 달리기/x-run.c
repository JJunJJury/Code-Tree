#include <stdio.h>

int main() {
    int x,speed=1,second=0;
    scanf("%d",&x);
    while(1)
    {
        if(x==0)
            break;
        
        x-=speed;
        if(x>=speed*2+1)
        {
            speed++;
        }
        else
        {
            if(x!=1)
                speed--;
        }
        second++;
    }
    printf("%d",second);
    return 0;
}