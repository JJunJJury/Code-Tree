#include <stdio.h>

void Sort(int *a,int *b,int *c);
int main() {
    int a,b,c,cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    Sort(&a,&b,&c);
    while(!(b-a==1&&c-b==1))
    {
        Sort(&a,&b,&c);
        if(b-a<=2||c-b<=2)
        {
            cnt+=1;
            break;
        }
        else if(b-a<=3||c-b<=3)
        {
            cnt+=2;
            break;
        }
        else if(c-b<b-a)
        {
            a=(b+c)/2;
            cnt++;
        }
        else
        {
            c=(a+b)/2;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}

void Sort(int *a,int *b,int *c)
{
    int temp;
    if(*a>*b)
    {
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if(*b>*c)
    {
        temp=*b;
        *b=*c;
        *c=temp;
    }
}