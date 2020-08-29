#ifndef _HEADER_NEUTRINO_CUI_WRAPPER
#define _HEADER_NEUTRINO_CUI_WRAPPER
// here header
#include <getopt.h>
#include <iostream>
int main(int argc,char* argv[]);
void stdout_args(int argc,char* argv[]);
struct NEUTRINO_SETTING {
    bool usegpu;
    int threads;
    char* NEUTRINO_DIR;
    char* MUSICXML_PATH;
    char* OUT_PATH;
    bool use_nsf;
};
// end
#endif