#include <stdio.h>
#include <stdlib.h>

int mymax(int a,int b);

int main() {
    printf("hello");
    // 注释
    /* 注释 */
    int a,b;
    a = 0;
    b = 1;
    printf("a is %d, b is %d\n", a, b);
    int c = mymax(a,b);
    printf("max val is %d\n", c);
    int d;
    scanf("%d", &d);
    printf("val d is %d\n", d);
    printf("a size is : %d\n", sizeof a);
    printf("int size is %d\n", sizeof(int));
    printf("double size is %d\n", sizeof(double));
    printf("float size is %d\n", sizeof(float));
    printf("char size is %d\n", sizeof(char));
    // printf("bool size is %d", sizeof(bool));
    return 0;
}

int mymax(int a, int b) {
    if (a >= b) {
        return a;
    }
    return b;
}