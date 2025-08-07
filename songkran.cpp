#include <iostream>
#include <cmath>

int ps;
main(){
    std::cin>>ps;
    int y = (ps-543)%100;
    std::cout<<(y + y/4 +11)%7;
}