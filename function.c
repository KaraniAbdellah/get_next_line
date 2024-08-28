// the Implementation of get_next_line() function
#include <stdio.h>
#include "function.h"
#include <stdlib.h>
#include <string.h>




char *get_next_line(FILE *file_name) {
    
    char *line = malloc(sizeof(char) * 32);
    
    strcpy(line, "HELLO FROM HERE");
    
    return line;
    
}




