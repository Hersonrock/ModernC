#include "../include/fileio.h"
#include "../include/test.h"

int main(int argc, char *argv[argc + 1]){
       
        randGen();
        
        testIncrementalOrder(IN_PATH);
        testDecreasingOrder(IN_PATH);

        return EXIT_SUCCESS;
}
