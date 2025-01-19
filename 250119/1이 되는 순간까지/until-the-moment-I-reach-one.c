#include <stdio.h>

int cnt=0;
void Cnt(int n);
int main() {
    int n;
    scanf("%d",&n);
    Cnt(n);
    printf("%d",cnt);
    return 0;
}

void Cnt(int n)
{
    if(n==1)
        return;
    if(n%2==0)
    {
        cnt++;
        Cnt(n/2);
    }
    else if(n%2==1)
    {
        cnt++;
        Cnt(n/3);
    }

}