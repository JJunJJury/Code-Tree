#include <stdio.h>

int main() {
    int n,m,p,check,a[30]={0,},cnt=0;
    char character;
    scanf("%d %d %d",&n,&m,&p);
    for(int i=n;i<30;i++)
    {
        a[i]=1;
    }
    for(int i=0;i<m;i++)
    {
        getchar();
        scanf("%c %d",&character,&check);
        if(i>=p-1)
        {
            a[character-'A']=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}