//
// Created by Arnav Gupta on 12/09/16.
//

#include <cstdio>
#include <sys/resource.h>
#include <cstdlib>

int main () {

    printf("Infinite while loop");

    rlimit tLimit, mLimit;
    getrlimit(RLIMIT_CPU, &tLimit);
    getrlimit(RLIMIT_AS, &mLimit);

    printf("tLimit = %d  ", tLimit.rlim_max);
    printf("mLimit = %d  ", mLimit.rlim_max);
    while (1) {

    }
}

