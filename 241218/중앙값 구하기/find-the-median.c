#include <stdio.h>

int main() {
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=0;i<2;i++)
    {
        if(a>=b)
            temp=a;
            a=b;
            b=temp;
        if(b>=c)
            temp=b;
            b=c;
            c=temp;
    }
    printf("%d",b);
    return 0;
}