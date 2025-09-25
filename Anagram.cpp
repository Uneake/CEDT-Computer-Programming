#include <bits/stdc++.h>
using namespace std;

set<string>ans;
string s,tmp;
map<int,bool>visited;
int k;

void Anagram(int n){
  
  if(n>=k){
    ans.insert(tmp);
    return;
  }
  
  for(int i=0;i<k;i++){
    if(visited[i])continue;
    visited[i]=true;
    tmp[n]=s[i];
    Anagram(n+1);
    visited[i]=false;
  }

}

main(){
  cin>>s;
  k=s.length();
  tmp=s;
  Anagram(0);
  for(auto c:ans)cout<<c<<' ';
}