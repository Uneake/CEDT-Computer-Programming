#include <bits/stdc++.h>
using namespace std;

string dec2hex(int d) {
 if (d < 16) {
  char c;
  string s="";
  if(d<10)c='0'+d;
  else c='A'+d%10;
  s+=c;
  return s;
 }
 return dec2hex(d/16)+dec2hex(d%16);
} 


main(){
int d;
 while (cin >> d) {
 cout << d << " -> " << dec2hex(d) << endl;
 } 

}