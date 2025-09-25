#include <bits/stdc++.h>
using namespace std;

unordered_map<string,set<string>> lo;
int n;
string id,town;
vector<string> id_go;
bool ch;

main(){
  cin>>n;
  while(n--){
    cin>>id;
    id_go.push_back(id);
    while(cin>>town){
      if(town=="*")break;
      lo[id].insert(town);
    }
  }
  cin>>id;
  for(auto c:id_go){
    if(c==id)continue;
    for(auto t:lo[id]){
      if(lo[c].find(t)!=lo[c].end()){
        cout<<">> "<<c<<'\n';
        ch=true;
        break;
      }
    }
  }
  if(!ch)cout<<">> Not Found";
}