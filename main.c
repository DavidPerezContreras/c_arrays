#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *words[] = {"Hello", "World", "Pointers", "Are", "Cool"};
    char **ptr = words;

    for (int i = 0; i < 5; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}