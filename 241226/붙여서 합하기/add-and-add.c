#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[1000],b[1000],ab[1000000],ba[1000000];
    int sum=0;
    scanf("%s",a);
    scanf("%s",b);
    strcat(ab,a);
    strcat(ab,b);
    strcat(ba,b);
    strcat(ba,a);
    printf("%d",atoi(ab)+atoi(ba));

    return 0;
}