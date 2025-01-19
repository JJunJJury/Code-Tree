#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char a[1000],b[1000];
int site;
bool Check(int len_a,int len_b);
int main() {
    scanf("%s",a);
    scanf("%s",b);
    if(Check(strlen(a),strlen(b)))
        printf("%d",site);
    else
        printf("-1");
    return 0;
}

bool Check(int len_a,int len_b)
{
    int cnt;
    for(int i=0;i<=len_a-len_b;i++)
    {
        cnt=0;
        for(int j=0;j<len_b;j++)
        {
            if(a[i+j]==b[j])
                cnt++;
        }
        if(cnt==len_b)
        {
            site=i;
            return true;
        }
    }
    return false;
}