#include <stdio.h>
#include <string.h>

typedef struct people{
    char name[13];
    int tall;
    double kg;
}People;

int main() {
    People a[6];
    int tempd;
    double tempf;
    char temp[13];
    for(int i=0;i<5;i++)
    {
        scanf("%s %d %lf",a[i].name,&a[i].tall,&a[i].kg);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(strcmp(a[j].name,a[j+1].name)>0)
            {
                strcpy(temp,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,temp);
                tempd=a[j].tall;
                a[j].tall=a[j+1].tall;
                a[j+1].tall=tempd;
                tempf=a[j].kg;
                a[j].kg=a[j+1].kg;
                a[j+1].kg=tempf;
            }
        }
    }
    printf("name\n");
    for(int i=0;i<5;i++)
    {
        printf("%s %d %.1f",a[i].name,a[i].tall,a[i].kg);
        puts("");
    }
    puts("");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[j].tall<a[j+1].tall)
            {
                strcpy(temp,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,temp);
                tempd=a[j].tall;
                a[j].tall=a[j+1].tall;
                a[j+1].tall=tempd;
                tempf=a[j].kg;
                a[j].kg=a[j+1].kg;
                a[j+1].kg=tempf;
            }
        }
    }
    printf("height\n");
    for(int i=0;i<5;i++)
    {
        printf("%s %d %.1f",a[i].name,a[i].tall,a[i].kg);
        puts("");
    }
    return 0;
}