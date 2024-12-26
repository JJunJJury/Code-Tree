#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int n,sum=0;
    char a[10];
    scanf("%d",&n);
    sprintf(a,"%d",n);
    int lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        sum+=a[i]-'0';
    }
    printf("%d",sum);
    return 0;
}