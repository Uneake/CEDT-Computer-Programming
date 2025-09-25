#include <bits/stdc++.h>
using namespace std;

unordered_map<string, vector<string>> song; 
int n;
string song_name,singer;

string s,tmp;
main(){
  cin>>n;
  while (n--){
    getline(cin>>ws,s);
    tmp="";
    int l=s.size();
    for(int i=0;i<l;i++){
      if(s[i]!=',')tmp+=s[i];
      else {
        song_name=tmp;
        tmp="";
        i++;
      }
      if(i==l-1)singer=tmp;
    }
    song[song_name].push_back(singer);
  }
  tmp="";
  getline(cin>>ws,s);
    int l=s.size();
    for(int i=0;i<l;i++){
      if(s[i]!=',')tmp+=s[i];
      if(s[i]==',' || i==l-1){
        song_name=tmp;
        tmp="";
        cout<<song_name<<" -> ";
        bool is_first=true;
        if(!song[song_name].empty()){
          for(auto s:song[song_name]){
            if(!is_first)cout<<", ";
            cout<<s;
            is_first=false;
          }
        }
        else cout<<"Not found";
        cout<<'\n';
        i++;
      }
      
    }
}