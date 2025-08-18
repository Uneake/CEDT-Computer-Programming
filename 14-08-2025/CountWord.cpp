#include <iostream>
#include <string>

std::string s,text;
int co,t,a,n;
main(){
  std::cin>>s;
  std::getline(std::cin>>std::ws,text);
  n=text.length();
  a = s.length();
  for(int i=0;i<n;i++){
    if(i==0){
      if(text.substr(i,a) == s && (!isalpha(text[i+a])||i+a+1>=n)){
        co++;
        i += a; 
      }
    }
    if((text[i]==' '||text[i]=='"'||text[i]=='.'||text[i]==','||text[i]=='\''||text[i]=='('||text[i]==')') && text.substr(i+1,a) == s && (!isalpha(text[i+a +1])||i+a+1>=n)){
      co++;
      i += a; 
    }
  }
  std::cout<<co;
}