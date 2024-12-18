#include <stdio.h>

int main() {
    int sum=0,cnt=0,num;
    double number;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num>=0&&num<=200)
        {
            sum+=num;
            cnt++;
        }
    }
    number=(double)sum/cnt;
    printf("%d %.1f",sum,number);

    return 0;
}