#include "../include/fileio.h"

int randGen(){
        
	double *numbers = (double *)malloc(sizeof(double) * SIZE_LIMIT);
	srand(time(NULL));

	for(size_t i = 0; i < SIZE_LIMIT ; i++){
                int value = rand() % 100000;
		numbers[i] = (double)value / 100;
                if(value % 2 == 0) {
                        numbers[i] *= -1;
                }
	}
        
        writeOut(numbers);
	free(numbers);	

        return EXIT_SUCCESS;
}
