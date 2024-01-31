#include <stdio.h>
#include <string.h>

void imprimir (float * ponteiro) {
    printf("%.2f\n", *ponteiro);
    *ponteiro = *ponteiro * 2;
    printf("O dobro do numero eh %.2f\n", *ponteiro);
}

int main() {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    imprimir(&num);
}