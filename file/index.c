#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    f = fopen("text.txt","a");
    if(f == NULL) {
        printf("file is null");
        exit(1);
    }
    int a = 1;
    fprintf(f,"%d\n",a);
    fclose(f);
}