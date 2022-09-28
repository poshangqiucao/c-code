#include <stdio.h>

int main() {
    float f,c;
    printf("please input a f val: ");
    scanf("%f",&f);
    c = (5.0/9)*(f-32);
    printf("f=%f\nc=%f\n",f,c);
    char s = 'S';
    putchar(s);
    return 0;
}