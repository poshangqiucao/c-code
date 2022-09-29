#include <stdio.h>
#include <stdlib.h>

void change(int *p1);
void a1(int a[]);

int main() {
    int *p;
    int a[3] = {1,2,21};
    p = a;
    printf("p address is %d\n", p);
    printf("a address is %d\n", a);
    if(p == a) {
        printf("p == a\n");
    }
    printf("p size is %d\n", sizeof(p));
    printf("%d\n", *p);
    printf("%d\n", *a);
    printf("%d\n", a[0]);
    printf("%d\n", *(p+1));
    printf("%d\n", p+1);
    printf("%d\n", *(p+2));
    printf("%d\n", p+2);

    int *p1,*p2;
    int c = 10;
    p1 = &c;
    p2 = &c;
    c = 11;
    printf("p1 value is %d\n", *p1);
    printf("p2 value is %d\n", *p2);

    printf("c adddress is %d\n", &c);
    printf("p1 address is %d\n", p1);
    change(p1);
    printf("c address is %d\n c value is %d\n", &c, c);

    int *ptr = (int*) malloc(100*sizeof(int));
    printf("ptr size is %d\n", sizeof(*ptr));
    free(ptr);

    int aa[3] = {1,2,3};
    printf("aa address is %d\n", aa);
    a1(aa);

}

void change(int *p1) {
    printf("p1 address is %d\n", p1);
    *p1 = 12;
}

void a1(int a[]) {
    printf("a redss is %d\n", a);
    for(int i = 0; i < 3; i++) {
        printf("%d\t",a[i]);
    }
}