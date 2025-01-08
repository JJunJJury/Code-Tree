#include <stdio.h>

int main() {
    int a[100],b[100],check=0,num_a,num_b,cnt;
    scanf("%d %d",&num_a,&num_b);
    for(int i=0;i<num_a;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<num_b;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<=num_a-num_b;i++)
    {
        cnt=0;
        if(a[i]==b[0])
        {
            for(int j=0;j<num_b;j++)
            {
                if(a[i+j]==b[j])
                    cnt++;
            }
        }
        if(cnt==num_b)
            check=1;
    }
    if(check==1)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}