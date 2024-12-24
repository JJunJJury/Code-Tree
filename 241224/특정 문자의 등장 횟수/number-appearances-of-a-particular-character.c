#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    int checkee=0,checkab=0;
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=0;i<lenth-1;i++)
    {
        if(a[i]=='e'&&a[i+1]=='e')
            checkee++;
        else if(a[i]=='e'&&a[i+1]=='b')
            checkab++;
    }
    printf("%d %d",checkee,checkab);
    return 0;
}