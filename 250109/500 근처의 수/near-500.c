#include <stdio.h>

int main() {
    int big=1,small=1000,num;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num>500)
        {
            if(num<small)
                small=num;
        }
        else if(num<500)
        {
            if(num>big)
                big=num;
        }
    }
    printf("%d %d",big,small);
    return 0;
}