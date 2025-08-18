#include <iostream>

std::string sol,ans;
int point;
main(){
 std::cin>>sol;
 std::getline(std::cin>>std::ws,ans);
 int s=sol.length(),a=ans.length();
 if(s!=a)std::cout<<"Incomplete answer";
 else{
  for(int i=0;i<s;i++){
    if(sol[i]==ans[i])point++;
  }
  std::cout<<point;
 }
}