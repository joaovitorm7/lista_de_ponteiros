#include <stdio.h>

void trocar (int * x, int * y, int * z); 

int main() {
    int a, b, c;

    a = 1;
    b = 2;
    c = 3;
    
    trocar(&a, &b, &c);
    
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    
    return 0;
}

void trocar (int * x, int * y, int * z) {    
    int aux = *x;
    *x = *y;
    *y = *z;
    *z = aux;
}
