#include <bits/stdc++.h>
using namespace std;

int n,m;
unordered_map<string,int>ma;
map<string,string>ans;
vector<pair<double,pair<string,vector<string>>>>v;
string dept,id;
int num;
double score;
main(){
  cin>>n;
  while (n--){
    cin>>dept>>num;
    ma[dept]=num;
  }
  cin>>m;
  while (m--){
    cin>>id>>score;
    ans[id]="";
    vector<string>tmp;
    for(int i=0;i<4;i++){
      cin>>dept;
      tmp.push_back(dept);
    }
    v.push_back({-score,{id,tmp}});
  }
  sort(v.begin(),v.end());
  for(auto p:v){
    for(auto d:p.second.second){
      if(ma[d]!=0){
        ma[d]--;
        ans[p.second.first]=d;
        break;
      }
    }
  }
  for(auto p:ans){
    cout<<p.first<<' '<<p.second<<'\n';
  }
}