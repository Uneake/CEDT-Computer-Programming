#include <iostream>

int m,arr[1000000],row,zero,co;
main(){
    std::cin>>m;
    for(int i=0;row<m;i++,row = i/m){
        std::cin>>arr[i];
        if(arr[i]==0)zero=row;
    }
    for(int i=0;i<m*m;i++){
        if(arr[i]==0)continue;
        for(int j=i+1;j<m*m;j++){
            if(arr[j]==0)continue;
            if(arr[i]>arr[j])co++;
        }
    }
    if(m%2){
        if(!(co%2))std::cout<<"YES";
        else std::cout<<"NO";
    }
    else {
        if(co%2 != zero%2)std::cout<<"YES";
        else std::cout<<"NO";
    }
}