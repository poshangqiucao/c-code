#include <stdio.h>

struct Person {
    int id;
    int age;
    char *name;
};

typedef struct Person P;

int main() {
    // struct Person p1;
    // struct Person *p;
    P p1;
    P *p;
    P p2[10];
    p = &p1;
    printf("p1 address is %d\n", &p1);
    printf("p1 size is %d\n", sizeof(p1));
    printf("p2 size is %d\n", sizeof(p2));

    p1.id = 1;
    p1.age = 22;
    p1.name = "dsds";
    
    printf("p1 name is %s\n", p1.name);
    printf("p name is %s\n", p->name);
    return 0;
}