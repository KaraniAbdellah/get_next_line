#include <stdio.h>
#include "function.h"


int main() {


    
    // think for another idea
    
    char *line = NULL;
    int position = 0;
    
    line = get_next_line("file.txt", &position);
    
    while (line != NULL) {
        
        printf("line = %s\n", line);
        line = get_next_line("file.txt", &position);
        
    }
    
    return 0;
}








