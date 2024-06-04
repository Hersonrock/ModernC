#include "../include/fileio.h"

int randGen(){
        
	double *numbers = (double *)malloc(sizeof(double) * NUM_DOUBLES);
	srand(time(NULL));

	for(size_t i = 0; i < NUM_DOUBLES ; i++){
                int value = rand() % (int)pow(10, NUM_DIGITS); 
		numbers[i] = (double)(value / 100);
                if(value % 2 == 0) {
                        numbers[i] *= -1;
                }
	}
        
        writeIn(numbers, IN_PATH);
	free(numbers);	

        return EXIT_SUCCESS;
}
