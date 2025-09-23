#include <iostream>
#include <cmath>

double co,t=0,avg;

main(){
  while(t>-1){
    std::cin>>t;
    if(t>-1){
      co++;
      avg+=t;
    }
  }
  
  if(co!=0){
    avg/=co;
    avg = round(avg * 100) / 100;
    std::cout<<avg;
  }
  else std::cout<<"No Data";
}
