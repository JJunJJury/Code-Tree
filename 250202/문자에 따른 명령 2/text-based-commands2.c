#include <stdio.h>
#include <string.h>

int main() {
    int x=0,y=0,n,lenth,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},tempx,tempy;
    char command[100005];
    scanf("%s",command);
    lenth=strlen(command);
    for(int i=0;i<lenth;i++)
    {
        if(command[i]=='L')
        {
            tempx=dx[3];
            tempy=dy[3];
            for(int j=3;j>0;j--)
            {
                dx[j]=dx[j-1];
                dy[j]=dy[j-1];
            }
            dx[0]=tempx;
            dy[0]=tempy;
        }
        else if(command[i]=='R')
        {
            tempx=dx[0];
            tempy=dy[0];
            for(int j=0;j<3;j++)
            {
                dx[j]=dx[j+1];
                dy[j]=dy[j+1];
            }
            dx[3]=tempx;
            dy[3]=tempy;
        }
        else if(command[i]=='F')
        {
            x+=dx[0];
            y+=dy[0];
        }
    }
    printf("%d %d",x,y);
    return 0;
}