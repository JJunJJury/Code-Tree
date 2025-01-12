#include <stdio.h>

int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main() {
    int a,b,num;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+')
        num=sum(a,b);
    else if(c=='-')
        num=sub(a,b);
    else if(c=='*')
        num=mul(a,b);
    else if(c=='/')
        num=div(a,b);
    else
    {
        printf("False");
        return 0;
    }
    printf("%d %c %d = %d",a,c,b,num);
    return 0;
}


int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}