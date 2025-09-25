#include <bits/stdc++.h>
using namespace std;

int qs[100001],v[100001];
int q[100001];
int n,k,mx=-1,mx_size=-1;
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        qs[i]=qs[i-1]+v[i];
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
            idx=j;
        }
        int si = idx-i+1;
        if(mx<qs[idx]-qs[i-1]){
            for(int j=0;j<max(si,mx_size);j++){
              if(j<si)q[j]=v[i+j];
              else q[j]=0;
            }
            mx=qs[idx]-qs[i-1];
            mx_size=si;
        }
        else if(mx==qs[idx]-qs[i-1]){
          if(si<mx_size)continue;
          bool state=false;
          if(si==mx_size){
            for(int j=0;j<mx_size;j++){
              if(q[j]==v[i+j])continue;
              if(q[j]>v[i+j]&&(!state))break;
              if(q[j]<v[i+j]){
                state=true;
              }
              if(state)q[j]=v[i+j];
            }
          }
          else if(si>mx_size){
            mx_size=si;
            for(int j=0;j<mx_size;j++){
              q[j]=v[i+j];
            }
          }
        }
       
    }
    cout<<mx<<'\n';
    for(int i=0;i<mx_size;i++)cout<<q[i]<<' ';
}