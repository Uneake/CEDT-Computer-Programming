#include <iostream>
#include <cmath>

double a,b,c,r1,r2;
main(){
    std::cin>>a>>b>>c;
    r1 = (-b-sqrt(b*b-4*a*c))/(2*a);
    r1 = round(r1*1e3)/1e3;
    r2 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 = round(r2*1e3)/1e3;
    std::cout<<r1<<' '<<r2;
}