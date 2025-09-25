#include <iostream>

int n,arr[1000][1000],mn,mx;
std::string s;
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i][0]>>arr[i][1];
    }
    std::cin>>s;
    if(s=="Zig-Zag"){
        mn=arr[0][0];mx=arr[0][1];
        for(int i=1;i<n;i++){
            mn = std::min(mn,arr[i][i%2]);
            mx = std::max(mx,arr[i][!(i%2)]);
        }
    }
    else {
        mn=arr[0][1];mx=arr[0][0];
        for(int i=1;i<n;i++){
            mn = std::min(mn,arr[i][!(i%2)]);
            mx = std::max(mx,arr[i][i%2]);
        }
    }
    std::cout<<mn<<' '<<mx;
}
