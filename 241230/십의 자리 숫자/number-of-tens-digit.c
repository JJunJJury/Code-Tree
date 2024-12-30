#include <stdio.h>

int main() {
    int a[10]={0,},num;
    while(1)
    {
        scanf("%d",&num);
        a[num/10]++;
        if(num==0)
            break;
    }
    for(int i=1;i<10;i++)
    {
        printf("%d - %d\n",i,a[i]);
    }
    return 0;
}