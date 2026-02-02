#include <stdio.h>
#include <stdlib.h>

struct Supplier {
    char name[30];
    char loc[30];
};

struct Product {
    int id;
    char name[30];
    float price;
    struct Supplier sup;
};

int main() {
    struct Product *p;

    p = (struct Product *)malloc(sizeof(struct Product));

    scanf("%d %s %f %s %s"&p->id,p->name,&p->price,p->sup.name, p->sup.loc);

    printf("Product ID: %d\n", p->id);
    printf("Product Name: %s\n", p->name);
    printf("Price: %.2f\n", p->price);
    printf("Supplier Name: %s\n", p->sup.name);
    printf("Supplier Location: %s\n", p->sup.loc);

    free(p);
    return 0;
}
