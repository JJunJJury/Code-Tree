#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100],ab[200]={""},ba[200]={""};
    scanf("%s",a);
    scanf("%s",b);
    strcat(ab,a);
    strcat(ab,b);
    strcat(ba,b);
    strcat(ba,a);
    if(strcmp(ab,ba)==0)
        printf("true");
    else
        printf("false");
    return 0;
}