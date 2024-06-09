#include "../include/time.h"
#include<stdio.h>

double getTime(){
        double time;
        struct tms buf;
        long clkTick = sysconf(_SC_CLK_TCK);
        long value;

        value = times(&buf);
        //debug print
        printf("value: %ld\n", value); 
        //
        
        time = (double)buf.tms_utime/(double)clkTick;

        return time;
}
