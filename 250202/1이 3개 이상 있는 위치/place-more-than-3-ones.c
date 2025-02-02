#include <stdio.h>
#include <stdbool.h>

bool Check(int x,int y,int n);
int main() {
    int n,a[105][105],cnt,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},x,y,answer=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cnt=0;
            for(int k=0;k<4;k++)
            {
                y=i+dy[k];
                x=j+dx[k];
                if(Check(x,y,n)&&a[y][x]==1) 
                    cnt++;
            }
            if(cnt>=3)
                answer++;
        }
    }
    printf("%d",answer);
    return 0;
}

bool Check(int x,int y,int n)
{
    if(x<0||x>n-1||y<0||y>n-1)
        return false;
    else
        return true;
}