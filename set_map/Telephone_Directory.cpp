#include <bits/stdc++.h>
using namespace std;

map<string,string>name,telephone;
int n,k;
string tmp1,tmp2,tmp3;
main(){
  cin>>n;
  while(n--){
    cin>>tmp1>>tmp2>>tmp3;
    telephone[tmp1+' '+tmp2]=tmp3;
    name[tmp3]=tmp1+' '+tmp2;
  }
  cin>>k;
  while(k--){
    getline(cin>>ws,tmp1);
    cout<<tmp1<<" --> ";
    if(name.find(tmp1)!=name.end())cout<<name[tmp1]<<'\n';
    else if(telephone.find(tmp1)!=telephone.end())cout<<telephone[tmp1]<<'\n';
    else cout<<"Not found\n";
  }
}