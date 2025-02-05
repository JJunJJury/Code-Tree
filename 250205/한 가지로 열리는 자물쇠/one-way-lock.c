#include <stdio.h>

int main() {
    int n,a[105]={0,},b[105]={0,},c[105]={0,},cnt=0,A,B,C,cnta=0,cntb=0,cntc=0;
    scanf("%d",&n);
    scanf("%d %d %d",&A,&B,&C);
    for(int i=A-2;i<=A+2;i++)
    {
        if(i<=0)
            continue;
        a[i]=1;
    }
    for(int i=B-2;i<=B+2;i++)
    {
        if(i<=0)
            continue;
        b[i]=1;
    }
    for(int i=C-2;i<=C+2;i++)
    {
        if(i<=0)
            continue;
        c[i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)
            cnta++;
        if(b[i]==0)
            cntb++;
        if(c[i]==0)
            cntc++;
    }
    printf("%d",(n*n*n)-(cnta*cntb*cntc));
    return 0;
}