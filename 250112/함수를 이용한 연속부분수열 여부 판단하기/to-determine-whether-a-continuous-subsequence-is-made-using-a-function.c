#include <stdio.h>
#include <stdbool.h>

int A[100],B[100];
bool Check(int a,int b);
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
    }
    if(Check(a,b))
        printf("Yes");
    else
        printf("No");
    return 0;
}

bool Check(int a,int b)
{
    int check=0;
    for(int i=0;i<a-b;i++)
    {
        for(int j=i;j<i+b;j++)
        {
            if(A[j]==B[j-i])
                check++;
        }
    }
    if(check==b)
        return true;
    return false;
}