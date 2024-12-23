#include <stdio.h>
#include <string.h>

int main() {
    char a[1000],cal[1000],save;
    int lenth,cnt=1,site=0,cali[1000];
    scanf("%s",a);
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]==a[i+1])
        {
            save=a[i];
            cnt++;
        }
        else
        {
            cal[site]=save;
            cali[site]=cnt;
            site++;
            cnt=1;
        }
    }
    for(int i=0;i<site;i++)
    {
        printf("%c%d",cal[i],cali[i]);
    }

    return 0;
}