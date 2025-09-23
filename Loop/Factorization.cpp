#include <iostream>

int n;
main(){
  std::cin>>n;
  for(int i=2;n!=1;i++){
    while(n%i==0){
      std::cout<<i;
      if(n/i!=1)std::cout<<'*';
      n/=i;
    }
  }
}
