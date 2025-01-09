#include <stdio.h>

int main() {
    int a[1000]={0,},n,num,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(a[i]==1)
        {
            if(i>max)
                max=i;
        }
    }
    if(max>0)
        printf("%d",max);
    else
        printf("-1");
    return 0;
}