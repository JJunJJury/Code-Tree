#include <stdio.h>

int main() {
    double right,left;
    scanf("%lf %lf",&right,&left);
    if(right>=1&&left>=1)
        printf("High");
    else if(right>=0.5&&left>=0.5)
        printf("Middle");
    else   
        printf("Low");
    return 0;
}