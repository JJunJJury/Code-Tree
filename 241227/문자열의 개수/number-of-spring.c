#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i=0;
    char a[200][200];
    while(1)
    {
        scanf("%s",a[i]);
        if(strcmp(a[i],"0")==0)
            break;
        i++;
    }
    printf("%d\n",i);
    for(int j=0;j<i+1;j++)
    {
        if(j%2==0)
            printf("%s\n",a[j]);
    }
    return 0;
}