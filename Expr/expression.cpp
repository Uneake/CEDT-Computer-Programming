#include <cmath>
#include <iostream>
#include <iomanip>

double top,bottom,ans,fac_10=10,top_last;
main(){
    int k=9;
    while(k!=0)fac_10*=k--;
    top+= M_PI- fac_10/pow(8,8);
    top_last = pow(log(9.7),7/sqrt(71)-sin(40.00*M_PI/180.00));
    top += top_last;
    bottom = pow(1.2,cbrt(2.3));
    std::cout<<std::fixed<<std::setprecision(5)<<top/bottom;
}
