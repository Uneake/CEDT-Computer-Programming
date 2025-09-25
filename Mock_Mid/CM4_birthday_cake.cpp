#include <bits/stdc++.h>
using namespace std;

vector<int>qs(1,0),v(1,0);
vector<pair<int,vector<int>>>q;
int n,k,s,mx=-1;
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>s;
        v.push_back(s);
        qs.push_back(qs[i-1]+s);
    }
    for(int i=1;i<=n;i++){
        int idx=i;
        vector<int>tmp;
        for(int j=i;j<=i+k-1;j++){
            if(j>n)break;
            if(v[j]>v[i]){
                idx=j-1;
                break;
            }
            tmp.push_back(-v[j]);
            idx=j;
        }
        if(mx<qs[idx]-qs[i-1]){
            q.clear();
            q.push_back({-tmp.size(),tmp});
            mx=qs[idx]-qs[i-1];
        }
        else if(mx==qs[idx]-qs[i-1])q.push_back({-tmp.size(),tmp});
        //cout<<qs[idx]-qs[i-1]<<endl;
    }
    cout<<mx<<'\n';
    sort(q.begin(),q.end());
    for(auto c:q[0].second)cout<<-c<<' ';
}