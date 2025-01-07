#include <stdio.h>

int main() {
    int max=-999,min=999,a;
    while(1)
    {
        scanf("%d",&a);
        if(a==999||a==-999)
            break;
        if(a>max)
            max=a;
        if(a<min)
            min=a;
    }
    printf("%d %d",max,min);
    return 0;
}