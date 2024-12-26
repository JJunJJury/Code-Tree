#include <stdio.h>
#include <string.h>
int main() {
    int n,a,sum=0;
    char c[100],temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    sprintf(c,"%d",sum);
    int lenth=strlen(c);
    temp=c[0];
    for(int i=0;i<lenth;i++)
    {
        c[i]=c[i+1];
    }
    c[lenth-1]=temp;
    printf("%s",c);
    return 0;
}