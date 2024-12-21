#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100];
    int lena,lenb;
    scanf("%s %s",a,b);
    lena=strlen(a);
    lenb=strlen(b);
    if(lena>lenb)
        printf("%s %d",a,lena);
    else if(lenb>lena)
        printf("%s %d",b,lenb);
    else
        printf("%s","same");
    return 0;
}