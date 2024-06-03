#include "../include/fileio.h"

int main(int argc, char *argv[argc + 1]){
        
        double input[SIZE_LIMIT] = {
               [0] = 3.0,
               [2] = 4.0,
        };

        writeOut(input);

        return EXIT_SUCCESS;
}
