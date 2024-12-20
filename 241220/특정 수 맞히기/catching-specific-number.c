#include <stdio.h>

int main() {
    int num;
    while(1)
    {
        scanf("%d",&num);
        if(num==25)
            break;
        else if(num<25)
            printf("Higher\n");
        else if(num>25)
            printf("Lower\n");
    }
    printf("Good");
    return 0;
}