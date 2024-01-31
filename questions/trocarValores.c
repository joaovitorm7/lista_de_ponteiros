#include <stdio.h>

void trocarValores (int * x, int * z);

int main() {
   int a, b;

    printf("Digite dois valores: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    trocarValores(&a, &b);
    printf("Valores trocados A = %d e B = %d", a, b);
    return 0;
}

void trocarValores (int * x, int * z) {
    *x = *x + *z;
    *z = *x - *z;
    *x =*x - *z;
}