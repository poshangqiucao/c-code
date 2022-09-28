#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c[] = "dsdsds";
    printf("c size is %d\n", sizeof(c));
    printf("c value is %s\n", c);

    char name[20];
    printf("please input you name: ");
    scanf("%s", name);
    printf("your name is %s\n", name);

    char name2[20];
    printf("name: ");
    gets(name2);
    printf("name: ");
    puts(name2);

    printf("name length is %d", strlen(name));

}