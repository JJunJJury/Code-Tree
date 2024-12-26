#include <stdio.h>
#include <string.h>
int main() {
    int a,b,cnt=0;
    char c[10];
    scanf("%d %d",&a,&b);
    sprintf(c,"%d",a+b);
    int lenth=strlen(c);
    for(int i=0;i<lenth;i++)
    {
        if(c[i]=='1')
            cnt++;
    }
    printf("%d",cnt);
    
    return 0;
}