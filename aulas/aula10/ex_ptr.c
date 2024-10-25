#include <stdio.h>

int main () {

int cachorro = 1;
int *dog = &cachorro;

printf("%d\n", *dog);
printf("%p\n", dog);

    return 0;
}