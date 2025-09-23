#include <bits/stdc++.h>
using namespace std;

vector<long long>shop;
int n,q,command;
long long tmp;
main(){
  cin>>n>>q;
  while(n--){
    cin>>tmp;
    shop.push_back(tmp);
  }
  while(q--){
    cin>>command;
    if(command==1){
      cin>>tmp;
      shop.push_back(tmp);
    }
    if(command==2)shop.erase(shop.begin());
    if(command==3)shop.pop_back();
    if(command==4){
      cin>>tmp;
      for(auto &p:shop)p+=tmp;
    }
    if(command==5){
      cin>>tmp;
      auto itr=shop.begin();
      for(;itr<shop.end();){
        if(*itr<tmp){
          itr = shop.erase(itr);
        }
        else itr++;
      }
    }
    if(command==6){
      cin>>tmp;
      long long sum=0;
      for(int i=0;i<tmp;i++){
        sum+=*(shop.end()-1);
        shop.pop_back();
      }
      shop.insert(shop.begin(),sum);
    }
  }
  long long num=shop.size(),sum=0;
  for(auto p:shop)sum+=p;
  cout<<num<<' '<<sum;
}