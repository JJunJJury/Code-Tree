#include <stdio.h>

int main() {
    int a[11]={0,},num;
    while(1)
    {
        scanf("%d",&num);
        a[num/10]++;
        if(num==0)
            break;
    }
    for(int i=10;i>0;i--)
    {
        printf("%d - %d\n",i*10,a[i]);
    }
    return 0;
}