#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;
main(){
  cin>>n;
  v.push_back(n);
  while(1){
    if(n%2){
      n=3*n+1;
    }
    else n/=2;
    v.push_back(n);
    if(v.size()>15)v.erase(v.begin());
    if(n==1)break;
  }
  for(auto x:v){
    if(x!=v[0])cout<<"->";
    cout<<x;
  }
}