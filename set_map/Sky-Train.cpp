#include <bits/stdc++.h>
using namespace std;

unordered_map<string,set<string>>ma;
set<string>ans;
string st,en;

main(){
  while(cin>>st>>en){
    ma[st].insert(en);
    ma[en].insert(st);
  }
  ans.insert(st);
  for(auto station:ma[st]){
    ans.insert(station);
    for(auto attachstation:ma[station])ans.insert(attachstation);
  }
  for(auto station:ans)cout<<station<<'\n';
}