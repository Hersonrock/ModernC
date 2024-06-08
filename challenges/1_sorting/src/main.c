#include "../include/fileio.h"
#include "../include/test.h"
#include "../include/merge.h"
#include "../include/quick.h"

int main(int argc, char *argv[argc + 1]){

        double *array = (double *)malloc(sizeof(double) * NUM_DOUBLES);

        randGen();
        writeArray(IN_PATH, array);

        //mergeSort(array, NUM_DOUBLES);
        quickSort(array, 0, NUM_DOUBLES);
        writeIn(array, OUT_PATH);

        testIncrementalOrder(OUT_PATH);
        testDecreasingOrder(OUT_PATH);

        free(array);

        return EXIT_SUCCESS;
}
