#include <iostream>

std::string s;
main(){
  std::getline(std::cin>>std::ws,s);
  for(char& x:s){
    if(x=='(') x='[';
    else if(x=='[') x='(';
    else if(x==')') x=']';
    else if(x==']') x=')';
  }
  std::cout<<s;
}
