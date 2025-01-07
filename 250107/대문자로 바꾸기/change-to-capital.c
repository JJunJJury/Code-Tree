#include <stdio.h>
#include <string.h>

int main() {
    char a[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf(" %c",&a[i][j]);
            getchar();
            if(a[i][j]>='a'&&a[i][j]<='z')
                a[i][j]-='a'-'A';
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        puts("");
    }
    return 0;
}