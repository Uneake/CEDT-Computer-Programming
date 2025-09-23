#include <bits/stdc++.h>
using namespace std;

vector<int> v,ans;
int n;
main(){
  while(cin>>n)v.push_back(n);
  sort(v.begin(),v.end());
  for(vector<int>::iterator i=v.begin();i<v.end();i++){
    if(i==v.begin()||*i!=*(i-1))ans.push_back(*i);
  }
  int s=ans.size();
  cout<<s<<'\n';
  int n = (s<10) ? s: 10;
  for(int i=0;i<n;i++)cout<<ans[i]<<' ';
}