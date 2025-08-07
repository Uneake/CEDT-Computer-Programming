#include <iostream>
#include <iomanip>
#include <cmath>

main(){
    std::cout<<std::fixed<<std::setprecision(15);
    double w,h;
    std::cin>>w>>h;
    std::cout<<sqrt(w*h)/(double)60<<'\n';
    std::cout<<(double)0.024265 * pow(w,0.5378)*pow(h,0.3964)<<'\n';
    std::cout<<(double)0.0333 * pow(w,0.6157-0.0188*log10(w))*pow(h,0.3);
}