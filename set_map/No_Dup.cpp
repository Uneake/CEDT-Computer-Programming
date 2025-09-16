#include <bits/stdc++.h>
using namespace std;

set<int> s;
int n;
bool ch=false;
main(){
  while(cin>>n){
    if(s.find(n)!=s.end()){
      cout<<s.size()+1;
      ch=true;
      break;
    }
    s.insert(n);
  }
  if(!ch)cout<<-1;
}