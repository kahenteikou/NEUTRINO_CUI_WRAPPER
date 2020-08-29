#ifndef _HEADER_NEUTRINO_CUI_WRAPPER
#define _HEADER_NEUTRINO_CUI_WRAPPER
// here header
#include <iostream>
#include "cmdline.h"
#include <string>
struct NEUTRINO_SETTING {
    int threads;
    std::string NEUTRINO_DIR;
    std::string MUSICXML_PATH;
    std::string OUT_PATH;
    bool use_nsf;
};
int main(int argc,char* argv[]);
void stdout_args(int argc,char* argv[]);
void stdout_NEUTRINO_SETTING(NEUTRINO_SETTING ns);
// end
#endif