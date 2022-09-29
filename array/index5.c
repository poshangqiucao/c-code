#include <stdio.h>
// 多维数组的指针
int main() {
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printf("a value is %d\n", a);
    printf("a+1 value is %d\n", a+1);
    printf("a+2 value is %d\n", a+2);
    printf("a[2][2] value is %d\n",a[2][2]);
    printf("a[2][2] value is %d\n",*(*(a+2)+2));
    printf("a[2][2] value is %d\n",*(a[2]+2));
    // 这里需要着重注意
    printf("a+1 value is %d\n", a+1);
    printf("*(a+1) value is %d\n", *(a+1));

    printf("*(*(a+1)) value is %d\n", *(*(a+1)));
    printf("*(a+1)+1 value is %d\n", *(a+1)+1);
    printf("*(*(a+1)+1) value is %d\n", *(*(a+1)+1));



}