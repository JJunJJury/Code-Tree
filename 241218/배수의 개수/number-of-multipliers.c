#include <stdio.h>

int main() {
    int num,cnt3=0,cnt5=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num%3==0)
            cnt3++;
        if(num%5==0)
            cnt5++;
    }
    printf("%d %d",cnt3, cnt5);
    return 0;
}