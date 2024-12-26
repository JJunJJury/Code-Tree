#include <stdio.h>
#include <string.h>

int main() {
    int n,cnt=0;
    char A[100],a[100];
    scanf("%d %s",&n,A);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        if(strcmp(a,A)==0)
            cnt++;
    }
    printf("%d",cnt);
    return 0;

}