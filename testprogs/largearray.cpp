//
// Created by Arnav Gupta on 12/09/16.
//

#include <cstdio>
#include <sys/resource.h>
#include <cstdlib>
int main () {

    rlimit tLimit, mLimit;
    getrlimit(RLIMIT_CPU, &tLimit);
    getrlimit(RLIMIT_AS, &mLimit);

    int a[100000];

    printf("tLimit = %d  ", tLimit.rlim_max);
    printf("mLimit = %d  ", mLimit.rlim_max);
    for (int i = 0; i < 100000; i++) {
        a[i] = i;
    }
}

