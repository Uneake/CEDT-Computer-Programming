#include <iostream>
#include <cmath>

double s;
main(){
    std::cin>>s;
    if(s>=1e9){
        s=s>=1e10?round(s/1e9):round((s/1e9)*10.0)/10.0 ;
        std::cout<< s <<'B';
    }
    else if(s>=1e6){
        s=s>=1e7?round(s/1e6):round((s/1e6)*10.0)/10.0;
        std::cout<< s <<'M';
    }
    else if(s>=1e3){
        s=s>=1e4?round(s/1e3):round((s/1e3)*10.0)/10.0;
        std::cout<< s <<'K';
    }
    else std::cout<<s/1;
}