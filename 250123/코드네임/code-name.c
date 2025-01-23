#include <stdio.h>

struct Codename{
    char code;
    int score;
};
typedef struct Codename CODE;

int main() {
    int site=0,min=100;
    CODE member[5];
    for(int i=0;i<5;i++)
    {
        scanf("%c %d",&member[i].code,&member[i].score);
        getchar();
        if(member[i].score<min)
        {
            min=member[i].score;
            site=i;
        }
    }
    printf("%c %d",member[site].code,member[site].score);
    return 0;
}