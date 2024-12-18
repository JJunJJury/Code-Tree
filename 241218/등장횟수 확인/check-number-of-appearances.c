#include <stdio.h>

int main() {
    int num,cnt=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}