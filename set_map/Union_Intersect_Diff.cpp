#include <bits/stdc++.h>
using namespace std;

set<int> union_set(set<int>a,set<int>b){
  set<int> ans;
  for(auto n:a)ans.insert(n);
  for(auto n:b)ans.insert(n);
  return ans;
}

set<int> intersect_set(set<int>a,set<int>b){
  set<int> ans;
  for(auto n:a){
    if(b.find(n)!=b.end())ans.insert(n);
  }
  return ans;
}

set<int> diff_set(set<int>a,set<int>b){
  set<int> ans;
  for(auto n:a){
    if(b.find(n)==b.end())ans.insert(n);
  }
  return ans;
}

set<int> string_to_set(string tmp){
  set<int> ans;
  int l=tmp.size();
  string s="";
  for(int i=0;i<l;i++){
    if(tmp[i]!=' ')s+=tmp[i];
    else {
      ans.insert(stoi(s));
      s="";
    }
    if(i==l-1)ans.insert(stoi(s));
  }
  return ans;
}

string s;
set<int> a,b,U,I,D;

main(){
  getline(cin>>ws,s);
  a = string_to_set(s);
  U = a;
  I = a;
  D = a;
  while(getline(cin>>ws,s)){
    b = string_to_set(s);
    U = union_set(U,b);
    I = intersect_set(I,b);
    D = diff_set(D,b);
  }
  cout<< "U: ";
  if(U.size()==0)cout<<"empty set\n";
  else {
    for(auto num:U)cout<<num<<' ';
    cout<<'\n';
  }
  cout<< "I: ";
  if(I.size()==0)cout<<"empty set\n";
  else {
    for(auto num:I)cout<<num<<' ';
    cout<<'\n';
  }
  cout<< "D: ";
  if(D.size()==0)cout<<"empty set\n";
  else {
    for(auto num:D)cout<<num<<' ';
    cout<<'\n';
  }
}