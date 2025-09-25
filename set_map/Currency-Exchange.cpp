#include <bits/stdc++.h>
using namespace std;

unordered_map<string,double> ma;
int k;
double total,tmp_num;
string tmp_s1,tmp_s2;
main(){
  cin>>k;
  ma["THB"]=1.0;
  while(k--){
    cin>>tmp_s1>>tmp_num;
    ma[tmp_s1]=tmp_num;
  }
  cin>>total>>tmp_s1;
  cout<<total<<' '<<tmp_s1;
  while(cin>>tmp_s2){
    total = (int)(total*ma[tmp_s1]/ma[tmp_s2]);
    cout<<" -> "<<(int)total<<' '<<tmp_s2;
    tmp_s1 = tmp_s2;
  }
}