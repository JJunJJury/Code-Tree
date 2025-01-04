#include <stdio.h>

int main() {
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<i;j++)
        {
            printf("  ");
        }
        for(int k=n;k>0;k--) 
        {
            num=k-i;
            if(num>0)
                printf("%d ",num);
        }
        puts("");
    }
    return 0;
}