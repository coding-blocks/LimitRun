//
// Created by Arnav Gupta on 12/09/16.
//

#ifndef LIMITRUN_LIBLIMITRUN_H
#define LIMITRUN_LIBLIMITRUN_H

#include <sys/resource.h>
#include <string>

static const rlim_t LIMIT_TIME_MAX = 10;
static const rlim_t LIMIT_MEM_MAX = 10;

static rlimit timeResourceLimit;
static rlimit memResourceLimit;

void setLimitAndRun(std::string progName, rlim_t t, rlim_t m);

#endif //LIMITRUN_LIBLIMITRUN_H
