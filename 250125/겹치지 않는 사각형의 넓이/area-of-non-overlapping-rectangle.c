#include <stdio.h>

int main() {
    int a[2000][2000]={0,},x1,y1,x2,y2,cnt=0;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    for(int i=x1+1000;i<x2+1000;i++)
    {
        for(int j=y1+1000;j<y2+1000;j++)
        {
            a[i][j]++;
        }
    }
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    for(int i=x1+1000;i<x2+1000;i++)
    {
        for(int j=y1+1000;j<y2+1000;j++)
        {
            a[i][j]++;
        }
    }
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    for(int i=x1+1000;i<x2+1000;i++)
    {
        for(int j=y1+1000;j<y2+1000;j++)
        {
            a[i][j]--;
        }
    }
    for(int i=0;i<2000;i++)
    {
        for(int j=0;j<2000;j++)
        {
            if(a[i][j]==1)
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}