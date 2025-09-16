#include <bits/stdc++.h>
using namespace std;

string name,typ;
int n;
map<string,vector<string>>ma;
unordered_set<string> se;
vector<string> v;
main(){
  while (cin>>name>>typ){
    ma[typ].push_back(name);
    if(se.find(typ)==se.end())v.push_back(typ);
    se.insert(typ);
    
  }
 
  for(auto ty:v){
    cout<<ty<<": ";
    for(auto na:ma[ty]){
      cout<<na<<' ';
    }
    cout<<endl;
  }

}