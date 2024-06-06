#include "../include/fileio.h"
#include "../include/test.h"
#include "../include/merge.h"

int main(int argc, char *argv[argc + 1]){

        randGen();

        double *array = (double *)malloc(sizeof(double) * NUM_DOUBLES);
        writeArray(IN_PATH, array);

        mergeSort(array, NUM_DOUBLES);
        
        writeIn(array, OUT_PATH);

        testIncrementalOrder(OUT_PATH);
        testDecreasingOrder(OUT_PATH);

        return EXIT_SUCCESS;
}
