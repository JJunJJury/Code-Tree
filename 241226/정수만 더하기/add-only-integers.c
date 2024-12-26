#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    int sum=0;
    scanf("%s",a);
    int lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            sum+=a[i]-'0';
        }
    }
    printf("%d",sum);
    return 0;
}