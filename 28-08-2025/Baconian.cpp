#include <bits/stdc++.h>
using namespace std;

string s,fake,tmp,ans;
char command;
string ma[300];
main(){
  ma['0']="UUUU";
  ma['1']="UUUL";
  ma['2']="UULU";
  ma['3']="UULL";
  ma['4']="ULUU";
  ma['5']="ULUL";
  ma['6']="ULLU";
  ma['7']="ULLL";
  ma['8']="LUUU";
  ma['9']="LUUL";
  ma['-']="LULU";
  ma[',']="LULL";
  cin>>fake;
  int l=fake.length();
  while(cin>>command){
    ans="";
    if(command=='E'){
      int co=0;
      cin>>tmp;
      int t=tmp.length();
      for(int i=0;i<t;i++){
        for(int j=0;j<4;j++){
          if(ma[tmp[i]][j]=='U'&&isalpha(fake[co]))ans+=toupper(fake[co]);
          else if (isalpha(fake[co]))ans+=tolower(fake[co]);
          else if(!isalpha(fake[co])) {
            ans+=fake[co];
            j--;
          }
          co=(co+1)%l;
        }
      }
    }
    else {
      getline(cin>>ws,tmp);
      int t=tmp.length();
      string k="";
      for(int i=0;i<t;i++){
        if(!isalpha(tmp[i]))continue;
        if(isupper(tmp[i]))k+='U';
        else k+='L';
        if(k.length()==4){
          for(int i='0';i<='9';i++){
            if(k==ma[i])ans+=(char)i;
          }
          if(k==ma['-'])ans+='-';
          if(k==ma[','])ans+=',';
          k="";
        }
      }
    }
    cout<<ans<<'\n';
  }
}