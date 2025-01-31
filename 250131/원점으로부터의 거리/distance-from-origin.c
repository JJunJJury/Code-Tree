#include <stdio.h>
#include <stdlib.h>

typedef struct site
{
    int x;
    int y;
    int sum;
    int num;
}Site;

int main() {
    int n,number=1,temp;
    Site a[1005];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].x,&a[i].y);
        a[i].sum=abs(a[i].x)+abs(a[i].y);
        a[i].num=number;
        number++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j].sum>a[j+1].sum)
            {
                temp=a[j].sum;
                a[j].sum=a[j+1].sum;
                a[j+1].sum=temp;
                temp=a[j].x;
                a[j].x=a[j+1].x;
                a[j+1].x=temp;
                temp=a[j].y;
                a[j].y=a[j+1].y;
                a[j+1].y=temp;
                temp=a[j].num;
                a[j].num=a[j+1].num;
                a[j+1].num=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i].num);
        puts("");
    }
    return 0;
}