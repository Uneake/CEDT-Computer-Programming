#include <bits/stdc++.h>
using namespace std;

int text_to_t(string s){
  int ans=0;
  string tmp="";
  int l=s.size();
  for(int i=0;i<l;i++){
    if(s[i]!=':')tmp+=s[i];
    else {
      ans+=stoi(tmp)*60;
      tmp="";
    }
    if(i==l-1)ans+=stoi(tmp);
  }
  return ans;
}

string  song,name,genre,t;
map<string,int>ma;
vector<pair<int,string>>v;

main(){
  while(cin>>song>>name>>genre>>t){
    ma[genre]+=text_to_t(t);
  }
  for(auto p:ma){
    v.push_back({-p.second,p.first});
  }
  sort(v.begin(),v.end());
  for(int i=0;i<min(3,(int)v.size());i++){
    cout<<v[i].second<<" --> "<<(-v[i].first)/60<<':'<<(-v[i].first)%60<<'\n';
  }
}