#include <stdio.h>

int main() {
    int temp[3],count;
    char yn[3];
    count=0;
    for(int i=0;i<3;i++)
    {
        scanf("%c %d",&yn[i],&temp[i]);
        if(yn[i]=='Y'&&temp[i]>=37)
        {
            count++;
        }
    }
    count++;
    if(count>=2)
        printf("E");
    else
        printf("N");
    return 0;
}