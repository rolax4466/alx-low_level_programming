#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL; // Return NULL if size = 0
    }

    char *array = (char *)malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c; // Initialize each element with the given char c
    }

    return array;
}
