#include <stdio.h>

int main() {
    int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1},n,x=0,y=0,re,a;
    char d;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf(" %c %d",&d,&re);
        if(d=='E')
            a=0;
        else if(d=='W')
            a=1;
        else if(d=='S')
            a=2;
        else
            a=3;
        for(int j=0;j<re;j++)
        {
            x+=dx[a];
            y+=dy[a];
        }
    }
    printf("%d %d",x,y);
    return 0;
}