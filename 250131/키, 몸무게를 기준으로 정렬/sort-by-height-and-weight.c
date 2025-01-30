#include <stdio.h>
#include <string.h>

typedef struct people{
    char name[13];
    int tall;
    int kg;
}People;

int main() {
    int n,temp;
    char temp_name[13];
    People a[12];
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
                strcpy(temp_name,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,temp_name);
                temp=a[j].tall;
                a[j].tall=a[j+1].tall;
                a[j+1].tall=temp;
                temp=a[j].kg;
                a[j].kg=a[j+1].kg;
                a[j+1].kg=temp;
            }
            else if(a[j].tall==a[j+1].tall)
            {
                if(a[j].kg<a[j+1].kg)
                {
                    strcpy(temp_name,a[j].name);
                    strcpy(a[j].name,a[j+1].name);
                    strcpy(a[j+1].name,temp_name);
                    temp=a[j].tall;
                    a[j].tall=a[j+1].tall;
                    a[j+1].tall=temp;
                    temp=a[j].kg;
                    a[j].kg=a[j+1].kg;
                    a[j+1].kg=temp;
                }
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