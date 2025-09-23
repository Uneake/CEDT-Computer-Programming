#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c){
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
  return false;
}
string s,s_front,s_back,ans,tmp;
bool state=false;
int idx_v_f,idx_v_b,idx_en_f;
main(){
  getline(cin>>ws,s);
  int l=s.length();
  for(int i=0;;i++){
    if(is_vowel(s[i])&&!state){
      state = true;
      idx_v_f=i;
    }
    if(s[i]==' '){
      idx_en_f = i;
      break;
    }
    if(state){
      tmp+=s[i];
    }
  }
  for(int i=l-1;s[i]!=' ';i--){
    if(is_vowel(s[i]))idx_v_b=i;
  }
  for(int i=0;i<idx_v_f;i++)ans+=s[i];
  for(int i=idx_v_b;i<l;i++)ans+=s[i];
  for(int i=idx_en_f;i<idx_v_b;i++)ans+=s[i];
  for(int i=0;i<tmp.length();i++)ans+=tmp[i];
  cout<<ans;
}
