#include <bits/stdc++.h>
using namespace std;

vector<pair<int,double>> q;
vector<double> finished;
string command;
int n,st,i;
pair<int,double>call;
double t;

main(){
  cin>>n;
  while(n--){
    cin>>command;
    if(command=="reset"){
      cin>>st;
      i=st;
    }
    if(command=="new"){
      cin>>t;
      cout<<">> ticket "<<i<<'\n';
      q.push_back({i++,t});
    }
    if(command=="next"){
      call = q[0];
      q.erase(q.begin());
      cout<<">> call "<<call.first<<'\n';
    }
    if(command=="order"){
      cin>>t;
      cout<<">> qtime "<<call.first<<' '<<t-call.second<<'\n';
      finished.push_back(t-call.second);
    }
    if(command=="avg_qtime"){
      double m=finished.size();
      double avg=0;
      if(m!=0){
        for(int j=0;j<m;j++)avg+=finished[j];
        avg/=m;
      }
      avg=round(avg*100.0)/100.0;
      cout<<">> avg_qtime "<<avg<<'\n';
    }
  }
}