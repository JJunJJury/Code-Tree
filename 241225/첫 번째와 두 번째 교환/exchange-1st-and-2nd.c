#include <stdio.h>
#include <string.h>

int main() {
    char a[20],save1,save2;
    scanf("%s",a);
    save1=a[0];
    save2=a[1];
    int lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(save1==a[i])
            a[i]=save2;
        else if(save2==a[i])
            a[i]=save1;
    }
    printf("%s",a);
    return 0;
}