#include <iostream>
#include <cmath>

double l=0,u,a,x,k;
main(){
 std::cin>>a;
 u=a;
 x=(u+l)/2.0;
 k=pow(10,x)-a;
 if(k<0) k=-k;
 while(k>0.0000000001){
  if(pow(10,x)<a) l=x;
  else u=x;
  x=(u+l)/double(2.0);
  k=pow(10,x)-a;
  if(k<0) k=-k;
 }
 
std::cout<<x;
}