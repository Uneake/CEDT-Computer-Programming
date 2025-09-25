#include <bits/stdc++.h>
using namespace std;

map<string,string>name,nickname;
int n,k;
string tmp1,tmp2;
main(){
  cin>>n;
  while(n--){
    cin>>tmp1>>tmp2;
    nickname[tmp1]=tmp2;
    name[tmp2]=tmp1;
  }
  cin>>k;
  while(k--){
    cin>>tmp1;
    if(name.find(tmp1)!=name.end())cout<<name[tmp1]<<'\n';
    else if(nickname.find(tmp1)!=nickname.end())cout<<nickname[tmp1]<<'\n';
    else cout<<"Not found\n";
  }
}