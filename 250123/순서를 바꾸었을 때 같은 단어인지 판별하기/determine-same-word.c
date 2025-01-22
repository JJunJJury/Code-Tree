#include <stdio.h>
#include <string.h>

char a[10000],b[10000];
void Sort(char c[]);
int main() {
    int check=0;
    scanf("%s",a);
    scanf("%s",b);
    Sort(a);
    Sort(b);
    if(strlen(a)!=strlen(b))
        printf("No");
    else
    {
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]!=b[i])
                check++;
        }
        if(check!=0)
            printf("No");
        else
            printf("Yes");
    }
    return 0;
}

void Sort(char c[])
{
    int lenth;
    char temp;
    lenth=strlen(c);
    for(int i=0;i<lenth;i++)
    {
        for(int j=0;j<lenth-1;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}