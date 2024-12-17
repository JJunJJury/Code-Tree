#include <stdio.h>

int main() {
    int a,b,c,low;
    scanf("%d %d %d",&a,&b,&c);
    low=a;
    if(b<low)
        low=b;
    if(c<low)
        low=c;
    printf("%d\n",low);
    return 0;
}