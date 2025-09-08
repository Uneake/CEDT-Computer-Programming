#include <bits/stdc++.h>
using namespace std;

double z,sum,n,t,avg,sd;
main(){
    cin>>z;
    while(cin>>t){
        if(t==-1)break;
        sum+=t;
        sd+=t*t;
        n++;
    }
    avg=sum/n;
    sd = sqrt(sd/n - avg*avg);
    cout<<fixed<<setprecision(5)<<z*sd+avg;
}