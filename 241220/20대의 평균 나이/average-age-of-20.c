#include <stdio.h>

int main() {
    int sum=0,cnt=0,num;
    while(1)
    {
        scanf("%d",&num);
        if(num<20||num>=30)
            break;
        sum+=num;
        cnt++;
    }
    printf("%.2f",(double)sum/cnt);
    return 0;
}