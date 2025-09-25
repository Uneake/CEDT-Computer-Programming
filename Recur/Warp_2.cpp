#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>>m;
int n,a,b,st,en;
bool finished;
set<vector<int>> ans;

void go(int now,vector<int> tmp){
    tmp.push_back(now);
    if(now==b){
        finished=true;
        ans.insert(tmp);
        return;
    }
    if(m.find(now)!=m.end()){
        for(auto e:m[now])go(e,tmp);
    }
}

main(){
    cin>>n>>a>>b;
    while(n--){
        cin>>st>>en;
        m[st].push_back(en);
    }
    go(a,{});
    if(finished){
        for(auto v:ans){
            int l=v.size();
            for(int i=0;i<l;i++){
                if(i!=0)cout<<" -> ";
                cout<<v[i];
            }
            cout<<'\n';
        }
    }
    else cout<<"no";
}