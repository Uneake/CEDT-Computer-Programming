#include <bits/stdc++.h>
using namespace std;

string a,b;
main(){
  cin>>a;
  reverse(a.begin(),a.end());
  while(true){
    cin>>b;
    if(b=="END")break;
    reverse(b.begin(),b.end());
    int a_length=a.length(),b_length=b.length(),carry=0;
    for(int i=0;i<max(a_length,b_length);i++){
      int tmp = (i<a_length ? a[i]-'0' : 0) + (i<b_length ? b[i]-'0' : 0)+carry;
      if(i<a_length)a[i] = '0'+(tmp%10);
      else a+=to_string(tmp%10);
      carry = tmp/10;
    }
    if(carry)a+=to_string(carry);
  }
  reverse(a.begin(),a.end());
  cout<<a;
}
