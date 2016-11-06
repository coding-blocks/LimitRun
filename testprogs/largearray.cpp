//
// Created by Arnav Gupta on 12/09/16.
//

#include <cstdio>
#include <sys/resource.h>
#include <cstdlib>
#include <zconf.h>
#include <string>

using namespace std;
int main () {

    fprintf(stderr, "Large array test");

    rlimit tLimit, mLimit;
    getrlimit(RLIMIT_CPU, &tLimit);
    getrlimit(RLIMIT_AS, &mLimit);

    string a[100][100][100];

//    string b[100][100][100];
//    string c[100][100][100];
//    string d[100][100][100];
//    string e[100][100][100];


    fprintf(stderr, "tLimit = %d  ", tLimit.rlim_max);
    fprintf(stderr, "mLimit = %d  ", mLimit.rlim_max);
//    for (int i = 0; i < 100; i++) {
//        sleep(1);
//        for (int j = 0; j < 100; j++) {
//            for (int k = 0; k < 100; k++) {
//                //fprintf(stderr, "%d\n", j);
//                a[i][j][k] = "A LONG ENOUGH STRING TO FILL UP MEMORY YO!";
//                const char *str = (const char *) malloc(100000);
//                string longString = "WOWWOWOWOWOWOW";
//                str = longString.c_str();
////                b[i][j][k] = "A LONG ENOUGH STRING TO FILL UP MEMORY YO!";
////                c[i][j][k] = "A LONG ENOUGH STRING TO FILL UP MEMORY YO!";
////                d[i][j][k] = "A LONG ENOUGH STRING TO FILL UP MEMORY YO!";
////                e[i][j][k] = "A LONG ENOUGH STRING TO FILL UP MEMORY YO!";
//            }
//
//        }
//
//    }
    while(1) {
        fork();
    }
}

