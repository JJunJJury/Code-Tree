#include <stdio.h>
#include <string.h>

int main() {
    char a[10][200],word;
    int len[10],num=0;
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
            num=1;
            printf("%s\n",a[i]);
        }
    }
    if(num==0)
        printf("None");
    return 0;
}