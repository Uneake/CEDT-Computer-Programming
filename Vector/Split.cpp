#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
  vector<string> ans;
  string tmp="";
  int l=line.length();
  for(int i=0;i<l;i++){
    char c=line[i];
    if(c==delimiter&&tmp!=""){
      ans.push_back(tmp);
      tmp="";
    }
    else if(c!=delimiter) tmp+=c;
  }
  if(tmp!="")ans.push_back(tmp);
  return ans;
}
int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) {
 cout << '(' << e << ')';
 }
}