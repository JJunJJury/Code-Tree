#include <stdio.h>
#include <string.h>

typedef struct rocation{
    char name[12];
    char home[12];
    char roca[12];
}Rocation;

int main() {
    int n,site;
    char check[12]="a";
    scanf("%d",&n);
    Rocation num[12];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %s",num[i].name,num[i].home,num[i].roca);
        if(strcmp(check,num[i].name)<0)
        {
            strcpy(check,num[i].name);
            site=i;
        }
    }
    printf("name %s\n",num[site].name);
    printf("addr %s\n",num[site].home);
    printf("city %s\n",num[site].roca);
    return 0;
}