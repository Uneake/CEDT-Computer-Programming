#include <bits/stdc++.h>
using namespace std;

multiset<char> s1,s2; 
string text1,text2;
bool ch=false;
main(){
  getline(cin>>ws,text1);
  getline(cin>>ws,text2);
  int l1=text1.size(),l2=text2.size();
  for(auto c:text1){
    if(c==' ')continue;
    s1.insert(toupper(c));
  }
  for(auto c:text2){
    if(c==' ')continue;
    s2.insert(toupper(c));
  }
  multiset<char>::iterator i1=s1.begin(),i2=s2.begin();
  if(s1.size()!=s2.size())ch=true;
  else{
    for(;i1 != s1.end() && i2 != s2.end() ; i1++,i2++){
      if(*i1!=*i2){
        ch=true;
        break;
      }
    }
  }
  if(ch)cout<<"NO";
  else cout<<"YES";
  
  
}