#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100],temp;
    scanf("%s",a);
    scanf("%s",b);
    int cnt=0,lenth=strlen(a);
    while(1)
    {
        if(strcmp(a,b)==0)
            break;
        else if(cnt==lenth)
        {
            cnt=-1;
            break;
        }
        temp=a[lenth-1];
        for(int i=lenth-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        cnt++;
    }
    if(cnt==-1)
        printf("-1");
    else
        printf("%d",cnt);
    return 0;
}