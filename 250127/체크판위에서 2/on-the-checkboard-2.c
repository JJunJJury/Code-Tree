#include <stdio.h>

int main() {
    char a[20][20],recent;
    int r,c,cnt=0,check=0,recent_x,recent_y;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    recent=a[0][0];
    recent_x=0,recent_y=0;
    for(int i=recent_x+1;i<r-1;i++)
    {
        for(int j=recent_y+1;j<c-1;j++)
        {
            if(a[i][j]!=recent)
            {
                recent=a[i][j];
                recent_x=i;
                recent_y=j;
                check++;
            }
        }
    }
    if(check==3)
    {
        
    }
    return 0;
}