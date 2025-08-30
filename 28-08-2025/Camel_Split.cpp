#include <bits/stdc++.h>
using namespace std;

string s,tmp;
int state,co=0,l;

bool is_num(char c){
  if((c>='0'&&c<='9'))return true;
  return false;
}
void print_word(){
  if(co)cout<<", "<<tmp;
  else cout<<tmp;
}

main(){
  cin>>s;
  l=s.length();
  for(int i=0;i<l;i++){
    if(i!=0){
    if((isupper(s[i]))||(tmp!=""&&is_num(s[i])&&!is_num(tmp[0]))||(tmp!=""&&is_num(tmp[0])&&isalpha(s[i]))){
        print_word();
        tmp="";
        co++;
      }
    }
    tmp+=s[i];
  }
  print_word();
}