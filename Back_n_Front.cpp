#include <bits/stdc++.h>
using namespace std;

int co,t;
vector<int> v;
main(){
  cin>>t;
  while(cin>>t){
    if(t==-1)break;
    if(co%2)v.insert(v.begin(),t);
    else v.push_back(t);
    co++;
  }
  cout<<'[';
  for(auto x:v){
    if(x!=v[0])cout<<", ";
    cout<<x;
  }
  cout<<']';
}