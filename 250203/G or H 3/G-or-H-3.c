#include <stdio.h>

int main() {
    int n,k,cnt,max=0,site,left=0,right,lenth;
    char a[10005]={0,},abc;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&site,&abc);
        a[site]=abc;
    }
    for(int i=0;i<10000;i++)
    {
        if(a[i]!='0'&&left==0) 
            left=i;
        if(a[i]!='0')
            right=i;
    }
    lenth=right-left;
    for(int i=left;i<left+lenth-k;i++)
    {
        cnt=0;
        for(int j=i;j<=i+k;j++)
        {
            if(a[j]=='G')
                cnt+=1;
            else if(a[j]=='H')
                cnt+=2;
        }
        if(cnt>max)
            max=cnt;
    }
    printf("%d",max);
    return 0;
}