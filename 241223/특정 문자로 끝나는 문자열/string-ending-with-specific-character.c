#include <stdio.h>
#include <string.h>

int main() {
    char a[10][20],word;
    int len[10];
    for(int i=0;i<10;i++)
    {
        scanf("%s",a[i]);
        len[i]=strlen(a[i]);
    }
    getchar();
    scanf("%c",&word);
    for(int i=0;i<10;i++)
    { 
        if(a[i][len[i]-1]==word)
        {
            printf("%s\n",a[i]);
        }
    }
    return 0;
}