#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
        {
            if(a[i]>='a'&&a[i]<='z')
                a[i]-='a'-'A';
            printf("%c",a[i]);
        }
    }
    return 0;
}