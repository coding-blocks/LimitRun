//
// Created by Arnav Gupta on 12/09/16.
//

#include <cstdio>
#include <sys/resource.h>
#include <cstdlib>
#include <zconf.h>

int main () {

    fprintf(stderr, "Infinite while loop");

    rlimit tLimit, mLimit;
    getrlimit(RLIMIT_CPU, &tLimit);
    getrlimit(RLIMIT_AS, &mLimit);

    fprintf(stderr, "tLimit = %d  ", tLimit.rlim_max);
    fprintf(stderr, "mLimit = %d  ", mLimit.rlim_max);
    int a = 1;
    while (a) {

    }
}

