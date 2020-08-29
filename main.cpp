#include "main.h"
void stdout_args(int argc,char* argv[]){
    int i;
    for(i=0;i<argc;i++){
        std::cout << "argv[" << i << "]=" << argv[i] << std::endl;
    }

}
int main(int argc,char* argv[]){
    NEUTRINO_SETTING nskun;
    int c;
    const char* optstring = "i:d:zo:n";
    const struct option longopts[] = 
    {
        {"musicxml",required_argument,0,'i'},
        {"neutrino",required_argument,0,'d'},
        {"no_gpu",optional_argument,0,'z'},
        {"output_dir",required_argument,0,'o'},
        {"use_nsf",optional_argument,0,'n'},
        {0,0,0,0}
    };
    int lngindex=0;
    opterr=0;
    while ((c = getopt_long(argc,argv,optstring,longopts,&lngindex)) != -1){
        //stdout_args(argc,argv);
        if(c == 'i'){
            nskun.MUSICXML_PATH=optarg;
        }
        break;
    }
    std::cout << nskun.MUSICXML_PATH << std::endl;
    return 0;
}