#include <stdio.h>
#include <string.h>

int main() {
    char a[105][105],t[105],array[105][105],temp[105];
    int n,k,lenth,site=0,check;
    scanf("%d %d %s",&n,&k,t);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    lenth=strlen(t);
    for(int i=0;i<n;i++)
    {
        check=0;
        for(int j=0;j<lenth;j++)
        {
            if(a[i][j]==t[j])
                check++;
        }
        if(check==lenth)
        {
            strcpy(array[site],a[i]);
            site++;
        }
    }
    for(int i=0;i<site;i++)
    {
        for(int j=0;j<site-1;j++)
        {
            if(strcmp(array[j],array[j+1])>0)
            {
                strcpy(temp,array[j]);
                strcpy(array[j],array[j+1]);
                strcpy(array[j+1],temp);
            }
        }
    }
    printf("%s",array[k-1]);
    return 0;
}