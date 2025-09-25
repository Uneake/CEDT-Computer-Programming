#include <iostream>

int n;
main(){
 std::cin>>n;
 for(int y=0;y>-n;y--){
  for(int x=-n+1;x<n;x++){
    if(x>-y)break;
    if(x==y||x==-y||y==-n+1)std::cout<<'*';
    else std::cout<<'.';
  }
  std::cout<<'\n';
 }
}
