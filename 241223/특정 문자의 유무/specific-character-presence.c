#include <stdio.h>
#include <string.h>

int main() {
    int checkee=0,checkab=0;
    char a[100];
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=0;i<lenth-1;i++)
    {
        if(a[i]=='e'&&a[i+1]=='e')
            checkee=1;
        else if(a[i]=='a'&&a[i+1]=='b')
            checkab=1;
    }
    printf("%s %s",checkee==1?"Yes":"No",checkab==1?"Yes":"No");
    return 0;
}