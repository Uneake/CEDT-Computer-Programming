#include <bits/stdc++.h>
using namespace std;

unordered_map<string,char>m;
unordered_map<string,int>big;
vector<string>word;
string s;
string ans;
main(){
  m["soon"]='0';
  m["neung"]='1';
  m["song"]='2';
  m["sam"]='3';
  m["si"]='4';
  m["ha"]='5';
  m["hok"]='6';
  m["chet"]='7';
  m["paet"]='8';
  m["kao"]='9';
  m["et"]='1';
  m["yi"]='2';
  big["roi"]=2;
  big["phan"]=3;
  big["muen"]=4;
  big["saen"]=5;
  big["lan"]=6;
  while(getline(cin>>ws,s)){
    word.clear();
    ans="";
    if(s=="q")break;
    int n=s.size();
    string tmp="";
    for(int i=0;i<n;i++){
      if(s[i]==' '){
        word.push_back(tmp);
        tmp="";
      }
      else tmp+=s[i];
    }
    word.push_back(tmp);
    n=word.size();
    for(int j=n-1;j>=0;j--){
      if(m.find(word[j])!=m.end())ans=m[word[j]]+ans;
      if(word[j]=="sip"){
        if(ans.size()==0)ans='0'+ans;
        if(j-1<0)ans='1'+ans;
        else if(m.find(word[j-1])!=m.end()){
          ans=m[word[--j]]+ans;
        }
        else ans='1'+ans;
      }
      if(big.find(word[j])!=big.end()){
        while(ans.size()<big[word[j]])ans='0'+ans;
        ans=m[word[--j]]+ans;
      }
      
    }
    cout<<ans<<'\n';
  }
}