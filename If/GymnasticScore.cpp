#include <iostream>
#include <cmath>

double sum,mn,mx,tmp;
main(){
    for(int i=0;i<4;i++){
        std::cin>>tmp;
        sum+=tmp;
        if(i==0){
            mn=tmp;
            mx=tmp;
        }
        else{
            if(tmp>mx)mx=tmp;
            if(tmp<mn)mn=tmp;
        }
    }
    sum-=mx+mn;
    double avg;
    avg = sum/2;
    avg = round(avg*100.0)/100.0;
    std::cout<<avg; 
}
