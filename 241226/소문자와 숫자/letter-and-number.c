#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int lenth;
    scanf("%s",a);
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if((a[i]>='0'&&a[i]<='9')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]+='a'-'A';
            printf("%c",a[i]);
        }
    }
    return 0;
}