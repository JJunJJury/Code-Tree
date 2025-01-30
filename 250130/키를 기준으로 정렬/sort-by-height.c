#include <stdio.h>
#include <string.h>

typedef struct people{
    char name[13];
    int tall;
    int kg;
}People;

int main() {
    int n,temptall,tempkg;
    char temp[13];
    People a[13];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",a[i].name,&a[i].tall,&a[i].kg);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j].tall>a[j+1].tall)
            {
                strcpy(temp,a[j+1].name);
                strcpy(a[j+1].name,a[j].name);
                strcpy(a[j].name,temp);
                temptall=a[j].tall;
                a[j].tall=a[j+1].tall;
                a[j+1].tall=temptall;
                tempkg=a[j].kg;
                a[j].kg=a[j+1].kg;
                a[j+1].kg=tempkg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d",a[i].name,a[i].tall,a[i].kg);
        puts("");
    }
    return 0;
}