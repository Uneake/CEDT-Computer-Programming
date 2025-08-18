#include <iostream>

double p,k,t;
main(){
  std::cin>>p;
  k=t=1.0;
  t=(t*(365.0-(k-1.0)))/365.0;
  while(1.0-t<p){
    k++;
    t=(t*(365.0-(k-1.0)))/365.0;
  }
  std::cout<<k;
}