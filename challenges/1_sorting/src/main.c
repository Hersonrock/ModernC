#include "../include/fileio.h"
#include "../include/test.h"
#include "../include/merge.h"
#include "../include/quick.h"
#include "../include/time.h"

int main(int argc, char *argv[argc + 1]){

        double *array = (double *)malloc(sizeof(double) * NUM_DOUBLES);
        double startT,elapsedT;

        randGen();
        writeArray(IN_PATH, array);

        startT = getTime();
        //mergeSort(array, NUM_DOUBLES);
        quickSort(array, 0, NUM_DOUBLES);
        elapsedT = getTime();

        writeIn(array, OUT_PATH);

        testIncrementalOrder(OUT_PATH);
        testDecreasingOrder(OUT_PATH);

        printf("Execution took %f\n", elapsedT - startT);

        free(array);

        return EXIT_SUCCESS;
}
