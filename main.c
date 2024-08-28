#include <stdio.h>
#include "function.h"


int main() {


    
    
    
    char *line = NULL;
    FILE *p_file = fopen("file.txt", "r");
    line = get_next_line(p_file);
    printf("line = %s\n", line);
    
    
    
    
    

    return 0;
}








