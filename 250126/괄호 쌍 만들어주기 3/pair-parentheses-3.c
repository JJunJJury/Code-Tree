#include <stdio.h>
#include <string.h>

int main() {
    char a[105];
    int lenth,cnt=0;
    scanf("%s",a);
    lenth=strlen(a);
    for(int i=0;i<lenth-1;i++)
    {
        if(a[i]==')')
            continue;
        for(int j=i+1;j<lenth;j++)
        {
            if(a[j]==')')
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}