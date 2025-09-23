#include <iostream>

std::string t,ans="",tmp="";
int k,co=1;
main(){
  std::cin>>t;
  std::cin>>k;
  int n;n=t.length();
  for(int i=0;i<n;i++){
    tmp+=t[i];
    if(t[i]==t[i+1]){
      co++;
    }
    else {
      if(co<k){
        ans+=tmp;
      }
      tmp="";
      co=1;
    }
  }
  std::cout<<ans;
}
