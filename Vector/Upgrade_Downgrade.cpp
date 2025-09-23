#include <bits/stdc++.h>
using namespace std;

unordered_map<string,string>upgrade,downgrade;
vector<pair<string,string>>v;
string id,grade,grade_2_up[] = {"F","D","D+","C","C+","B","B+","A","A"},grade_2_down[]={"A","B+","B","C+","C","D+","D","F","F"};
main(){
  for(int i=0;i<8;i++){
    upgrade[grade_2_up[i]]=grade_2_up[i+1];
    downgrade[grade_2_down[i]]=grade_2_down[i+1];
  }
  int n;cin>>n;
  while(n--){
    cin>>id>>grade;
    v.push_back({id,grade});
  }
  while(cin>>id){
    char ion=*(id.end()-1);
    id = id.substr(0,(int)id.size()-1);
    for(vector<pair<string,string>>::iterator i=v.begin();i<v.end();i++){
      if(id==(*i).first){
        if(ion=='+')(*i).second = upgrade[(*i).second];
        else (*i).second = downgrade[(*i).second];
      }
    }
  }
  for(int i=0;i<8;i++){
    for(auto x:v){
      if(x.second==grade_2_down[i])cout<<x.first<<' '<<x.second<<'\n';
    }
  }
}