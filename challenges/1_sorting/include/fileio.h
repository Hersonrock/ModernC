#ifndef FILE_IO
#define FILE_IO

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<time.h>
#include<math.h>
#include<errno.h>

#define NUM_DOUBLES 10000
#define NUM_DIGITS 5
#define MAX_FILE_SIZE (NUM_DIGITS + 3) * NUM_DOUBLES + 1 
#define OUT_PATH "./output_sorted.csv"
#define IN_PATH "./input_raw.csv"

int writeIn(double *inputArray, char *path);
int randGen();
int writeArray(char *path, double *outputArray);

#endif // FILE_IO
