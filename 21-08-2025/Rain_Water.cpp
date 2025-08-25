#include <iostream>

int road[1000],L[1000],R[1000],n,ans;
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>road[i];
        if(i==0){
            L[i]=road[i];
            continue;
        }
        L[i]=std::max(L[i-1],road[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            R[i]=road[i];
            continue;
        }
        R[i]=std::max(R[i+1],road[i]);
        ans += std::min(L[i],R[i])-road[i];
    }
    
    std::cout<<ans;
}