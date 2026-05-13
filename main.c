#include <stdio.h>

int main() {
    
    int numeros[5] = {2, 4, 5, 8, 10};
    int *ptr;
    ptr = &numeros[0];
    
    // printf("%p",ptr);
    
    printf("Los numeros son: \n");
    
    // p es direccion, //d es el valor decimal
    
    for (int i = 0; i < 5; i++) {
        // print de la forma convencional
        printf("Vector[%d] %d", i, numeros[i]);
        // print usando punteros
        printf("%d\n",*(ptr++));
    }
    return 0;
}