#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"
#include <readline/readline.h>
#include <readline/history.h>
#define BUFFER_SIZE 256

int main() {
    char *input;

    while ((input = readline("Enter the line: ")) != NULL) {
        
        int shiftAmount;
        printf("Enter the shift: ");
        if (scanf("%d", &shiftAmount) != 1) {
            fprintf(stderr, "Shift input error\n");
            free(input);
            continue;
        }

        cyclicShiftWords(input, shiftAmount);
        printf("Result: %s\n", input);

        free(input);
    }


    return 0;
}