#include <stdio.h>

int main() {
    
    int numeros[5] = {2, 4, 5, 8, 10};
    
    printf("Los numeros son: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}