#include <stdio.h>

int main() {
    int a,b,c,d,e,sum=0,cnt=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        sum=0;
        scanf("%d %d %d %d",&b,&c,&d,&e);
        sum+=b+c+d+e;
        if(sum>=240)
        {
            cnt++;
            printf("pass\n");
        }
        else
        {
            printf("fail\n");
        }
    }
    printf("%d",cnt);

    return 0;
}