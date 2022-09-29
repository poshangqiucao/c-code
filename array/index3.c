#include <stdio.h>

#define NUM 2

void setA(int aa[]);
// 函数传递数据指针
int main() {
    int a[NUM], *p;
    double *p1;
    float *p2;
    char *p3;
    printf("p size is %d\n", sizeof(p));
    printf("p1 size is %d\n", sizeof(p1));
    printf("p2 size is %d\n", sizeof(p2));
    printf("p3 size is %d\n", sizeof(p3));
    printf("a address is %d\n",a);
    setA(a);
    for(int i=0; i<NUM; i++) {
        printf("%d\t", *(a+i));
    }

}

void setA(int aa[]) {
    printf("aa address is %d\n", aa);
    printf("aa size is %d\n", sizeof(aa));
    for(int i = 0; i < NUM; i++) {
        scanf("%d", aa++);
    }
    printf("aa address is %d\n", aa);
}