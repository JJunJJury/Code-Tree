#include <stdio.h>

int a[10],num=1;
void Cal(int n);
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Cal(n);
    printf("%d",num);
    return 0;
}

void Cal(int n)
{
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(num<a[i])
        {
            check++;
            break;
        }
        else if(num%a[i]!=0)
        {
            check++;
            break;
        }
    }
    if(check==0)
        return;
    num++;
    Cal(n);
}