#include <stdio.h>
#include <string.h>

int main() {
    char a[10],temp;
    int lenth;
    scanf("%s",a);
    lenth=strlen(a);
    printf("%s\n",a);
    for(int i=0;i<lenth;i++)
    {
        temp=a[lenth-1];
        for(int j=lenth-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
        printf("%s\n",a);
    }
    return 0;
}