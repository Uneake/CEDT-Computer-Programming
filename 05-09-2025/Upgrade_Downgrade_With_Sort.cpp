#include <bits/stdc++.h>
using namespace std;

vector<pair<int,pair<int,string>>>v;
string id,grade,fixed_grade[]={"A","B+","B","C+","C","D+","D","F"};
main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    cin>>id>>grade;
    int idx;
    for(int j=0;j<8;j++){
      if(grade==fixed_grade[j]){
        idx=j;
        break;
      }
    }
    v.push_back({idx,{i,id}});
  }
  while(cin>>id){
    int ion= (*(id.end()-1)=='-')? 1:-1;
    id = id.substr(0,(int)id.size()-1);
    for(auto& p:v){
      if(p.second.second==id){
        p.first = min(7,max(0,p.first+ion));
      }
    }
  }
  sort(v.begin(),v.end());
  for(auto p:v)cout<<p.second.second<<' '<<fixed_grade[p.first]<<'\n';
}