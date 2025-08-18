#include <iostream>

int co;
std::string s;
main(){
  std::cin>>s;
  int n;n=s.length();
  for(int i=0;i<n;i++){
    co=0;
    for(int j=i;s[j]==s[i]&&j<n;j++){
      co++;
      i=j;
    }
    std::cout<<s[i]<<' '<<co<<' ';
  }
}