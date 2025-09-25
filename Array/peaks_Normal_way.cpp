#include <iostream>

int arr[100000],n,co,state;
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])co++;
    }
    std::cout<<co;
}
