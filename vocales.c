#include <stdio.h>

int main (int argc, char *argv[]) {
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'}; 
    char *ptr,*aux;
    ptr = &vocales[0];
    aux = &vocales[4];
    *aux = 'x';
    for (int i = 0; i < 5; i++) {
        // print de la forma clasica
        printf("vocales[%d] %c", i, vocales[i]);
        // print usando punteros
        printf("%c\n",*(ptr++));
    }
    
    return 0;
}