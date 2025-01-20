#include <stdio.h>
#include <string.h>

char a[100][100];
void Sort(int n);
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    Sort(n);
    for(int i=0;i<n;i++)
    {
        scanf("%s\n",a[i]);
    }
    return 0;
}

void Sort(int n)
{
    char temp[100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(strcmp(a[j],a[j+1])<0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
}