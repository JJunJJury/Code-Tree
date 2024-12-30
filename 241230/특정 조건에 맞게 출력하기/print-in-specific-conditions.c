#include <stdio.h>

int main() {
    int a[100],i=0;
    while(1)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            break;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(a[j]%2==1)
            printf("%d ",a[j]+3);
        else
            printf("%d ",a[j]/2);
    }
    return 0;
}