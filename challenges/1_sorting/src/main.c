#include "../include/fileio.h"

int main(int argc, char *argv[argc + 1]){
       
        double output[NUM_DOUBLES] = {}; 
        randGen();
        writeArray(IN_PATH, output);

        //---Debugging--- 
        for(size_t i  = 0 ; i < NUM_DOUBLES; i += 2){
                printf("output[%ld]= %f\n", i, output[i]);
        }
        //--------------

        return EXIT_SUCCESS;
}
