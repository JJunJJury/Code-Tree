#include <stdio.h>
#include <string.h>

int main() {
    int n,len[20],sum_len=0,cnt=0;
    char a[20][100],word;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        len[i]=strlen(a[i]);
    }
    getchar();
    scanf("%c",&word);
    for(int i=0;i<n;i++)
    {
        if(a[i][0]==word)
        {
            sum_len+=len[i];
            cnt++;
        }
    }
    printf("%d %.2f",cnt,(double)sum_len/cnt);

    return 0;
}