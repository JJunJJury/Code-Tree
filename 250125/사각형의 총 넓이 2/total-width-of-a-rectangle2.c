#include <stdio.h>

int main() {
    int a[200][200]={0,},n,x1,y1,x2,y2,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(int j=x1+100;j<x2+100;j++)
        {
            for(int k=y1+100;k<y2+100;k++)
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