#include <stdio.h>

int main (int argc, char *argv[]) {
    char tab[] = {'a','e','i','o','u'};
    //sizeof te dice cuantos espacios ocupa la palabra
    int i = sizeof tab;
    printf("%d",i);
    return 0;
}