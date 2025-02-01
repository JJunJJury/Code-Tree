#include <stdio.h>

int main() {
    int n,m,cnt=0;
    char a[55][55];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-2;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i][j+1]=='E'&&a[i][j+2]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<m;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i][j-1]=='E'&&a[i][j-2]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i+1][j]=='E'&&a[i+2][j]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i-1][j]=='E'&&a[i-2][j]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<m-2;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i+1][j+1]=='E'&&a[i+2][j+2]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=2;j<m;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i+1][j-1]=='E'&&a[i+2][j-2]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        for(int j=2;j<m;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i-1][j-1]=='E'&&a[i-2][j-2]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<m-2;j++)
        {
            if(a[i][j]=='L')
            {
                if(a[i-1][j+1]=='E'&&a[i-2][j+2]=='E')
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d",cnt);
    return 0;
}