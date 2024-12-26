#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100],temp;
    scanf("%s",a);
    scanf("%s",b);
    int lentha=strlen(a);
    int lenthb=strlen(b);
    for(int i=0;i<lenthb;i++)
    {
        if(b[i]=='L')
        {
            temp=a[0];
            for(int j=0;j<lentha;j++)
            {
                a[j]=a[j+1];
            }
            a[lentha-1]=temp;
        }
        else if(b[i]=='R')
        {
            temp=a[lentha-1];
            for(int j=lentha-1;j>0;j--)
            {
                a[j]=a[j-1];
            }
            a[0]=temp;
        }
    }
    printf("%s",a);
    return 0;
}