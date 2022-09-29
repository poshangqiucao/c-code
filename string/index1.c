#include <stdio.h>

int main() {
    char h[] = "hello world!";
    printf("%s\n",h);
    printf("%c\n", *h);
    printf("%c\n",*(h+2));

    printf("%d\n", h);
    printf("%d\n", h+2);

    printf("\n");
    char *p = "hello world!";
    printf("%s\n", p);
    printf("%c\n", *p);
    printf("%c\n",*(p+2));

    printf("%d\n", p);
    printf("%d\n", p+2);
}