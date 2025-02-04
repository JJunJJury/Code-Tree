#include <stdio.h>
#include <limits.h>

int main() {
    char a[105]={'0',},alpha;
    int n,size_left=INT_MAX,size_right=0,site;
    int cnt_G,cnt_H,max=0,number;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&site,&alpha);
        a[site]=alpha;
        if(site<size_left)
            size_left=site;
        if(site>size_right)
            size_right=site;
    }
    for(int i=size_left;i<=size_right;i++)
    {
        printf("%c",a[i]);
    }
    for(int i=size_left;i<=size_right;i++)
    {
        for(int j=1;j<size_right-size_left;j++)
        {
            cnt_H=0;
            cnt_G=0;
            for(int k=i;k<i+j;k++)
            {
                if(a[i]=='0')
                    break;
                else if(a[k]=='H')
                    cnt_H++;
                else if(a[k]=='G')
                    cnt_G++;
            }
            if(cnt_H==0||cnt_G==0||cnt_H==cnt_G)
            {
                if(a[i]=='0')
                    continue;
                number=j;
                if(j>max)
                    max=j;
            }
        }
    }
    printf("%d",max);
    return 0;
}