#include <bits/stdc++.h>
using namespace std;

string team;
set<string> win,lose;
bool ch;
main(){
  while(cin>>team){
    win.insert(team);
    cin>>team;
    lose.insert(team);
  }
  for(auto s:win){
    if(lose.find(s)==lose.end()){
      ch=true;
      cout<<s<<' ';
    }
  }
  if(!ch)cout<<"None";
}