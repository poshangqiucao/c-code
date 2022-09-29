#include <stdio.h>

struct Person {
    int id;
    int age;
    char *name;
};

typedef struct Date {
    int year;
    int month;
    int day;
} Date, *DateList;

// typedef Date *DateList;

typedef struct Person P;

void check(Date d);

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

    Date date;
    date.day = 2022;
    date.month = 10;
    date.day = 1;
    printf("date address is %d\n", date);
    printf("date size is %d\n", sizeof(date));
    DateList datelist;
    datelist->year = 2022;
    datelist->month = 10;
    datelist->day = 1;
    printf("datelist address is %d\n", datelist);
    printf("datelist size is %d\n", sizeof(datelist));

    check(&date);
    // boolean ss;
    return 0;
}

void check(Date d) {
    printf("%d", d);
}