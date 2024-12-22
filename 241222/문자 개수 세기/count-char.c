#include <stdio.h>
#include <string.h>

int main() {
    int cnt=0,lenth;
    char a[100],word;
    fgets(a,100,stdin);
    lenth=strlen(a);
    scanf("%c",&word);
    for(int i=0;i<lenth;i++)
    {
        if(a[i]==word)
            cnt++;
    }
    printf("%d",cnt);

    return 0;
}