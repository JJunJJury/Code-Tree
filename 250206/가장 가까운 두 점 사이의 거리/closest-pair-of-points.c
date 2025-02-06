#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
    int n,x[105],y[105],min=INT_MAX,save;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            save=pow((x[j]-x[i]),2)+pow((y[j]-y[i]),2);
            if(save<min)
                min=save;
        }
    }
    printf("%d",min);
    return 0;
}