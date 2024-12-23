#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100];
    int lena,lenb;
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    lena=strlen(a);
    lenb=strlen(b);
    for(int i=0;i<lena;i++)
    {
        if(a[i]!=' '&&a[i]!='\n')
            printf("%c",a[i]);
    }
    for(int i=0;i<lenb;i++)
    {
        if(b[i]!=' '&&b[i]!='\n')
            printf("%c",b[i]);
    }
    
    return 0;
}