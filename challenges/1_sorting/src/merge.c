#include "../include/fileio.h"

void merge(double *array, double *left, size_t lsize, 
                double *right, size_t rsize){
        size_t i = 0;
        size_t j = 0;
        size_t k = 0;
        
        while(i < lsize && j < rsize){
                
                if( left[i] <= right[j]){
                        array[k] = left[i];
                        i++;
                }
                else{
                        array[k] = right[j];
                        j++;
                }
                k++;
        }

        while( i < lsize){
                array[k] = left[i];
                i++;
                k++;
        }
        
        while( j < rsize){
                array[k] = right[j];
                j++;
                k++;
        }

}

int mergeSort(double *array, size_t size){

        if(size < 2){
                return EXIT_SUCCESS;
        }

        size_t lsize = size / 2; //in division will drop the remainder
        size_t rsize = size - lsize;
        double *left = (double *)malloc(sizeof(double) * lsize);
        double *right = (double *)malloc(sizeof(double) * rsize);

        for(size_t i = 0; i < lsize; i++){
                left[i] = array[i];
        }

        for(size_t i = 0 ; i < rsize; i++){
                right[i] = array[lsize + i];
        }

        mergeSort(left, lsize);
        mergeSort(right, rsize);

        merge(array, left, lsize, right, rsize);

        free(left);
        free(right);
        
        return EXIT_SUCCESS;
}
