#include <iostream>
#include <cmath>

double x_e,y_e,r_e,r_p,x_m,y_m;
main(){
  std::cin>>x_e>>y_e>>r_e>>r_p>>x_m>>y_m;
  double c,dr;
  c = sqrt((x_e-x_m)*(x_e-x_m) + (y_e-y_m)*(y_e-y_m)); //m+n in section formula
  dr = r_e - r_p; //m in section formula, so c-dr is n
  double x_p, y_p;
  x_p = (x_e*(c-dr)+x_m*dr)/c; //section formula
  y_p = (y_e*(c-dr)+y_m*dr)/c; //section formula
  std::cout<<round(x_p)<<" "<<round(y_p);

}
