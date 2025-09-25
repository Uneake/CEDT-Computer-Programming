#include <iostream>
#include <cmath>
#define ll long long

ll m,n,sum;
ll countt(ll a){
  ll t=0,k=1;
  ll b=pow(10,k);
  if(a<10)return a+1;
  t+=10;
  while(a/b>=10){
    t+=(b*10-b)*(k+1);
    k++;
    b=pow(10,k);
  }
  t+=(a-b+1)*(k+1);
  return t;
}
main(){
  std::cin>>m>>n;
  sum=countt(n)-countt(--m);
  std::cout<<sum;
}
