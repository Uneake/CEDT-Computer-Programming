#include <bits/stdc++.h>
using namespace std;

string s,tmp;
char c;
bool state;
main(){
  while(getline(cin>>ws,s)){
    tmp="";
    state=false;
    int l=s.length();
    c=s[l-1];
    for(char x:s){
      if(x==c&&!state)state=true;
      else if(x==c&&state){
        state=false;
        cout<<tmp;
        tmp="";
      }
      else if(state)tmp+=x;
    }
    cout<<'\n';
  }
}
