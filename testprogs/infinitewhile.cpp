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
    /*when value of variable 'a' equals 1 it means while(1) or while(true) because in boolean algebra 0 means false and 1 means true so while(true) the loop will keep on continuing as there is no terminating statement inside the loop so hence it is an infinite loop.*/
    while (a) {

    }
}

#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}//
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
/*     when value of variable 'a' equals 1 it means while(1) or while(true) because in boolean algebra 0 means false and 1 means true so while(true) the loop will keep on continuing as there is no terminating statement inside the loop so hence it is an infinite loop. */
    while (a) {

    }
}

