#include <bits/stdc++.h>
using namespace std;

string s,ans,tmp;
int m,first_digit,back_num,tod,first_char,second_char;
main(){
  cin>>s;
  cin>>m;
  back_num = stoi(s.substr(4,3))+m;
  tod = back_num/1000;
  back_num %= 1000; 
  if(back_num<10)ans+="-00"+to_string(back_num);
  else if(back_num<100)ans+="-0"+to_string(back_num);
  else ans+='-'+to_string(back_num);

  second_char = s[2]+tod;
  tod = (second_char-'A')/26;
  second_char = (second_char-'A')%26 +'A';
  ans = (char)(second_char)+ans;

  first_char = s[1]+tod;
  tod = (first_char-'A')/26;
  first_char = (first_char-'A')%26 +'A';
  ans = (char)(first_char)+ans;

  first_digit = s[0]-'0'+tod;
  ans = to_string(first_digit)+ans;
  cout<<ans;
}
