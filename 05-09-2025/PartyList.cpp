#include <bits/stdc++.h>
using namespace std;

vector<pair<double,pair<string,double>>>party_list;
vector<pair<int,pair<double,string>>>result;
string s;
double score,sum,avg;

main(){
  while(cin>>s){
    if(s=="END")break;
    cin>>score;
    party_list.push_back({0.0,{s,score}});
    sum+=score;
  }
  avg=sum/100.0;
  sum=0;
  for(auto& p:party_list){
    double total = p.second.second/avg;
    p.first = -(total - (int)total);
    result.push_back({-1*(int)total,{-p.second.second,p.second.first}});
    sum+=(int)total;
  }
  if(sum<100){
    sort(party_list.begin(),party_list.end());
    int l=party_list.size();
    for(int i=0;i<l;i++){
      sum+=1;
      for(auto& p:result){
        if(p.second.second==party_list[i].second.first){
          p.first--;
          break;
        }
      }
      if(sum>=100)break;
    }
  }
  sort(result.begin(),result.end());
  for(auto p:result){
    if(p.first!=0)cout<<p.second.second<<' '<<-(int)p.first<<' '<<-(int)p.second.first<<'\n';
  }
}