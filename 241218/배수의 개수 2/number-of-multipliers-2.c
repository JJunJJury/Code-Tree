#include <stdio.h>

int main() {
    int num,cnt=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num%2==1)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}