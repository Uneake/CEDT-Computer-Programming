#include <iostream>

int w;
main(){
    std::cin>>w;
    if(w>2000)std::cout<<"Reject";
    else if(w>1000)std::cout<<58;
    else if(w>500)std::cout<<38;
    else if(w>250)std::cout<<28;
    else if(w>100)std::cout<<22;
    else std::cout<<18;
}