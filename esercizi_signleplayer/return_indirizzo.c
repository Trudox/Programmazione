#include <stdio.h>

int* crea_intero() {
    int x = 42;
    return &x;
}

int main() {
    int *p = crea_intero();
    printf("Il valore è: %d\n", *p);
    return 0;
}