#include <stdio.h>

int main() {
    char a[5][20]={"apple","banana","grape","blueberry","orange"};
    char word;
    int cnt=0;
    scanf("%c",&word);
    for(int i=0;i<5;i++)
    {
        if(a[i][2]==word||a[i][3]==word)
        {
            cnt++;
            printf("%s\n",a[i]);
        }
    }
    printf("%d",cnt);
    return 0;
}