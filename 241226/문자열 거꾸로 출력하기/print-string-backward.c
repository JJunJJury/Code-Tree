#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int lenth;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"END")==0)
            break;
        lenth=strlen(a);
        for(int i=lenth-1;i>=0;i--)
        {
            printf("%c",a[i]);
        }
        puts("");
    }
    return 0;
}