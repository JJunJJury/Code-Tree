#include <stdio.h>

int main() {
    int win=0,a[21][21],savex,savey;
    for(int i=0;i<19;i++)
    {
        for(int j=0;j<19;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<14;i++)
    {
        for(int j=0;j<14;j++)
        {
            if(a[i][j]==1)
            {
                if(a[i+1][j]==1&&a[i+2][j]==1&&a[i+3][j]==1&&a[i+4][j]==1)
                {
                    win=1;
                    savex=i+2;
                    savey=j;
                }
                if(a[i][j+1]==1&&a[i][j+2]==1&&a[i][j+3]==1&&a[i][j+4]==1)
                {
                    win=1;
                    savex=i;
                    savey=j+2;
                }
                if(a[i+1][j+1]==1&&a[i+2][j+2]==1&&a[i+3][j+3]==1&&a[i+4][j+4]==1)
                {
                    win=1;
                    savex=i+2;
                    savey=j+2;
                }
            }
            if(a[i][j]==2)
            {
                if(a[i+1][j]==2&&a[i+2][j]==2&&a[i+3][j]==2&&a[i+4][j]==2)
                {
                    win=2;
                    savex=i+2;
                    savey=j;
                }
                if(a[i][j+1]==2&&a[i][j+2]==2&&a[i][j+3]==2&&a[i][j+4]==2)
                {
                    win=2;
                    savex=i;
                    savey=j+2;
                }
                if(a[i+1][j+1]==2&&a[i+2][j+2]==2&&a[i+3][j+3]==2&&a[i+4][j+4]==2)
                {
                    win=2;
                    savex=i+2;
                    savey=j+2;
                }
            }
        }
    }
    for(int i=0;i<14;i++)
    {
        for(int j=4;j<19;j++)
        {
            if(a[i][j]==1)
            {
                if(a[i+1][j-1]==1&&a[i+2][j-2]==1&&a[i+3][j-3]==1&&a[i+4][j-4]==1)
                {
                    win=1;
                    savex=i+2;
                    savey=j-2;
                }
            }
            if(a[i][j]==2)
            {
                if(a[i+1][j-1]==2&&a[i+2][j-2]==2&&a[i+3][j-3]==2&&a[i+4][j-4]==2)
                {
                    win=2;
                    savex=i+2;
                    savey=j-2;
                }
            }
        }
    }
    savex++,savey++;
    printf("%d\n",win);
    printf("%d %d\n",savex,savey);
    return 0;
}