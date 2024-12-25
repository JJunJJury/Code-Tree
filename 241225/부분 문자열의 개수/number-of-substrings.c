#include <stdio.h>
#include <string.h>

int main() {
    char a[1000],b[5];
    int cnt=0;
    scanf("%s",a);
    scanf("%s",b);
    int lenth=strlen(a);
    for(int i=0;i<lenth-1;i++)
    {
        if(a[i]==b[0]&&a[i+1]==b[1])
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}