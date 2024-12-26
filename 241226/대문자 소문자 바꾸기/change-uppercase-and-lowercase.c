#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            printf("%c",a[i]-'a'+'A');
        else if(a[i]>='A'&&a[i]<='Z')  
            printf("%c",a[i]+'a'-'A');
    }
    return 0;
}