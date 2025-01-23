#include <stdio.h>
#include <string.h>

struct user{
    char ID[12];
    int level;
};
typedef struct user USER;

int main() {
    USER user1,user2;
    scanf("%s %d",user2.ID,&user2.level);
    strcpy(user1.ID,"codetree");
    user1.level=10;
    printf("user %s lv %d\n",user1.ID,user1.level);
    printf("user %s lv %d",user2.ID,user2.level);
    return 0;
}