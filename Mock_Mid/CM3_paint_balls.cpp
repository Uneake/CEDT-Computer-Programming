#include <bits/stdc++.h>
using namespace std;

int n,m,k,r,row,col;
char c;
main(){
    cin>>n>>m>>k;
    vector<vector<char>> v(n,vector<char>(m,'-')) ;
    while(k--){
        cin>>c>>r>>row>>col;
        for(int i=row-r;i<=row+r;i++){
            if(i<0||i>=n)continue;
            for(int j=col-r;j<=col+r;j++){
                if(j<0||j>=m)continue;
                if(abs(row-i)+abs(col-j)<=r)v[i][j]=c;
            }
        }
    }
    for(auto y:v){
        for(auto x:y)cout<<x<<' ';
        cout<<'\n';
    }
}