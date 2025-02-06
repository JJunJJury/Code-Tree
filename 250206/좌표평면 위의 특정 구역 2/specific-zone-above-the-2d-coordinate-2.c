#include <stdio.h>
#include <limits.h>

int main() {
    int min=INT_MAX,n,x[105],y[105],left,right,down,up,area;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++)
    {
        right=up=0;
        left=down=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(x[j]<=left)
                left=x[j];
            if(x[j]>=right)
                right=x[j];
            if(y[j]<=down)
                down=y[j];
            if(y[j]>=up)
                up=y[j];
        }
        area=(up-down)*(right-left);
        if(area<min)
            min=area;
    }
    printf("%d",min);
    return 0;
}