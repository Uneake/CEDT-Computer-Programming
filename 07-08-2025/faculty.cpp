#include <iostream>

std::string s;
std::string valid[]={"01","02","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","51","53","55","58"};
bool ok = false;

main(){
    std::cin>>s;
    int n=sizeof(valid)/sizeof(valid[0]);
    while(n--){
        if(s==valid[n])ok=true;
    }    
    if(ok)std::cout<<"OK";
    else std::cout<<"Error";
}