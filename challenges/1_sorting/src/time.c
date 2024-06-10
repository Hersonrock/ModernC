#include "../include/fileio.h"

double getTime(){

        struct timeval tv;
        double startT;
        double miliStartT;
        const double microFactor = 1000000;
        double time;

        gettimeofday(&tv, NULL);
        startT = tv.tv_sec;
        miliStartT = (double)tv.tv_usec / microFactor;

        printf("seconds since Epoc: %ld\n", (long)startT);
        printf("additional μs %ld\n", tv.tv_usec);

        time = startT + miliStartT;

        return time;
}
