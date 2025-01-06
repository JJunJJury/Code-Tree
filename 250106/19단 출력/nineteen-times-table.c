#include <stdio.h>

int main() {
    int cnt=0;
    for(int i=1;i<=19;i++)
    {
        for(int j=1;j<=19;j++)
        {
            cnt++;
            if(j==19)
            {
                cnt++;
                printf("%d * %d = %d\n",i,j,i*j);
            }
            else
            {
                printf("%d * %d = %d ",i,j,i*j);
                if(cnt%2==1)
                    printf("/ ");
                else
                    printf("\n");
            }
            
        }
    }
    return 0;
}