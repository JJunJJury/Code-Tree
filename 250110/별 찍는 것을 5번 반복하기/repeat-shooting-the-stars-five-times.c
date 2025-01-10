#include <stdio.h>

void Printstarts();
int main() {
    for(int i=0;i<5;i++)
    {
        Printstarts();
    }
    return 0;
}

void Printstarts()
{
    for(int i=0;i<10;i++)
    {
        printf("*");
    }
    puts("");
}