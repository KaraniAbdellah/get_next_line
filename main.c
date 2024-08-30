#include <stdio.h>
#include "function.h"


int main() {
    char *line = NULL;
    int position = 0;
    
    FILE *p_file = fopen("file.txt", "r");
    
    line = get_next_line(p_file, &position);
    
    while (line != NULL) {
        
        printf("line = %s\n", line);
        line = get_next_line(p_file, &position);
        
    }
    fclose(p_file);
    return 0;
}








