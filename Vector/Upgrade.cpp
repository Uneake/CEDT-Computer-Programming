#include <bits/stdc++.h>
using namespace std;

unordered_map<string,string>upgrade;
vector<pair<string,string>>v;
string id,grade,grade_2_up[] = {"F","D","D+","C","C+","B","B+","A","A"};
main(){
  for(int i=0;i<8;i++)upgrade[grade_2_up[i]]=grade_2_up[i+1];
  while(cin>>id){
    if(id=="q")break;
    cin>>grade;
    v.push_back({id,grade});
  }
  while(cin>>id){
    for(vector<pair<string,string>>::iterator i=v.begin();i<v.end();i++){
      if(id==(*i).first){
        (*i).second = upgrade[(*i).second];
      }
    }
  }
  for(auto student:v)cout<<student.first<<' '<<student.second<<'\n';
}