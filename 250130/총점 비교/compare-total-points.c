#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[13];
    int a;
    int b;
    int c;
}Student;

int main() {
    int n,sum[13]={0,},temp;
    char temp_name[13];
    Student peo[13];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",peo[i].name,&peo[i].a,&peo[i].b,&peo[i].c);
        sum[i]=peo[i].a+peo[i].b+peo[i].c;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(sum[j]>sum[j+1])
            {
                temp=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=temp;
                strcpy(temp_name,peo[j].name);
                strcpy(peo[j].name,peo[j+1].name);
                strcpy(peo[j+1].name,temp_name);
                temp=peo[j].a;
                peo[j].a=peo[j+1].a;
                peo[j+1].a=temp;
                temp=peo[j].b;
                peo[j].b=peo[j+1].b;
                peo[j+1].b=temp;
                temp=peo[j].c;
                peo[j].c=peo[j+1].c;
                peo[j+1].c=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d %d",peo[i].name,peo[i].a,peo[i].b,peo[i].c);
        puts("");
    }
    return 0;
}