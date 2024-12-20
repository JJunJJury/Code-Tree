#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    bool satis=true;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a%3!=0)
            satis=false;
    }
    if(satis==true)
        printf("1");
    else
        printf("0");
    return 0;
}