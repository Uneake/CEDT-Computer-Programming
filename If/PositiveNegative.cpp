#include <iostream>
#include <cmath>

std::string state[] = {"negative","zero","positive"}, even_odd[]={"even","odd"};
main(){
    int n;std::cin>>n;
    std::cout<<state[n==0?n+1:n/abs(n)+1]<<'\n'<<even_odd[abs(n)%2];
}
