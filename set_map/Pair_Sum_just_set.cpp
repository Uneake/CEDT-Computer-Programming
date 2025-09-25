#include <bits/stdc++.h>
using namespace std;

set<int> se,used;
int n,k,co;
main()
{
  cin>>k;
  while(cin>>n){
    se.insert(n);
  }
  for(auto num:se){
    if(num!=k-num&& used.find(k-num) == used.end()&& se.find(k-num)!=se.end() ){
      co++;
      used.insert(num);
    }
  }
  cout<<co;
}
