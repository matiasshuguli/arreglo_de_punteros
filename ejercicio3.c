#include <stdio.h>

int main (int argc, char *argv[]) {
    printf("This computing environment uses:\n");
    
    printf("%zu byte  for chars\n", sizeof(char));
    printf("%zu bytes for short ints\n", sizeof(short int));
    printf("%zu bytes for ints\n", sizeof(int));
    printf("%zu bytes for long ints\n", sizeof(long int));
    printf("%zu bytes for long long ints\n", sizeof(long long int));
    printf("%zu bytes for floats\n", sizeof(float));
    printf("%zu bytes for doubles\n", sizeof(double));
    printf("%zu bytes for pointers\n", sizeof(void*));
    
    return 0;
}