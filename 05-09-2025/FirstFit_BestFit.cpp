#include <bits/stdc++.h>
using namespace std;

vector<pair<int,pair<int,vector<int>>>>v;
vector<int> tmp;
string s;
int n,sum;

void first_fit(){
  bool ch=false;
    for(auto& p:v){
      if(-p.first+n<=100){
        p.first-=n;
        p.second.second.push_back(n);
        ch=true;
        break;
      }
    }

    if(!ch){
      tmp.push_back(n);
      v.push_back({-n,{tmp.size(),tmp}});
      tmp.clear();
    }
}

void best_fit(){
  bool ch=false;
  int idx,mn_=101,i=0;
    for(auto& p:v){
      if(-p.first+n<=100){
        if(100+p.first-n<mn_){
          mn_=100+p.first-n;
          idx=i;
        }
        ch = true;
      }
      i++;
    }
    if(!ch){
      tmp.push_back(n);
      v.push_back({-n,{tmp.size(),tmp}});
      tmp.clear();
    }
    else {
      v[idx].first-=n;
      v[idx].second.second.push_back(n);
    }
}

main(){
  v.push_back({0,{0,tmp}});
  tmp.clear();
  cin>>s;
  while(cin>>n){
    if(s=="first")first_fit();
    else {
      best_fit();
    }
  }
  for(auto& p:v){
    p.second.first=p.second.second.size();
    sort(p.second.second.begin(),p.second.second.end());
  }
  sort(v.begin(),v.end());
  for(auto p:v){
    for(auto x:p.second.second)cout<<x<<' ';
    cout<<endl;
  }
}