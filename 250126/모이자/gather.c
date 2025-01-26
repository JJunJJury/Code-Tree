#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int a[105],n,move=0,move_min=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        move=0;
        for(int j=0;j<n;j++)
        {
            move+=a[j]*abs(j-i);
        }
        if(move<move_min){
            move_min=move;
        }
    }
    printf("%d",move_min);
    return 0;
}