#include <stdio.h>

int main() {
    int numc=0,numh=0,numb=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%12==0)
            numb++;
        else if(i%3==0)
            numh++;
        else if(i%2==0)
            numc++;
    }
    printf("%d %d %d",numc,numh,numb);
    return 0;
}