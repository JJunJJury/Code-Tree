#include <stdio.h>

int main() {
    int temp[50],count=0;
    char yn[50];
    for(int i=0;i<3;i++)
    {
        scanf(" %c %d",&yn[i],&temp[i]);
        if(yn[i]=='Y'&&temp[i]>=37)
        {
            count++;
        }
    }
    if(count>=2)
        printf("E");
    else
        printf("N");
    return 0;
}