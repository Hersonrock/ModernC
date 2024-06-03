#include "../include/fileio.h"

int randGen(){
        
	double *numbers = (double *)malloc(sizeof(double) * SIZE_LIMIT);
	srand(time(NULL));

	for(size_t i = 0; i < SIZE_LIMIT ; i++){
		numbers[i] = (double)(rand() % 100000 + 1) / 100;
	}
        
        writeOut(numbers);
	free(numbers);	

        return EXIT_SUCCESS;
}
