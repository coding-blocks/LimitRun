//
// Created by Arnav Gupta on 12/09/16.
//

#include <string>
#include <cstdio>
#include <unistd.h>
#include "libLimitRun.h"

void setLimitAndRun (std::string progName, rlim_t timeLimit=LIMIT_TIME_MAX, rlim_t memLimit=LIMIT_MEM_MAX) {

    timeResourceLimit.rlim_cur = timeLimit;
    timeResourceLimit.rlim_max = timeLimit;

    memResourceLimit.rlim_cur = memLimit;
    memResourceLimit.rlim_max = memLimit;

    printf("setLimitAndRun");
    if (fork() == 0) {
        printf("Child process");
        setrlimit(RLIMIT_CPU, &timeResourceLimit);
//        setrlimit(RLIMIT_MEMLOCK, &memResourceLimit);
        setrlimit(RLIMIT_AS, &memResourceLimit);
//        setrlimit(RLIMIT_RSS, &memResourceLimit);
//        setrlimit(RLIMIT_DATA, &memResourceLimit);
        printf(progName.c_str());
        execv(progName.c_str(), NULL);
    }



}