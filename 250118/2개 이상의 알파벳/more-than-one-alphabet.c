#include <stdio.h>
#include <string.h>

int Check(char a[]);
int main() {
    char a[100];
    scanf("%s",a);
    if(Check(a)>=2)
        printf("Yes");
    else
        printf("No");
    return 0;
}

int Check(char a[])
{
    int count=1,lenth;
    char check=a[0];
    lenth=strlen(a);
    for(int i=1;i<lenth;i++)
    {
        if(check!=a[i])
            count++;
    }
    return count;
}