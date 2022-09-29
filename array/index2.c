#include <stdio.h>
// 使用指针遍历数组
int main() {
    int i,a[10],*p=a;
    printf("please input 10 integer number: ");
    for(i=0; i<10; i++) {
        scanf("%d", p++);
    }
    p = a;
    for(i=0; i<10; i++) {
        printf("%d\t", *p);
        p++;
    }
    p = &a[9];
    printf("\n");
    for(i=0; i<10; i++) {
        printf("%d\t", *p);
        p--;
    }
    printf("\n");
    return 0;
}