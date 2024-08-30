// the Implementation of get_next_line() function
#include <stdio.h>
#include "function.h"
#include <stdlib.h>
#include <string.h>


void check_memory(char *line) {
    if (line == NULL) {
        printf("Memory Location");
        exit(1);
    }
}


char *get_next_line(FILE *p_file, int *position) {
    
    int buffer_size = 128;
    char *line = (char *) malloc(sizeof(char) * buffer_size);
    check_memory(line);

    
    char c; int i = 0, check = 0;
    if (fseek(p_file, *position, SEEK_SET) != 0) {
        fprintf(stderr, "Error Seeking File\n");
        free(line); return NULL;
    }
    
    while ((c = fgetc(p_file)) && c != EOF && c != '\n') {
        if (i >= buffer_size) {
            line = realloc(line, sizeof(char) * (i + 2));
            check_memory(line);
        }
        line[i] = c;
        i++; check = 1;
    }
    line[i] = '\0';
    *position += i + 1;
    
    if (!check && c == EOF) {
        free(line);
        return NULL;
    }
    
    return line;
    
}







