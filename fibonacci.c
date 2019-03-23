#include <stdio.h>
#include <stdlib.h>

#include "fibonacci.h"


unsigned long iteractive_fib_1(int n_th) {
    /*Returns the n_th term of Fibonacci Sequence. Iteractive. Stores the values in an array.*/

    unsigned long list[(n_th - 1)];
    list[0] = 1;
    list[1] = 1;

    for(int aux = 2; aux <= n_th; aux++) {
        list[aux] = list[(aux - 1)] + list[(aux - 2)];
    }

    return list[(n_th - 1)];
}


unsigned long iteractive_fib_2(int n_th) {
    /*Returns the n_th term of Fibonacci Sequence. Iteractive. Classic method.*/

    if (n_th <= 2) {
        return 1;
    }

    else {
        unsigned long a = 1;
        unsigned long b = 1;
        unsigned long c;

        for(int aux = 3; aux <= n_th; aux++) {
            c = a + b;
            a = b;
            b = c;
        }

        return  c;
    }
}


unsigned long recursive_fib_1(int n_th) {
    /*Returns the n_th term of Fibonacci Sequence. Recursive. Classic method.*/

    if(n_th <=2) {
        return 1;
    }

    else {
        return recursive_fib_1((n_th - 1)) + (recursive_fib_1(n_th - 2));
    }
}


unsigned long recursive_fib_2(int n_th, unsigned long aux_0, unsigned long aux_1) {
    /*Returns the n_th term of Fibonacci Sequence. Recursive. Set aux_0 0 and aux_1 1.*/

    if(n_th == 0) {
        return aux_0;
    }

    else {
        return recursive_fib_2((n_th - 1), aux_1, (aux_0 + aux_1));
    }
}

