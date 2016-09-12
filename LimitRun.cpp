//
// Created by Arnav Gupta on 12/09/16.
//

#include <cstdio>
#include <string>
#include <getopt.h>
#include "libLimitRun.h"


#ifdef LOG_DEBUG
static bool DEBUG = true;
#else //LOG_DEBUG
static bool DEBUG = false;
#endif //LOG_DEBUG

using namespace std;
int main (int argc, char **argv) {
    printf("Hello");
    int opt;
    string progToRun;

    while ((opt = getopt (argc, argv, "t:m:f:")) != -1) {
        switch (opt) {
            case 't':
                if (DEBUG) printf("t %d", stoi(optarg));
                break;
            case 'm':
                if (DEBUG) printf("m %d", stoi(optarg));
                break;
            case 'f':
                progToRun = optarg;
                if (DEBUG) printf("f %s", optarg);

                break;
        }
    }

    setLimitAndRun(progToRun);
}