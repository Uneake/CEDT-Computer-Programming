#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>>m;
int n,a,b,st,en;
bool finished;

void go(int now){
    if(finished)return;
    if(now==b){
        finished=true;
        return;
    }
    if(m.find(now)!=m.end()){
        for(auto e:m[now])go(e);
    }
}

main(){
    cin>>n>>a>>b;
    while(n--){
        cin>>st>>en;
        m[st].push_back(en);
    }
    go(a);
    if(finished)cout<<"yes";
    else cout<<"no";
}