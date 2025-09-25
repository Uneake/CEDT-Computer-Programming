#include <bits/stdc++.h>
using namespace std;

bool arr[200000];
set<int> se;
int n,k,co;
main()
{
  cin>>k;
  while(cin>>n){
    se.insert(n);
    arr[n]=true;
  }
  for(auto num:se){
    if(k-num<0)continue;
    if(num!=k-num&&arr[k-num]){
      co++;
      arr[num]=false;
    }
  }
  cout<<co;
}
