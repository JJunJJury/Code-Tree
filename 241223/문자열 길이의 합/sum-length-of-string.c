#include <stdio.h> 
#include <string.h>

int main() {
    int n,lenth[10],cnt=0,sum_len=0;
    char a[10][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
        lenth[i]=strlen(a[i]);
        sum_len+=lenth[i];
        if(a[i][0]=='a')
            cnt++;
    }
    printf("%d %d",sum_len,cnt);
    return 0;
}