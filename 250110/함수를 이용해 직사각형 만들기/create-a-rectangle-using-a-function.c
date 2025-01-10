#include <stdio.h>

void Printstars(int n,int m);
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    Printstars(n,m);
    return 0;
}

void Printstars(int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("1");
        }
        puts("");
    }
}