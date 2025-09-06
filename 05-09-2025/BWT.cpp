#include <bits/stdc++.h>
using namespace std;

vector<string>v;
string s;
main(){
  cin>>s;
  s+='$';
  v.push_back(s);
  while(1){
    rotate(s.begin(),s.begin()+1,s.end());
    v.push_back(s);
    if(s[0]=='$')break;
  }
  sort(v.begin(),v.end());
  for(auto line:v)cout<<*(line.end()-1);
}