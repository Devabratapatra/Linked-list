#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int a = 10;

    ptr = (int *)malloc(sizeof(int));

    *ptr = a;

    printf("\nBefore free : %d\n", *ptr);

    free(ptr);

    printf("\nAfter free : %d\n", *ptr);

    return 0;
}