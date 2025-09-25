#include <bits/stdc++.h>
using namespace std;

unordered_map<char,vector<string>> m1,m2;
string bingo="BINGO",s;
vector<string>v;
bool bin;
int type1,type2,type3,type4,co;

int is_horizontal_bin(){
  for(int i=0;i<5;i++){
    if(m2['B'][i]=="*"&&m2['I'][i]=="*"&&m2['N'][i]=="*"&&m2['G'][i]=="*"&&m2['O'][i]=="*")return i;
  }
  return -1;
}

char is_vertical_bin(){
  for(int i=0;i<5;i++){
    if(m2[bingo[i]][0]=="*"&&m2[bingo[i]][1]=="*"&&m2[bingo[i]][2]=="*"&&m2[bingo[i]][3]=="*"&&m2[bingo[i]][4]=="*")return bingo[i];
  }
  return '\0';
}

bool is_left_right_bin(){
  if(m2['B'][0]=="*"&&m2['I'][1]=="*"&&m2['N'][2]=="*"&&m2['G'][3]=="*"&&m2['O'][4]=="*")return true;
  return false;
}

bool is_right_left_bin(){
  if(m2['B'][4]=="*"&&m2['I'][3]=="*"&&m2['N'][2]=="*"&&m2['G'][1]=="*"&&m2['O'][0]=="*")return true;
  return false;
}

main(){
  for(auto c:bingo){
    m1[c]=v;
    m2[c]=v;
  }
  getline(cin>>ws,s);
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>s;
      m1[bingo[j]].push_back(s);
      m2[bingo[j]].push_back(s);
    }
  }
  while(cin>>s){
    if(bin)continue;
    for(int i=0;i<5;i++){
      if(m2[s[0]][i]==s.substr(1,s.end()-s.begin()))m2[s[0]][i]="*";
    }
    if(!bin){
      type1=is_horizontal_bin();
      type2=is_vertical_bin();
      type3=is_left_right_bin();
      type4=is_right_left_bin();
      bin=(type1!=-1||type2!='\0'||type3||type4);
    }
    co++;
  }
  cout<<co<<'\n';
  if(type1!=-1){
    for(int i=0;i<5;i++){
      if(m1[bingo[i]][type1]=="*")continue;
      if(i!=0)cout<<", ";
      cout<<bingo[i]<<m1[bingo[i]][type1];
    }
    cout<<'\n';
  }
  if(type2){
    
    for(int i=0;i<5;i++){
      if(m1[type2][i]=="*")continue;
      if(i!=0)cout<<", ";
      cout<<(char)type2<<m1[type2][i];
    }
    cout<<'\n';
  }
  if(type3){
    
     for(int i=0;i<5;i++){
      if(m1[bingo[i]][i]=="*")continue;
      if(i!=0)cout<<", ";
      cout<<bingo[i]<<m1[bingo[i]][i];
    }
    cout<<'\n';
  }
  if(type4){
    
     for(int i=0;i<5;i++){
      if(m1[bingo[i]][4-i]=="*")continue;
      if(i!=0)cout<<", ";
      cout<<bingo[i]<<m1[bingo[i]][4-i];
    }
    cout<<'\n';
  }
}