#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        for(int i=1;i<=9;i++)
        {
            printf("%d * %d = %d\n",b,i,b*i);
        }
    }
    else
    {
        for(int i=1;i<=9;i++)
        {
            for(int j=b;j>=a;j-=2)
            {
                printf("%d * %d = %d",j,i,j*i);
                if(j!=2)
                    printf(" / ");
            }
            puts("");
        }
    }
    
    return 0;
}