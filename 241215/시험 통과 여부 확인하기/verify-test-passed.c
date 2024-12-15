#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=80)
        printf("pass\n");
    else
        printf("%d more score\n",80-n);
    return 0;
}