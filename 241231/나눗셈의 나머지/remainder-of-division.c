#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c[10]={0,},sum=0;
    scanf("%d %d",&a,&b);
    while(1)
    {
        c[a%b]++;
        a/=b;
        if(a<=1)
            break;
    }
    for(int i=0;i<b;i++)
    {
        if(c[i]!=0)
            sum+=pow(c[i],2);
    }
    printf("%d",sum);
    return 0;
}