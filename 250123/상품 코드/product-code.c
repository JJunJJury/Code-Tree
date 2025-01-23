#include <stdio.h>

typedef struct product{
    char name[12];
    int code;
}Product;

int main() {
    Product Product_1={"codetree",50},Product_2;
    scanf("%s %d",Product_2.name,&Product_2.code);
    printf("product %d is %s\n",Product_1.code,Product_1.name);
    printf("product %d is %s\n",Product_2.code,Product_2.name);
    return 0;
}