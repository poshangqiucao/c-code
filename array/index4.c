#include <stdio.h>

void cov(int *a,int n);
// 翻转数组
int main() {
    int i,a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("a : ");
    for(i=0; i < 10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    cov(a,10);
    printf("a: ");
    for(i=0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
}

void cov(int *a, int n) {
    int i,j,temp,m = (n-1)/2;
    for(i=0; i <= m; i++) {
        j = n - 1 - i;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}