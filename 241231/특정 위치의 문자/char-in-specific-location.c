#include <stdio.h>

int main() {
    char word,a[6]="LEBROS";
    int idx;
    scanf("%c",&word);
    for(int i=0;i<6;i++)
    {
        if(a[i]==word)
            idx=i;
    }
    if(idx==-1)
        printf("None\n");
    else
        printf("%d",idx);
    return 0;
}