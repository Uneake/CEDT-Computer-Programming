#include <bits/stdc++.h>
using namespace std;

int power_mod(int a,int k,int m){
  if(k==0)return 1;
  int l=power_mod(a%m,k/2,m)%m;
  if(k%2){
      return ((a%m)*((l%m)*(l%m))%m)%m;
  }
  else {
    return ((l%m)*(l%m))%m;
  }
  
} 

int a,k,m;
main(){
  cin>>a>>k>>m;
  cout<<power_mod(a%m,k,m);
}