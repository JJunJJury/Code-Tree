#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    bool satis=false;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(1920%i==0&&2880%i==0)
            satis=true;
    }
    if(satis==true)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}