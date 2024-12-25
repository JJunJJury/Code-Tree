#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    int lenth,num;
    scanf("%s",a);
    while(1)
    {
        lenth=strlen(a);
        if(lenth==1)
            break;
        scanf("%d",&num);
        for(int i=num;i<lenth;i++)
        {
            a[i]=a[i+1];
        }
        a[lenth-1]='\0';
        printf("%s\n",a);
    }
    return 0;
}