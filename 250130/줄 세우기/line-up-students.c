#include <stdio.h>

typedef struct student{
    int tall;
    int kg;
    int num;
}Student;

int main() {
    int n,site=1,temp;
    Student number[1005];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&number[i].tall,&number[i].kg);
        number[i].num=site;
        site++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(number[j].tall<number[j+1].tall)
            {
                temp=number[j].tall;
                number[j].tall=number[j+1].tall;
                number[j+1].tall=temp;
                temp=number[j].kg;
                number[j].kg=number[j+1].kg;
                number[j+1].kg=temp;
                temp=number[j].num;
                number[j].num=number[j+1].num;
                number[j+1].num=temp;
            }
            else if(number[j].tall==number[j+1].tall)
            {
                if(number[j].kg<number[j+1].kg)
                {
                    temp=number[j].tall;
                    number[j].tall=number[j+1].tall;
                    number[j+1].tall=temp;
                    temp=number[j].kg;
                    number[j].kg=number[j+1].kg;
                    number[j+1].kg=temp;
                    temp=number[j].num;
                    number[j].num=number[j+1].num;
                    number[j+1].num=temp;
                }
                else if(number[j].kg==number[j+1].kg)
                {
                    if(number[j].num>number[j+1].num)
                    {
                        temp=number[j].tall;
                        number[j].tall=number[j+1].tall;
                        number[j+1].tall=temp;
                        temp=number[j].kg;
                        number[j].kg=number[j+1].kg;
                        number[j+1].kg=temp;
                        temp=number[j].num;
                        number[j].num=number[j+1].num;
                        number[j+1].num=temp;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d %d",number[i].tall,number[i].kg,number[i].num);
        puts("");
    }
    return 0;
}