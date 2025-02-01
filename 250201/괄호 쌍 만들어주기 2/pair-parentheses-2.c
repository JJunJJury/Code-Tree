#include <stdio.h>
#include <string.h>

int main() {
    int cnt_op[55]={0,},cnt_ed[55]={0,},lenth,cnt=0,site_op=0,site_ed=0;
    char a[105]; 
    scanf("%s",a);
    lenth=strlen(a);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]=='('&&a[i+1]=='(')
        {
            cnt_op[site_op]=i+1;
            site_op++;
        }
        else if(a[i]==')'&&a[i+1]==')')
        {
            cnt_ed[site_ed]=i+1;
            site_ed++;
        }
    }
    for(int i=0;i<site_op;i++)
    {
        for(int j=0;j<site_ed;j++)
        {
            if(cnt_op[i]<cnt_ed[j])
            {
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}