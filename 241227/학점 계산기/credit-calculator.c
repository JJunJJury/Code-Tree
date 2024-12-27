#include <stdio.h>

int main() {
    int n,cnt=0;
    double sum=0,a,grade;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a);
        sum+=a;
        cnt++;
    }
    grade=sum/cnt;
    printf("%.1f\n",grade);
    if(grade>=4)
        printf("Perfect");
    else if(grade>=3)
        printf("Good");
    else if(grade<3)
        printf("Poor");
    return 0;
}