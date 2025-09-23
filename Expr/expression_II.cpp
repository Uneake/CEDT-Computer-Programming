#include <iostream>
#include <cmath>


double x,y;
main(){
  std::cin>>x;
  y= (pow(x,sqrt(log((x+1)*(x+1)))))/((double)10-x);
  y = round(y*1e6)/1e6;
  std::cout<<y;
}
