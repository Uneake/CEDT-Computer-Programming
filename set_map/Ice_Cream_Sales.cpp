#include <bits/stdc++.h>
using namespace std;

map<string,double> price,sales;
double total_sales,tmp;
int n,k;
string taste;
vector<pair<double,string>>v;

main(){
  cin>>n;
  while(n--){
    cin>>taste>>tmp;
    price[taste] = tmp;
  }
  cin>>k;
  while (k--){
    cin>>taste>>tmp;
    if(price.find(taste)==price.end())continue;
    sales[taste]+=price[taste]*tmp;
    total_sales+=price[taste]*tmp;
  }
  if(total_sales==0)cout<<"No ice cream sales";
  else{
    cout<<"Total ice cream sales: "<<total_sales<<'\n';
    for(auto p:sales)v.push_back({-p.second,p.first});
    sort(v.begin(),v.end());
    cout<<"Top sales: ";
    for(int i=0;i<v.size()&&v[i].first==v[0].first;i++)cout<<v[i].second<<' ';
  }
}