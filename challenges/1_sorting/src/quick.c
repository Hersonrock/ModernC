#include"../include/fileio.h"

void swap(double *array, size_t a, size_t b){
        double temp = array[a];

        array[a] = array[b];
        array[b] = temp;

}
size_t partition(double *array, size_t low, size_t high){

        double pivot = array[low]; 
        size_t i = low; 
        size_t j = high;

        while( i < j){

                do{
                        i++;

                }while(array[i] <= pivot);

                do{
                        j--;
                }while(array[j] > pivot );
                
                //swap 
                if(i < j){
                        swap(array, i, j);
                }

        }
        swap(array, low, j);

        return j;
}

int quickSort(double *array, size_t low, size_t high){
        
        if(low < high){

                size_t j = partition(array, low, high);
                quickSort(array, low, j);
                quickSort(array, j + 1 , high);
        } 

        return EXIT_SUCCESS;
}
