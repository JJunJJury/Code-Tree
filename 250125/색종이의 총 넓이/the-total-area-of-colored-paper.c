#include <stdio.h>

int main() {
    int a[200][200]={0,},n,x,y,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        for(int j=x+100;j<x+108;j++)
        {
            for(int k=y+100;k<y+108;k++)
            {
                a[j][k]++;
            }
        }
    }
    for(int i=0;i<200;i++)
    {
        for(int j=0;j<200;j++)
        {
            if(a[i][j]!=0)
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}