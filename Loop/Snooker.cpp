#include <iostream>

int n,l,state,point;
int arr['Z'];
std::string s,tmp="YGNBPK";
bool ch=false;
main(){
  arr['Y']=2;
  arr['G']=3;
  arr['N']=4;
  arr['B']=5;
  arr['P']=6;
  arr['K']=7;
  std::cin>>n;
  while(n--){
    state=point=0;
    ch = false;
    getline(std::cin>>std::ws,s);
    l = s.length();
    for(int i=0;i<l;i+=2){
      if(s[i]=='R'&&state==0){
        state=1;
        point+=1;
      }
      else if(s[i]=='R'&&state==1){
        ch=true;
        break;
      }
      else if(s[i]=='R'&&state==2){
        state=1;
        point+=1;
      }
      else if(s[i]!='R'&&state==1){
        point+=arr[s[i]];
        state++;
      }
      else if(s[i]!='R'&&state==0){
        ch=true;
        break;
      }
      else if(state>1){
        if(s[i]==tmp[state-2]){
          point+=arr[s[i]];
          state++;
        }
        else {
          ch=true;
          break;
        }
      }
      else if(state>8){
        ch=true;
        break;
      }
    }
    if(ch)std::cout<<"WRONG_INPUT\n";
    else std::cout<<point<<'\n';
  }
}
