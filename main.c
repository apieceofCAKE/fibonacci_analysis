#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fibonacci.h"


#define TERM 50


int main() {

    unsigned long value;
    clock_t start;
    clock_t end;
    double time_taken;

    start = clock();

    //Using comment sintax to select which one to run
    //value = iteractive_fib_1(TERM);
    //value = iteractive_fib_2(TERM);
    //value = recursive_fib_1(TERM);
    //value = recursive_fib_2(TERM, 0, 1);

    end = clock();
    time_taken = ((double)(end - start)) / ((double)(CLOCKS_PER_SEC));

    printf("\n The term %d of Fibonacci series: %lu\n", TERM, value);
    printf("\nTime spent by OS: %.6f seconds\n", time_taken);
    return 0;
}