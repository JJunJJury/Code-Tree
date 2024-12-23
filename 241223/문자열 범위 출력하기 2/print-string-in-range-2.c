#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int num,lenth;
    scanf("%s",a);
    lenth=strlen(a);
    scanf("%d",&num);
    if(num>lenth)
    {
        for(int i=lenth-1;i>=0;i--)
        {
            printf("%c",a[i]);
        }
    }
    else
    {
        for(int i=lenth-1;i>=lenth-num;i--)
            {
                printf("%c",a[i]);
            }
    }
    
    return 0;
}