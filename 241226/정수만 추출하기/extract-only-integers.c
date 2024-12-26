#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[10],b[10],aa[10],bb[10];
    scanf("%s",a);
    scanf("%s",b);
    int lentha,lenthb;
    lentha=strlen(a);
    lenthb=strlen(b);
    for(int i=0;i<lentha;i++)
    {
        if(!(a[i]>='0'&&a[i]<='9'))
            break;
        aa[i]=a[i];
    }
    for(int i=0;i<lenthb;i++)
    {
        if(!(b[i]>='0'&&b[i]<='9'))
            break;
        bb[i]=b[i];
    }
    printf("%d",atoi(aa)+atoi(bb));
    return 0;
}