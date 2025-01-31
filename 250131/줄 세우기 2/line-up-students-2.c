#include <stdio.h>

typedef struct student{
    int tall;
    int kg;
    int num;
}Student;

int main() {
    int n,num=1,temp;
    Student a[1005];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].tall,&a[i].kg);
        a[i].num=num;
        num++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j].tall>a[j+1].tall)
            {
                temp=a[j].tall;
                a[j].tall=a[j+1].tall;
                a[j+1].tall=temp;
                temp=a[j].kg;
                a[j].kg=a[j+1].kg;
                a[j+1].kg=temp;
                temp=a[j].num;
                a[j].num=a[j+1].num;
                a[j+1].num=temp;
            }
            else if(a[j].tall==a[j+1].tall)
            {
                if(a[j].kg<a[j+1].kg)
                {
                    temp=a[j].tall;
                    a[j].tall=a[j+1].tall;
                    a[j+1].tall=temp;
                    temp=a[j].kg;
                    a[j].kg=a[j+1].kg;
                    a[j+1].kg=temp;
                    temp=a[j].num;
                    a[j].num=a[j+1].num;
                    a[j+1].num=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d %d",a[i].tall,a[i].kg,a[i].num);
        puts("");
    }
    return 0;
}