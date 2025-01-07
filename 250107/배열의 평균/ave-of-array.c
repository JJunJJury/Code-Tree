#include <stdio.h>

int main() {
    int a[2][4],left[2]={0,},right[4]={0,},sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
            left[i]+=a[i][j];
            right[j]+=a[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("%.1f ",left[i]/(double)4);
    }
    puts("");
    for(int i=0;i<4;i++)
    {
        printf("%.1f ",right[i]/(double)2);
    }
    puts("");
    printf("%.1f",(double)sum/8);
    return 0;
}