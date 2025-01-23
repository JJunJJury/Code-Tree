#include <stdio.h>

int main() {
    struct member{
        char secret[15];
        char rocation;
        int time;
    };
    typedef struct member MEMBER; 
    MEMBER member_1;
    scanf("%s %c %d",member_1.secret,&member_1.rocation,&member_1.time);
    printf("secret code : %s\n",member_1.secret);
    printf("meeting point : %c\n",member_1.rocation);
    printf("time : %d\n",member_1.time);
    return 0;
}