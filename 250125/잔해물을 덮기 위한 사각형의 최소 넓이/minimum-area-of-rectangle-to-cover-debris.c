#include <stdio.h>

int main() {
    int a[2000][2000]={0,},x1,y1,x2,y2,x_min=2000,x_max=0,y_min=2000,y_max=0;
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
            if(a[i][j]==1)
                a[i][j]--;
        }
    }
    for(int i=0;i<2000;i++)
    {
        for(int j=0;j<2000;j++)
        {
            if(a[i][j]==1)
            {
                if(i<x_min)
                    x_min=i;
                if(i>x_max)
                    x_max=i;
                if(j<y_min)
                    y_min=j;
                if(j>y_max)
                    y_max=j;
            }
        }
    }
    printf("%d",(x_max+1-x_min)*(y_max+1-y_min));
    return 0;
}