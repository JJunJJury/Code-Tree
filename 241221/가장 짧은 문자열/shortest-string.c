#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100],c[100];
    int lena,lenb,lenc,max,min;
    scanf("%s %s %s",a,b,c);
    lena=strlen(a);
    lenb=strlen(b);
    lenc=strlen(c);
    max=lena;
    if(lenb>max)
        max=lenb;
    if(lenc>max)
        max=lenc;
    min=lena;
    if(lenb<min)
        min=lenb;
    if(lenc<min)
        min=lenc;
    printf("%d",max-min);

    return 0;
}