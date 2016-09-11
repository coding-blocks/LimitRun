//
// Created by Arnav Gupta on 12/09/16.
//

#include <string>
#include <cstdio>
#include <unistd.h>
#include "libLimitRun.h"

void setLimitAndRun (std::string progName) {

    timeResourceLimit.rlim_cur = LIMIT_TIME_MAX;
    timeResourceLimit.rlim_max = LIMIT_TIME_MAX;

    memResourceLimit.rlim_cur = LIMIT_MEM_MAX;
    memResourceLimit.rlim_max = LIMIT_MEM_MAX;



    if (fork() == 0) {
        setrlimit(RLIMIT_CPU, &timeResourceLimit);
//        setrlimit(RLIMIT_MEMLOCK, &memResourceLimit);
        setrlimit(RLIMIT_AS, &memResourceLimit);
//        setrlimit(RLIMIT_RSS, &memResourceLimit);
//        setrlimit(RLIMIT_DATA, &memResourceLimit);
        printf(progName.c_str());
        execv(progName.c_str(), NULL);
    }



}