#include <stdio.h>
#include <string.h>

char a[100];
int lenth;
void Sort();
int main() {
    scanf("%s",a);
    Sort();
    for(int i=0;i<lenth;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}

void Sort()
{
    lenth=strlen(a);
    char temp;
    for(int i=0;i<lenth;i++)
    {
        for(int j=0;j<lenth-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}