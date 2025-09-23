#include <bits/stdc++.h>
using namespace std;

int mx_co,n,co;
vector<int> v;
vector<string>ans;
main(){
  cin>>n;
  v.push_back(n);
  co++;
  while(cin>>n){
    if(n!=*(v.end()-1))co=1;
    else co++;
    v.push_back(n);
    mx_co = max(mx_co,co);
  }
  for(vector<int>::iterator i=v.begin();i<v.end();i++){
    co=0;
    for(vector<int>::iterator j=i;j<v.end();j++){
      if(*j==*i)co++;
      else {
        if(co==mx_co) ans.push_back(to_string(*i)+" --> x[ "+to_string(i-v.begin())+" : "+to_string(j-v.begin())+" ]");
        i=j-1;
        break;
      }
      if(j==v.end()-1){
        if(co==mx_co) ans.push_back(to_string(*i)+" --> x[ "+to_string(i-v.begin())+" : "+to_string(v.end()-v.begin())+" ]");
        break;
      }
    }
  }
  sort(ans.begin(),ans.end());
  for(auto s:ans)cout<<s<<'\n';
}