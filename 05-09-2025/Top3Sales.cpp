#include <bits/stdc++.h>
using namespace std;

unordered_map<string,double>m,sale;
vector<pair<double,string>>v;
string s;
double price;
main(){
  while(1){
    cin>>s;
    if(s=="END")break;
    cin>>price;
    m[s]=price;
    sale[s]=0;
  }
  while(cin>>s)if(m.find(s)!=m.end())sale[s]+=m[s];
  for(auto p:sale){
    if(p.second>0)v.push_back({-p.second,p.first});
  }
  sort(v.begin(),v.end());
  if(v.empty())cout<<"No Sales";
  else for(int i=0;i<min(3,(int)v.size());i++)cout<<v[i].second<<' '<<-v[i].first<<endl;
}