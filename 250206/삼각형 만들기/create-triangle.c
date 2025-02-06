#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,x[105],y[105],X,Y,max=0,save;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(y[i]==y[j])
            {
                for(int k=0;k<n;k++)
                {
                    if(k!=i&&k!=j)
                    {
                        if(x[k]==x[i]||x[k]==x[j])
                        {
                            if(x[k]==x[i])
                            {
                                X=abs(x[k]-x[j]);
                            }
                            else
                            {
                                X=abs(x[k]-x[i]);
                            }
                        }
                        Y=abs(y[k]-y[i]);
                    }
                }
                save=X*Y;
                if(save>max)
                    max=save;
            }
        }
    }
    printf("%d",max);
    return 0;
}