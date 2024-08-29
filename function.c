// the Implementation of get_next_line() function
#include <stdio.h>
#include "function.h"
#include <stdlib.h>
#include <string.h>




char *get_next_line(char *str, int *position) {
    
    char *line = (char *) malloc(sizeof(char) * 1000);
    FILE *p_file = fopen(str, "r");
    char c; int i = 0;
    
    fseek(p_file, *position, SEEK_SET);
    
    int check = 0;
    
    while ((c = fgetc(p_file)) && c != '\n' && c != EOF) {
        line[i] = c;
        i++; check = 1;
    }
    line[i] = '\0';
    *position += i + 1;
    
    fclose(p_file);
    
    if (!check && c != '\n') return NULL;
    
    return line;
    
}




