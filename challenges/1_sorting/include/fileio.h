#ifndef FILE_IO
#define FILE_IO

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>

#define SIZE_LIMIT 3
#define OUT_PATH "./output_sorted.csv"
#define IN_PATH "./input_raw.csv"

int writeOut(double *inputArray);

#endif // FILE_IO
