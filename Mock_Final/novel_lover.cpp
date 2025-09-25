#include <bits/stdc++.h>
using namespace std;

int mn=101,x,n,total,sum,tmp;
map<int,vector<string>>lost;
string name;
bool ch;

main(){
  cin>>x>>n;
  while(n--){
    cin>>name>>total;
    sum=0;
    ch=false;
    for(int i=1;i<=total;i++){
      cin>>tmp;
      sum+=tmp;
      if(ch)continue;
      if(x-sum<0){
        if(i==1){
          ch=true;
          continue;
        }
        mn=min(mn,total-i+1);
        lost[total-i+1].push_back(name);
        ch=true;
      }
    }
    if(!ch){
      mn=0;
      lost[0].push_back(name);
    }
  }
  if(mn==101)cout<<"FIND SOMETHING FREE";
  else{
    for(auto name: lost[mn] )cout<<name<<'\n';
  }
}