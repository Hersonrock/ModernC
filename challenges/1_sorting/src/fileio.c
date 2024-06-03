#include "../include/fileio.h"

int writeOut(double *inputArray){

        FILE *fd;
        const char *mode = "w";

        fd = fopen(OUT_PATH, mode);
        if(fd == NULL){
                perror("Error opening output file.\n");
                return EXIT_FAILURE;
        }
       
        //Creating csv file with line break before EOF
        for(size_t i = 0; i < SIZE_LIMIT; i++){
                fprintf(fd, "%.2f", inputArray[i]);
                (i != SIZE_LIMIT - 1) ? fprintf(fd, ",") : fprintf(fd, "\n");
        }
        
        fclose(fd);

        return EXIT_SUCCESS;
} 
