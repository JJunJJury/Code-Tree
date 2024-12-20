#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    bool satis=true;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=a;i<=b;i++)
    {
        if(c%i!=0)
            satis=false;
    }
    if(satis==false)   
        printf("YES");
    else
        printf("NO");
    return 0;
}