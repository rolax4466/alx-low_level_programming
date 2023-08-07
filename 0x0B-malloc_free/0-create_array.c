#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL) {
        return NULL; // Memory allocation failed
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}

int main() {
    unsigned int size = 10;
    char c = '*';

    char *result = create_array(size, c);

    if (result != NULL) {
        printf("Array of size %u initialized with '%c':\n", size, c);
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", result[i]);
        }
        printf("\n");

        free(result); // Remember to free the allocated memory
    } else {
        printf("Array creation failed! Size must be greater than 0.\n");
    }

    return 0;
}

