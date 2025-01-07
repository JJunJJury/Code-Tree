#include <stdio.h>

int main() {
    int max=0,a;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a);
        if(a>max)
            max=a;
    }
    printf("%d",max);
    return 0;
}