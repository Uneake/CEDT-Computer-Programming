#include <iostream>
#include <cmath>

double l=0,u,a,x,k,t;
main(){
  std::cin>>a;
  u=a;
  x=(u+l)/2.0;
  k=pow(10,x)-a;
  if(k<0) k=-k;
  t=pow(10,x);
  while(k>0.0000000001*std::max(t,a)){
    if(t<a) l=x;
    else u=x;
    x=(u+l)/2.0;
    t=pow(10,x);
    k=t-a;
    if(k<0) k=-k;
   }
  std::cout<<x;
}


