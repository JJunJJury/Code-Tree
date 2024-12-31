#include <stdio.h>

int main() {
    int num,a[4]={0,};
    char b;
    for(int i=0;i<3;i++)
    {
        scanf("%c %d",&b,&num);
        getchar();
        if(b=='Y'&&num>=37)
            a[0]++;
        else if(b=='N'&&num>=37)
            a[1]++;
        else if(b=='Y'&&num<37)
            a[2]++;
        else
            a[3]++;
    }
    printf("%d %d %d %d %c",a[0],a[1],a[2],a[3],a[0]>=2?'E':' ');

    return 0;
}