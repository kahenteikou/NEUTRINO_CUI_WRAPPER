#include "main.h"

int main(int argc,char* argv[]){
    cmdline::parser p;
    p.add<std::string>("musicxml",'i',"musicxml file",true);
    p.add<std::string>("neutrino",'n',"NEUTRINO Dir",true);
    p.add<std::string>("out",'o',"OUTPUT Dir",true);
    p.add<int>("threads",'t',"Threads",false,8);
    p.add("help", 'h', "print help");

    if (!p.parse(argc, argv)||p.exist("help")){
        std::cout<<p.error_full()<<p.usage();
        return 0;
    }
    NEUTRINO_SETTING nskun;
    nskun.use_nsf=true;
    nskun.MUSICXML_PATH=p.get<std::string>("musicxml");
    nskun.NEUTRINO_DIR=p.get<std::string>("neutrino");
    nskun.OUT_PATH=p.get<std::string>("out");
    nskun.threads=p.get<int>("threads");
    stdout_NEUTRINO_SETTING(nskun);

    return 0;
}
void stdout_args(int argc,char* argv[]){
    int i;
    for(i=0;i<argc;i++){
        std::cout << "argv[" << i << "]=" << argv[i] << std::endl;
    }

}
void stdout_NEUTRINO_SETTING(NEUTRINO_SETTING ns){
    std::cout << "MusicXML   : " << ns.MUSICXML_PATH << std::endl;
    std::cout << "NEUTRINO   : " << ns.NEUTRINO_DIR << std::endl;
    std::cout << "USE NSF    : " << ns.use_nsf << std::endl;
    std::cout << "OUTPUT DIR : " << ns.OUT_PATH << std::endl;
    std::cout << "Threads    : " << ns.threads << std::endl;
}