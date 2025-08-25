#include <iostream>

int arr[100000],n,co,state;
main(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        if(i==0)continue;
        if(arr[i]>arr[i-1]&&state==0)state++;
        else if(arr[i]<arr[i-1]&&state==1){
            co++;
            state=0;
        }
        else if(arr[i]==arr[i-1]&&state==1)state=0;
    }
    std::cout<<co;
}