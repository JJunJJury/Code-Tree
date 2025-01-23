#include <stdio.h>

typedef struct boom{
    char code[12];
    char color;
    int second;
}Boom;

int main() {
    Boom bomb;
    scanf("%s %c %d",bomb.code,&bomb.color,&bomb.second);
    printf("code : %s\n",bomb.code);
    printf("color : %c\n",bomb.color);
    printf("second : %d\n",bomb.second);
    return 0;
}