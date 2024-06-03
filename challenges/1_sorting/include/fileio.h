#ifndef FILE_IO
#define FILE_IO

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<time.h>

#define SIZE_LIMIT 1000 
#define OUT_PATH "./output_sorted.csv"
#define IN_PATH "./input_raw.csv"

int writeOut(double *inputArray);
int randGen();

#endif // FILE_IO
