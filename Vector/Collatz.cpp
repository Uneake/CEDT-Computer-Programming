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
    if(n==1)break;
  }
  vector<int>::iterator i=v.end()-15;
  i = (i<v.begin())? v.begin() : i;
  vector<int>::iterator st=i;
  for(;i<v.end();i++){
    if(i!=st)cout<<"->";
    cout<<*i;
  }
}