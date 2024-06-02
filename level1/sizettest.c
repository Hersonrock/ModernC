#include<stdio.h>
#include<stdlib.h>

int main(int argc, [[maybe_unused]] char *argv[argc + 1]){

        for (size_t i = 10 ; i <= 10; --i){
                printf(" i= %zu\n", i);
        }
        return EXIT_SUCCESS;

}
