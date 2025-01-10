#include <stdio.h>

void Square(int n);
int main() {
    int n;
    scanf("%d",&n);
    Square(n);
    return 0;
}

void Square(int n)
{
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",cnt);
            cnt++;
            if(cnt==10)
                cnt=1;
        }
        puts("");
    }
}