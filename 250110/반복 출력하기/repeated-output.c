#include <stdio.h>

void Printstars(int n);
int main() {
    int n;
    scanf("%d",&n);
    Printstars(n);
    return 0;
}

void Printstars(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("12345^&*()_");
        puts("");
    }
}