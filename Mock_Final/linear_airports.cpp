#include <bits/stdc++.h>
using namespace std;

map<string,vector<int>>airport;
string name,g,command_1,command_2;
int a,f;
bool change;
main(){
  cin>>a>>f;
  while(a--){
    cin>>name;
    getline(cin>>ws,g);
    for(auto c:g)airport[name].push_back(c-'0');
  }
  for(int i=0;i<f;i++){
    cin>>command_1;
    if(command_1=="MERGE"){
      cin>>command_1>>command_2;
      string t_mx=max(command_1,command_2),t_mn=min(command_1,command_2);
      for(auto s:airport[t_mx])airport[t_mn].push_back(s);
      airport[t_mx].clear();
      i--;
    }
    else{
      cin>>command_2;
      int mn=1000,idx=0,tmp_2=stoi(command_2.substr(4,2)),tmp_1=stoi(command_1.substr(4,2));
      string air_1=command_1.substr(0,3),air_2=command_2.substr(0,3);
      airport[air_1][tmp_1]=0;
      if(airport[air_2][tmp_2]==0){
        airport[air_1][tmp_1]=0;
        airport[air_2][tmp_2]=1;
      }
      else {
        change=true;
        int t=airport[air_2].size();
        for(int j=0;j<t;j++){
          if(airport[air_2][j]==0){
            if(abs(tmp_2-j)<mn){
              mn = abs(tmp_2-j);
              idx=j;
            }
          }
        }
        airport[air_1][tmp_1]=0;
        airport[air_2][idx]=1;
        if(mn!=1000)cout<<i<<" SHIFT "<<air_2<<'['<<idx<<"]\n";
        else {
          airport[air_1][tmp_1]=1;
          cout<<i<<" CANCEL\n";
        }
      }
    }
  }
  if(!change)cout<<"NO CHANGE";
}