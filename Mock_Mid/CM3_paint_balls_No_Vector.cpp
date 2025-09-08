#include <bits/stdc++.h>
using namespace std;

int n,m,k,r,row,col;
char c,ma[600][600];
main(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)ma[i][j]='-';
    } 
    while(k--){
        cin>>c>>r>>row>>col;
        for(int i=row-r;i<=row+r;i++){
            if(i<0||i>=n)continue;
            for(int j=col-r;j<=col+r;j++){
                if(j<0||j>=m)continue;
                if(abs(row-i)+abs(col-j)<=r)ma[i][j]=c;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<ma[i][j]<<' ';
        cout<<'\n';
    } 
}