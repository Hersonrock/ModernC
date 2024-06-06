#include "../include/fileio.h"

int testIncrementalOrder(char *path){
        double *evaluatedArray;

        evaluatedArray = (double *)malloc(sizeof(double) * NUM_DOUBLES);
        memset(evaluatedArray, 0 , sizeof(double) * NUM_DOUBLES);

        writeArray(path, evaluatedArray);

        for(size_t i = 0 ; i < NUM_DOUBLES; i++){
                double factor = evaluatedArray[i + 1] - evaluatedArray[i];
                if(factor < 0)
                {
                        printf("Array is not sorted in Ascending Order\n");
                        return EXIT_FAILURE;
                }
        }
        
        printf("Array is sorted in Ascending Order\n");
        

        free(evaluatedArray);
       
        return EXIT_SUCCESS;
}

int testDecreasingOrder(char *path){
        double *evaluatedArray;

        evaluatedArray = (double *)malloc(sizeof(double) * NUM_DOUBLES);
        memset(evaluatedArray, 0 , sizeof(double) * NUM_DOUBLES);

        writeArray(path, evaluatedArray);

        for(size_t i = 0 ; i < NUM_DOUBLES; i++){
                double factor =  evaluatedArray[i] - evaluatedArray[i + 1];
                if(factor < 0)
                {
                        printf("Array is not sorted in Decreasing Order\n");
                        return EXIT_FAILURE;
                }
        }
        
        printf("Array is sorted in Decreasing Order\n");
        

        free(evaluatedArray);
       
        return EXIT_SUCCESS;
}
